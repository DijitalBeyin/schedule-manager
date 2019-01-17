import logging
logger = logging.getLogger(__name__)
from database.Database import LocalDatabaseServer, DatabaseManager




server = LocalDatabaseServer()
server.LoadDatabase()



manager = DatabaseManager(server)
# manager.AddCourse(name="Differential Equations", crn="13756", credits=5, code="MAT 210")
print server.RemoveCourseById("MAT210_13756")
server._listCourses()





code_list = server.GetCourseCodes()

total_credits = 0
total_points = 0

for code in code_list:
    course = server.GetCourseByCode(code)
    total_credits += course["credits"]
    total_points += course["credits"] *  course["grade"]

print total_points
print total_credits
print total_points/total_credits
