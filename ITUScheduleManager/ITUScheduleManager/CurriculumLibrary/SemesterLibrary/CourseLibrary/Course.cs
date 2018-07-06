using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ITUScheduleManager.CurriculumLibrary.SemesterLibrary.CourseLibrary
{
    public enum Grading
    {
        AA = 8,
        BA = 7,
        BB = 6,
        CB = 5,
        CC = 4,
        DC = 3,
        DD = 2,
        VF = 1,
        FF = 0
    }

    class Course
    {
        public string Crn { get; set; } // 13264
        public string Branch { get; set; } // MAT, EHB
        public string Code { get; set; } // 214, 222, 101
        public string Title { get; set; } //Elektromagnetik alanlara giris
        public string Instructor { get; set; }
        public string Building { get; set; }
        public string Room { get; set; }
        public int Capacity { get; set; }
        public int Enrolled { get; set; }

        // TODO: Construct Departments as class -> Departments
        public string[] Departments { get; set; }


        // TODO: To be improved.
        public List<Tuple<DateTime, DateTime>> Dates = new List<Tuple<DateTime, DateTime>>();

        public double Credits { get; set; }
        public Grading Grade { get; set; }

        public Course()
        {
            CourseManager.AllCourses.Add(this);
        }

        public double GetGradeValue()
        {
            return (double)((double)((int)this.Grade) / 2);
        }

        public double GetWeighted()
        {
            return this.GetGradeValue() * this.Credits;
        }
    }
}
