using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.IO;
using System.Runtime.Serialization.Formatters.Binary;
using System.Xml.Serialization;

namespace CSharpStudents
{
    [Serializable]
    [XmlInclude(typeof(Master))]
    [XmlInclude(typeof(Bachelor))]
    public class Student
    {
        public string firstName;
        public string secondName;
        public string faculty;

        public Student()
        {
            firstName = "";
            secondName = "";
            faculty = "";
        }
        public Student(string firstName, string secondName, string faculty)
        {
            this.firstName = firstName;
            this.secondName = secondName;
            this.faculty = faculty;
        }

        public string PrintStudent()
        {
            return "Имя: " + firstName + ", Фамилия: " + secondName + ", Факультет:" + faculty;
        }
    }
}
