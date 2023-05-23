// ОРГАНИЗАЦИЯ (для включения ЦЕХА и НАПРАВЛЕНИЯ)
#pragma once
#include "gr_podr.h"
#include <string>
#include <iostream>

using namespace std;

typedef void(*fp)(gr_TObject*, int * t);

class gr_org:public gr_podr		// ОРГАНИЗАЦИЯ потомок от ПОДРАЗДЕЛЕНИЯ
{
	
	public:
			
            //typedef void (* func_point)(gr_TObject*);
			
            gr_org();
			virtual ~gr_org();
			void insert(gr_TObject* gr_o2, item* it2);
			void show() const;
            void iter(fp fnc, int * t1);
};