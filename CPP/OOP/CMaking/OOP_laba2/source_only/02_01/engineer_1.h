// »Ќ∆≈Ќ≈–
#pragma once
#include <string>
#include <iostream>
#include "employer_1.h"
using namespace std;

class engineer_1:public employer_1
{
	protected:	
			short	pl;		// уровень разрабатываемых проектов (1-мелк, 2-ср, 3-кр)
			short	px;		// количество человек в подчинении
	public:
			engineer_1();
			//engineer_1(short pl, short px, string pfnm3, float zp3, float staj3, short wg3, string nm3, short age3, bool sx3);
			//engineer_1(const engineer_1 & en1);
			~engineer_1();
			void show() const;
			void show2() const;
};