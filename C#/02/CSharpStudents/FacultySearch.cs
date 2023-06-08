using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace CSharpStudents
{
    class FacultySearch : Search
    {
        // Факультет студента
        string faculty;

        // Конструктор без параметров
        public FacultySearch() { }

        // Конструктор с параметрами
        public FacultySearch(Students studentList, string faculty)
        {
            this.studentList = studentList;
            this.faculty = faculty;
        }

        // Взять первого студента
        public override Student GetFirst()
        {
            // Пока не дошли до конца
            while (studentList.Count() > countOfFirst)
            {
                // Если нашли элемент, подходящий по условию, выходим из цикла
                if (studentList.studentsList[countOfFirst].faculty == faculty)
                    break;
                countOfFirst++;
            }

            // Если полностью обошли коллекцию, возвращаем null
            if (studentList.Count() <= countOfFirst)
                return null;
            else
            {
                studentCurrNum = countOfFirst;
                return TakeCurrentStudent();
            }
        }

        // Взять следующего
        public override Student GetNext()
        {
            countUntilEnd = studentCurrNum;
            countUntilEnd++;

            // Пока не дошли до конца
            while (studentList.Count() > countUntilEnd)
            {
                // Если нашли элемент, подходящий по условию, выходим из цикла
                if (studentList.studentsList[countUntilEnd].faculty == faculty)
                    break;
                countUntilEnd++;
            }

            // Если полностью обошли коллекцию, возвращаем null
            if (studentList.Count() <= countUntilEnd)
                return null;
            else
            {
                studentCurrNum = countUntilEnd++;
                return TakeCurrentStudent();
            }
        }

        public override Student GetPrev()
        {
            countBeforeStart = studentCurrNum;
            countBeforeStart--;

            // Пока не дошли до начала
            while (countBeforeStart >= 0)
            {
                // Если нашли элемент, подходящий по условию, выходим из цикла
                if (studentList.studentsList[countBeforeStart].faculty == faculty)
                    break;
                countBeforeStart--;
            }

            // Если полностью обошли коллекцию, возвращаем null
            if (countBeforeStart < 0)
                return null;
            else
            {
                studentCurrNum = countBeforeStart--;
                return TakeCurrentStudent();
            }
        }
    }
}
