#pragma once
#include <iostream>

template <typename T>
class list
{

public:
	list* begin;
	T data;
	list* next;
	list* end;
	list();
	T operator[] (int);
	bool operator!=(const list&);
	void Input(T);
	void Print(); 

};
template <typename T>
list<T>::list() {
	begin = NULL;
	next = NULL;
	data = NULL;
	end = NULL;
}

template <typename T>
void list<T>::Print()
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


template <typename T>
bool list<T>::operator!=(const list<T>& x)
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
template <typename T>
T list<T>::operator[](int x)
{
	
	cout << "Вызвана перегрузка оператора '[]'.\n";
	if (!begin){
		cout<< "список пуст" <<endl;
		return 0;
	}
	list* p = begin;
	int i=0;
	while (p)
	{	
		if (i==x){
			return p->data;
		}
		++i;
		p= p->next;
	}
	return 0;
}
template <typename T>
void list<T>::Input(T c)
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