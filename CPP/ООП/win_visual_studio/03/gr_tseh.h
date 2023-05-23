// ЦЕХ (ДЛЯ РАБОЧИХ)
#pragma once
#include "gr_org.h"
#include <string>
#include <iostream>

using namespace std;

class gr_tseh:public gr_org		// ЦЕХ потомок от ОРГАНИЗАЦИИ
{		
	public:
			gr_tseh();
			virtual ~gr_tseh();
			void insert(gr_TObject* gr_o2, item* it2);
			void show() const;
            void iter(fp fnc, int * t2);
            

};