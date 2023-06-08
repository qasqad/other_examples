// ÍÀÏĞÀÂËÅÍÈÅ (ÄËß ÈÍÆÅÍÅĞÎÂ)
#pragma once
#include "cls_worker.h"
#include "gr_org.h"

using namespace std;

class gr_nve:public gr_org		// ÍÀÏĞÀÂËÅÍÈÅ ïîòîìîê îò ÎĞÃÀÍÈÇÀÖÈÈ
{
	//	protected:
			
	public:
			gr_nve();
			virtual ~gr_nve();
			void insert(gr_TObject* gr_o2, item* it2);
			void show() const;
            void iter(fp fnc, int * t3);
            
};