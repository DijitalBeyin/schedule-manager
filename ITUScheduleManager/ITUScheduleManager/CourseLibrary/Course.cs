using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ITUScheduleManager.CourseLibrary
{
    public enum Grading
    {
        AA = 4,
        BA = 7,
        BB = 6,
        CB = 5,
        CC = 4,
        DC = 3,
        DD = 2,
        VF = 1,
        FF = 0,
        IDLE = -1,
        M = -2
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
        public int Semester { get; set; }
        // TODO: Construct Departments as class -> Departments
        public string[] Departments { get; set; }


        // TODO: To be improved.
        public List<Tuple<DateTime, DateTime>> Dates = new List<Tuple<DateTime, DateTime>>();

        public double Credits { get; set; }
        public Grading Grade { get; set; }

        public Course()
        {

        }

        public bool AddToCourses()
        {
            return CourseManager.AddCourse(this);
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

    class CourseManager
    {
        private static List<Course> AllCourses = new List<Course>();
        private static List<Course> AbstractCourses = new List<Course>();

        public static double GetGPABySemester(int semester)
        {
            double totalCredits = sumArray(AllCourses.FindAll(x=>x.Semester == semester).ToList().Select(x=>x.Credits).ToArray());
            double totalWeighted = sumArray(AllCourses.FindAll(x=>x.Semester == semester).ToList().Select(x=>x.GetWeighted()).ToArray());
            return totalWeighted / totalCredits;
        }

        public static double GetGPA()
        {
            double totalCredits = sumArray(AllCourses.Select(x => x.Credits).ToArray());
            Console.WriteLine("Total Credits are: {0}", totalCredits);
            double totalWeighted = sumArray(AllCourses.Select(x => x.GetWeighted()).ToArray());
            Console.WriteLine("Total Weigted are: {0}, calcualting the GPA: {1}", totalCredits, totalWeighted / totalCredits);
            return totalWeighted / totalCredits;
        }

        public static double GetAbstractGPA()
        {
            return 0;
        }

        public static bool ClearAbstractField()
        {
            return false;
        }

        public static bool MoveToAbstractField()
        {
            return false;
        }

        public static bool CheckConflict()
        {
            // ConflictRule = course code
            var item = AllCourses.FindAll(x =>
            {
                return AllCourses.FindAll(c => c.Code == x.Code).ToList().Count > 1;
                //return true;
            }
            );
            if (item.Count > 0)
                return true;
            else
                return false;
        }

        public static bool CheckConflictOfCourse(Course toCheck)
        {
            return AllCourses.FindAll(c => c.Code == toCheck.Code).ToList().Count >= 1;
        }

        public static bool AddCourse(Course toAdd)
        {
            //return false;
            bool error = false;
            // check course here! conflicts etc.
            bool conflict = CheckConflictOfCourse(toAdd);

            if (conflict)
            {
                return false;
            }
            AllCourses.Add(toAdd);
            return true;
        }

        public static bool RemoveByCourse(Course toDelete)
        {
            if (toDelete != null)
            {
                AllCourses.Remove(toDelete);
                return true;
            }
            else
            {
                return false;
            }
        }

        public static bool RemoveByCrn(string crn)
        {
            Course toDelete = AllCourses.Find(x => x.Crn == crn);
            if (toDelete != null)
            {
                AllCourses.Remove(toDelete);
                return true;
            }
            else
            {
                return false;
            }
        }

        public static bool RemoveByCode(string code)
        {
            Course toDelete = AllCourses.Find(x => x.Code == code);
            if (toDelete != null)
            {
                AllCourses.Remove(toDelete);
                return true;
            }
            else
            {
                return false;
            }

        }

        public static Course SearchByCode(string code)
        {
            return AllCourses.Find(x => x.Code == code);
        }

        public static Course SearchByCRN(string crn)
        {
            return AllCourses.Find(x => x.Crn == crn);
        }

        private static double sumArray(double[] array)
        {
            double total = 0;
            foreach (var item in array)
            {
                total += item;
            }
            return total;
        }
    }
}
