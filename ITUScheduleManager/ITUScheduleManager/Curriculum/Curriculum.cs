using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using ITUScheduleManager.Semester;

namespace ITUScheduleManager.Curriculum
{
    class Curriculum
    {
        public List<Semester> Semesters = new List<Semester>();
        public string Department { get; set; }

        public Curriculum()
        {

        }

        public double GetTotalMean()
        {
            double TotalMean = 0;
            double TotalCredits = 0;
            foreach(Semester sem in this.Semesters)
            {
                TotalMean += sem.GetWeightedMean() * sem.TotalCredits;
                TotalCredits += sem.TotalCredits;
            }

            return (double)(TotalMean / TotalCredits);
        }

    }
}
