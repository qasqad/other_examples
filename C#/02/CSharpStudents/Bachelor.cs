using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace CSharpStudents
{
    [Serializable]
    public class Bachelor : Student
    {
        public Bachelor() : base()
        {
        }

        public Bachelor(string firstName, string secondName, string faculty) : base(firstName, secondName, faculty)
        {
        }

        public string PrinBachelor()
        {
            return "Имя: " + firstName + ", Фамилия: " + secondName + ", Факультет:" + faculty;
        }
    }
}
