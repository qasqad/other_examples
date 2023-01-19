// СПИСОК

#include "item.h"

#include <string>


item::item()
{
	//cout<<"Конструктор item по умолчанию\n";

	this->TObj = NULL;
	this->next = NULL;
}

item::item(gr_TObject* TObj2)
{
	//cout<<"Конструктору item передался TObj2 с адресом"<<TObj2<<"\n";
	
	this->TObj = TObj2;			// хранится сслыка на объект, который добавили в список
	//cout<<this->TObj<<endl;
	
	this->next = NULL;

}

item::~item()
{
	//cout<<"Деструктор item\n";
}
