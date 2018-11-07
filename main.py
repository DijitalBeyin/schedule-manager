import logging
logger = logging.getLogger(__name__)
from database.Database import LocalDatabaseServer

a = LocalDatabaseServer()
a.LoadDatabase()
a._listCourses
