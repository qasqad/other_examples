// СЛУЖАЩИЙ
#include "cls_employer.h"
#include <string>


cls_employer::cls_employer()
{
	//cout<<"Конструктор cls_employer\n";
	this->nm = "Валентин";
	this->age = 30;
	this->sx = true;

	this->pfnm = "строительство";
	this->zp = 50000;
	this->staj = 5;
	this->wg = 70;
}



cls_employer::~cls_employer()
{
	//cout<<"Деструктор cls_employer\n";
}

void cls_employer::show() const
{
	cout<<"Экземпляр класса \"СЛУЖАЩИЙ\": \n";
	
	cout<<"Имя: "<<this->nm<<" | ";
	cout<<"Возраст: "<<this->age<<" | ";
	cout<<"Пол: ";
	if (this->sx)	cout<<"мужской | ";
	else			cout<<"женский | ";
	
	cout<<"+Проф. область: "<<this->pfnm<<" | ";
	cout<<"+Заработная плата: "<<this->zp<<" | ";
	cout<<"+Стаж: "<<this->staj<<" | ";
	cout<<"+Процент роста в должности: "<<this->wg<<"\n\n";
}


string cls_employer::getpfnm() const
{
    return this->pfnm;
}