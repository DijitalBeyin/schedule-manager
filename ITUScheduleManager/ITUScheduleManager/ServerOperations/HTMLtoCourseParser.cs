using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using ITUScheduleManager.CurriculumLibrary.SemesterLibrary.CourseLibrary;

namespace ITUScheduleManager.ServerOperations
{
    class HTMLtoCourseParser
    {
        public string Link = "http://www.sis.itu.edu.tr/tr/ders_programlari/LSprogramlar/prg.php?fb=";

        public HTMLtoCourseParser()
        {

        }

        public Course GetCourses(string Branch, string Crn)
        {
            string SearchUrl = this.Link + Branch;
            // TODO: -
            return new Course();
        }

    }
}
