// СЛУЖАЩИЙ
#pragma once
#include <string>
#include "person_2.h"
#include <iostream>
using namespace std;

class employer_2: public person_2
{
	protected:	
		
		string	pfnm;		// наименование области (шахтер, металист, строитель)
		float	zp;			// ЗП
		float	staj;		// стаж (лет)
		short	wg;			// % роста в должности

	public:		

		employer_2();
		//employer_2(string pfnm1, float zp1, float staj1, short wg1, string nm1, short age1, bool sx1);
		//employer_2(const employer_2 & em1);
		virtual ~employer_2();
		virtual void show() const=0;
		void show2() const;
			
};