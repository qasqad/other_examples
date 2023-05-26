#pragma once
#include <iostream>

class list
{
public:
	list* begin;
	char data;
	list* next;
	list* end;
	list();
	char operator[] (int);
	bool operator!=(const list&);
	virtual ~list();
	void Input(char);
	void Print(); 

};
