using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace CSharpStudents
{
    class DiplomaSearch : Search
    {
        // Имя студента
        string diploma;

        // Конструктор без параметров
        public DiplomaSearch() { }

        // Конструктор с параметрами
        public DiplomaSearch(Students studentList, string diploma)
        {
            this.studentList = studentList;
            this.diploma = diploma;
        }

        // Взять первого студента
        public override Student GetFirst()
        {
            // Пока не дошли до конца
            while (studentList.Count() > countOfFirst)
            {
                // Если нашли элемент, подходящий по условию, выходим из цикла
                if (studentList.studentsList[countOfFirst].GetType().ToString() == "CSharpStudents.Master")
                    if (((Master)studentList.studentsList[countOfFirst]).diploma == diploma)
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
                if (studentList.studentsList[countUntilEnd].GetType().ToString() == "CSharpStudents.Master")
                    if (((Master)studentList.studentsList[countUntilEnd]).diploma == diploma)
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
                if (studentList.studentsList[countBeforeStart].GetType().ToString() == "CSharpStudents.Master")
                    if (((Master)studentList.studentsList[countBeforeStart]).diploma == diploma)
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
