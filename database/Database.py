import yaml, json, os

import logging
logger = logging


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


    def AddCourse(self, course):
        if not self.code_exists(course["code"]):
            self.database["courses"][course["code"]] = course
            self.SaveDatabase()
            return True
        else:
            print "course already exists", course["name"], course["code"]
            return False

    def RemoveCourseByCode(self, code):
        self.database["courses"].pop(code, None)
        self.SaveDatabase()

    def _listCourses(self):
        for x in self.database["courses"].values():
            print x["name"], x["code"]
            # print x["name"]




a = LocalDatabaseServer()
a.LoadDatabase()
# b = a.GetCourseByCode("ELK 313")
# a.RemoveCourseByCode("ELK 313")
# a.AddCourse(b)
a._listCourses()









#
