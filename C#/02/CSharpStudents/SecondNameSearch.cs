﻿using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace CSharpStudents
{
    class SecondNameSearch : Search
    {
        // Имя студента
        string secondName;

        // Конструктор без параметров
        public SecondNameSearch() { }

        // Конструктор с параметрами
        public SecondNameSearch(Students studentList, string secondName)
        {
            this.studentList = studentList;
            this.secondName = secondName;
        }

        // Взять первого студента
        public override Student GetFirst()
        {
            // Пока не дошли до конца
            while (studentList.Count() > countOfFirst)
            {
                // Если нашли элемент, подходящий по условию, выходим из цикла
                if (studentList.studentsList[countOfFirst].secondName == secondName)
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
                if (studentList.studentsList[countUntilEnd].secondName == secondName)
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
                if (studentList.studentsList[countBeforeStart].secondName == secondName)
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
