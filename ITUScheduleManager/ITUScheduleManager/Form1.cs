using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

using ITUScheduleManager.CourseLibrary;


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
            Ege1.Semester = 2;

            Course Ege2 = new Course();
            Ege2.Branch = "MAT";
            Ege2.Building = "MED";
            Ege2.Capacity = 50;
            Ege2.Code = "MAT 103";
            Ege2.Credits = 3;
            Ege2.Crn = "30411";
            Ege2.Departments = "BIO, CEV, CHZ, DEN, END, FIZ, GEM, GEMM, GEO, GID, IML, ISL, JDF, JEF, JEO, KIM, KIMM, KMM, KMMM, MAD, MAK, MAKM, MATM, MET, MTO, PET, PETM, TEK, UCK, UCKM, UZB, UZBM".Trim().Split(',');
            Ege2.Enrolled = 47;
            Ege2.Grade = Grading.CC;
            Ege2.Instructor = "Mehmet Ali Karaca";
            Ege2.Room = "A12";
            Ege2.Title = "Matematik I";
            Ege2.Semester = 1;

            Course Ege3 = new Course();
            Ege3.Code = "MAT 103";
            Ege3.Semester = 2;
            Ege3.Grade = Grading.CC;
            Ege3.Credits = 3;

            Ege1.AddToCourses();
            Ege2.AddToCourses();
            Ege3.AddToCourses();

            this.Text = CourseManager.GetGPABySemester(1).ToString();
            //this.Text = CourseManager.AllCourses.Count.ToString();

        }
    }
}
