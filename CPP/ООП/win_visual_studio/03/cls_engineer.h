// ИНЖЕНЕР
#pragma once
#include <string>
#include <iostream>
#include "cls_employer.h"
using namespace std;


class cls_engineer:public cls_employer
{
	protected:	
			int	pl;		// уровень разрабатываемых проектов (1-мелк, 2-ср, 3-кр)
			int	px;		// количество человек в подчинении
	public:
			cls_engineer();
			virtual ~cls_engineer();
			void show() const;

};