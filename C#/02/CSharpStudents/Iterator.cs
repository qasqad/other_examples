using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace CSharpStudents
{
    interface Iterator
    {
        Student GetNext();
        Student GetPrev();

        bool IfHasNext();
        bool IfHasPrev();

        Student TakeCurrentStudent();

        void Reset();
    }
}
