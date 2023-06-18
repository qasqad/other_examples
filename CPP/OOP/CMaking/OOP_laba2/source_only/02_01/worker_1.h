// РАБОЧИЙ
#pragma once
#include <string>
#include <iostream>
#include "employer_1.h"
using namespace std;

class worker_1:public employer_1
{
	protected:	
		short	wqp;		// % удобств в условиях работы
	public:					
		worker_1();
		//worker_1(short wqp1, string pfnm2, float zp2, float staj2, short wg2, string nm2, short age2, bool sx2);
		//worker_1(const worker_1 & w1);
		~worker_1();
		void show() const;
		void show2() const;
};