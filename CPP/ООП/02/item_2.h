// СПИСОК
#pragma once
#include <string>
#include <iostream>
#include "person_2.h"
using namespace std;

class item_2 
{
	private:
			static item_2* begin;		// указатель на начало списка
			item_2* next;				// указатель на следующий элемент
			person_2* p;
			
	public:

			item_2(person_2* p2);		// конструктор
			~item_2();
			void add();					// добавляет элемент в начало списка.
			static void show();			// показ списка
};