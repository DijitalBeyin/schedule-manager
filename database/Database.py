import yaml, json, os

import logging
logger = logging

grade_letter_lookup = {
    "AA": 4.0,
    "BA": 3.5,
    "BB": 3.0,
    "CB": 2.5,
    "CC": 2.0,
    "DC": 1.5,
    "DD": 1.0,
    "FF": 0.0,
    "VF": 0.0,
    "IP": 0.0
}

class LocalDatabaseServer(object):
    """Local Database server, maintains low level database operations, based on the
    user requests."""
    def __init__(self):
        self.database = None
        self.database_filepath = "./database/database.json"
        self._key_features = ["code", "name", "id", "crn"]


    def is_database_loaded(self):
        if not self.database == None:
            return True
        else:
            return False

    def GetDatabase(self):
        return dict(self.database)

    def UpdateDatabase(self, database, save=True):
        self.database = database
        if save:
            self.SaveDatabase()

    def LoadDatabase(self):
        database = None
        try:
            database = yaml.safe_load(open(self.database_filepath, "r+").read())
        except Exception as e:
            logger.error("I/O Error, can't load database. reason: " + str(e))
            return False
        self.database = database
        return True

    def SaveDatabase(self):
        # if not os.path.exists(filename):
        try:
            open(self.database_filepath, "w+").write(json.dumps(self.database, indent=4))
        except:
            logger.error("I/O Error, can't save database.")
            return False
        return True


    def code_exists(self, code):
        return code in self.database["courses"].keys()

    def GetCourseByCode(self, code):
        if self.is_database_loaded():
            res = [self.database["courses"][x] for x in self.database["courses"].keys() if x == code]
            if len(res) > 0:
                return res[0]
            else:
                return None
        else:
            return None

    def GetCourseCodes(self):
        return [x for x in self.database["courses"].keys()]


    def AddCourse(self, course, overwrite=False):
        if not self.code_exists(course["code"]) or overwrite:
            self.database["courses"][course["code"]] = course
            self.SaveDatabase()
            return True
        else:
            print "course already exists", course["name"], course["code"]
            return False


    def RemoveCourseById(self, id):
        if id in [self.database["courses"][x]["id"] for x in self.database["courses"].keys()]:
            print [self.database["courses"].pop(x) for x in self.database["courses"].keys() if self.database["courses"][x]["id"] == id][0]
            self.SaveDatabase()
            return True
        else:
            return False

    def _listCourses(self):
        for x in self.database["courses"].values():
            print x["name"], x["code"], x["grade-letter"]
            # print x["name"]





class DatabaseManager(object):
    """docstring for DatabaseManager."""
    def __init__(self, local_database):
        self.local_database = local_database

    def AddCourse(self, code, crn, name, credits, grade_letter="IP", overwrite=False):
        id = code.replace(" ", "") + "_" + crn
        course = {
            "id": id,
            "code": code,
            "crn": crn,
            "name": name,
            "credits": 4,
            "grade-letter": grade_letter,
            "grade": grade_letter_lookup[grade_letter]
        }
        self.local_database.AddCourse(course, overwrite=True)



    def GetCourseList(self):
        return [self.local_database.GetCourseByCode(x) for x in self.local_database.GetCourseCodes()]

    def RemoveByID(self, id):
        return self.local_database.RemoveCourseById(id)







#
