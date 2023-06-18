// РАБОЧИЙ
#pragma once
#include <string>
#include <iostream>
#include "employer_2.h"
using namespace std;

class worker_2:public employer_2
{
	protected:	
		short	wqp;		// % удобств в условиях работы
	public:					
		worker_2();
		//worker_2(short wqp1, string pfnm2, float zp2, float staj2, short wg2, string nm2, short age2, bool sx2);
		//worker_2(const worker_2 & w1);
		~worker_2();
		void show() const;
		void show2() const;
};