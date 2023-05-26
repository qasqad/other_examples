// ПЕРСОНА
#include "cls_person.h"
#include <string>


cls_person::cls_person()
{
	this->obj_name = "cls_person";
	//cout<<"Конструктор "<<this->obj_name<<endl;

	this->nm = "Василий";
	this->age = 25;
	this->sx = true;
}

cls_person::~cls_person()
{
	//cout<<"Деструктор "<<this->obj_name<<endl;
}

void cls_person::show() const
{
	cout<<"Экземпляр класса \"ПЕРСОНА\": \n";
	
	cout<<"Имя: "<<this->nm<<" | ";
	cout<<"Возраст: "<<this->age<<" | ";
	cout<<"Пол: ";

	if(this->sx)	cout<<"мужской\n\n";
	else			cout<<"женский\n\n";
}

string cls_person::getnm() const
{
    return this->nm;
}