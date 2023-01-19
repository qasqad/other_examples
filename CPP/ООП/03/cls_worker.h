// РАБОЧИЙ
#pragma once
#include "cls_employer.h"
#include <string>
#include <iostream>

using namespace std;


class cls_worker:public cls_employer
{
	protected:	
		int	wqp;		// % удобств в условиях работы
	public:					
		cls_worker();
		virtual ~cls_worker();
		void show() const;

};