using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace CSharpStudents
{
    abstract class Search : Iterator
    {
        // Коллекция со студентами
        protected Students studentList;
        protected int studentCurrNum = -1;
        // Счетчик до кнца коллекции (сколько прошли)
        protected int countUntilEnd;
        protected int countOfFirst = 0;
        // Счетчик того, который от начала (проходим к концу)
        protected int countBeforeStart;

        // Переход к первому элементу
        public abstract Student GetFirst();
        // Переход к следующему студенту
        public abstract Student GetNext();
        // Переход к предыдущему студенту
        public abstract Student GetPrev();

        public bool IfHasNext()
        {
            if (GetNext() is null)
            {
                return false;
            }
            GetPrev();
            return true;
        }
        public bool IfHasPrev()
        {
            if (GetPrev() is null)
            {
                return false;
            }
            GetNext();
            return true;
        }

        // Берем текущего студента
        public Student TakeCurrentStudent()
        {
            return studentList.studentsList[studentCurrNum];
        }

        // Возврат к исходному состоянию
        public void Reset()
        {
            studentCurrNum = -1;
        }
    }
}
