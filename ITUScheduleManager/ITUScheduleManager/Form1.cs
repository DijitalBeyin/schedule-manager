using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;
using ITUScheduleManager.CurriculumLibrary;
using ITUScheduleManager.CurriculumLibrary.SemesterLibrary.CourseLibrary;

namespace ITUScheduleManager
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
            this.Load += Form1_Load;
        }

        private void Form1_Load(object sender, EventArgs e)
        {
            Course Ege1 = new Course();
            Ege1.Branch = "MAT";
            Ege1.Building = "MED";
            Ege1.Capacity = 50;
            Ege1.Code = "MAT 103";
            Ege1.Credits = 4;
            Ege1.Crn = "30411";
            Ege1.Departments = "BIO, CEV, CHZ, DEN, END, FIZ, GEM, GEMM, GEO, GID, IML, ISL, JDF, JEF, JEO, KIM, KIMM, KMM, KMMM, MAD, MAK, MAKM, MATM, MET, MTO, PET, PETM, TEK, UCK, UCKM, UZB, UZBM".Trim().Split(',');
            Ege1.Enrolled = 47;
            Ege1.Grade = Grading.BB;
            Ege1.Instructor = "Mehmet Ali Karaca";
            Ege1.Room = "A12";
            Ege1.Title = "Matematik I";
        }
    }
}
