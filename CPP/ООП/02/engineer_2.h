// ИНЖЕНЕР
#pragma once
#include <string>
#include <iostream>
#include "employer_2.h"
using namespace std;

class engineer_2:public employer_2
{
	protected:	
			short	pl;		// уровень разрабатываемых проектов (1-мелк, 2-ср, 3-кр)
			short	px;		// количество человек в подчинении
	public:
			engineer_2();
			//engineer_2(short pl, short px, string pfnm3, float zp3, float staj3, short wg3, string nm3, short age3, bool sx3);
			//engineer_2(const engineer_2 & en1);
			~engineer_2();
			void show() const;
			void show2() const;
};