#include "List.h"
#include <iostream>
#include <string.h>
#include <stdlib.h>

using namespace std;

list::list() {
	begin = NULL;
	next = NULL;
	data = NULL;
	end = NULL;
}

list::~list()
{
	
}
void list::Print()
{
	if (!begin){
		cout<< "список пуст" <<endl;
		return;
	}
	list* p = begin;
	while (p)
	{
		cout << p->data<< " ";
		p= p->next;
	}
	cout << endl;
}



bool list::operator!=(const list& x)
{
	cout << "Вызвана перегрузка оператора '!='.\n";
	list *pv = begin;
	list *dpv = x.begin;
	while ((pv)&&(dpv))
	{
		if (pv->data != dpv->data) return true;
		pv = pv->next;
		dpv = dpv->next;
	}
	return false;

}

char list::operator[](int x)
{
	int i=0;
	cout << "Вызвана перегрузка оператора '[]'.\n";
	if (!begin){
		cout<< "список пуст" <<endl;
		return '0';
	}
	list* p = begin;
	while (p)
	{	
		if (i==x){
			return p->data;
		}
		++i;
		p= p->next;
	}
	return '0';
}

void list::Input(char c)
{
	if (!begin) {
		begin = new list;
		begin->data = c;
		begin->next = NULL;
		end=begin;
	}
	else{
		end->next = new list;
		end= end->next;
		end->data=c;
		end->next = NULL;
	}
};