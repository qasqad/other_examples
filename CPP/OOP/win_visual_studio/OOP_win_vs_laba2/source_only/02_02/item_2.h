// ������
#pragma once
#include <string>
#include <iostream>
#include "person_2.h"
using namespace std;

class item_2 
{
	private:
			static item_2* begin;		// ��������� �� ������ ������
			item_2* next;				// ��������� �� ��������� �������
			person_2* p;
			
	public:

			item_2(person_2* p2);		// �����������
			~item_2();
			void add();					// ��������� ������� � ������ ������.
			static void show();			// ����� ������
};