import logging
logger = logging.getLogger(__name__)
from database.Database import LocalDatabaseServer, DatabaseManager




server = LocalDatabaseServer()
server.LoadDatabase()



manager = DatabaseManager(server)
manager.AddCourse(name="Differential Equations", crn="13756", credits=5, code="MAT 210", grade_letter="DD", overwrite=True)
# manager.RemoveByID("MAT210_13756")
server._listCourses()





total_credits = 0
total_points = 0
for course in manager.GetCourseList():
    total_credits += course["credits"]
    total_points += course["credits"] *  course["grade"]

print "total_points", total_points
print "total_credits", total_credits
print "gpa", total_points/total_credits
