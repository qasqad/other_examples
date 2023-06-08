// СПИСОК
#pragma once
#include "gr_TObject.h"
#include <string>
#include <iostream>
using namespace std;

struct item 
{
	public:
			item* next;				// указатель на следующий элемент
			gr_TObject* TObj;
			
			item();
			item(gr_TObject* TObj2);		// конструктор
			~item();
};