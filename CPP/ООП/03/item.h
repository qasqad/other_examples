// ������
#pragma once
#include "gr_TObject.h"
#include <string>
#include <iostream>
using namespace std;

struct item 
{
	public:
			item* next;				// ��������� �� ��������� �������
			gr_TObject* TObj;
			
			item();
			item(gr_TObject* TObj2);		// �����������
			~item();
};