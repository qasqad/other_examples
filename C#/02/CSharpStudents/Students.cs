using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.IO;
using System.Runtime.Serialization.Formatters.Soap;

namespace CSharpStudents
{
    [Serializable]
    public class Students
    {
        public List<Student> studentsList;

        public Students()
        {
            studentsList = new List<Student>();
        }

        public void Add(Student st)
        {
            studentsList.Add(st);
        }

        public void Clear()
        {
            studentsList.Clear();
        }

        public int Count()
        {
            return studentsList.Count();
        }

        public void RemoveAt(int num)
        {
            studentsList.RemoveAt(num);
        }
    }
}
