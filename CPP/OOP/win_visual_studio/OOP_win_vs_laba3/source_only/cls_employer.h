// СЛУЖАЩИЙ
#pragma once
#include <string>
#include "cls_person.h"
#include <iostream>
using namespace std;

class cls_employer: public cls_person
{
	protected:	
		
		string	pfnm;		// наименование области (шахтер, металист, строитель)
		int	zp;			// ЗП
		int	staj;		// стаж (лет)
		int	wg;			// % роста в должности

	public:		

		cls_employer();
		virtual ~cls_employer();
		virtual void show() const=0;
        string getpfnm() const;
		
			
};