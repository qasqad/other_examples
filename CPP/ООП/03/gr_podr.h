// ������������� (�����������)
#pragma once
#include "item.h"
#include "gr_TObject.h"
#include <string>
#include <iostream>


using namespace std;


class gr_podr:public gr_TObject		// ������������� ������� �� �������
{

	public:
			item* fO_lifo;	// ��������� �� ��������� ����� ������ ��������� ������, 
							// ���� ����� ������ � �������� gr_*, ����������� ��� cls_*.
			gr_podr();
			virtual ~gr_podr();
			virtual void insert(gr_TObject* gr_o2, item* it2);
			virtual void show() const;

};