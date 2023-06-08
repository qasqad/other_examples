using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace CSharpStudents
{
    [Serializable]
    public class Master : Student
    {
        public string diploma;

        public Master() : base()
        {
            diploma = "";
        }

        public Master(string firstName, string secondName, string faculty, string diploma) : base(firstName, secondName, faculty)
        {
            this.diploma = diploma;
        }

        public string PrintMaster()
        {
            return "Имя: " + firstName + ", Фамилия: " + secondName + ", Факультет:" + faculty + ", Диплом: " + diploma;
        }
    }
}
