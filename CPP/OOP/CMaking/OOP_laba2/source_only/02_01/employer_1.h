// СЛУЖАЩИЙ
#pragma once
#include <string>
#include "person_1.h"
#include <iostream>
using namespace std;

class employer_1 /*abstract*/: public person_1
{
	protected:	
		
		string	pfnm;		// наименование области (шахтер, металист, строитель)
		float	zp;			// ЗП
		float	staj;		// стаж (лет)
		short	wg;			// % роста в должности

	public:		

		employer_1();
		//employer_1(string pfnm1, float zp1, float staj1, short wg1, string nm1, short age1, bool sx1);
		//employer_1(const employer_1 & em1);
		virtual ~employer_1();
		virtual void show() const /*abstract*/;
		void show2() const;
			
};