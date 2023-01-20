// ПЕРСОНА
#include "person_1.h"
#include <string>


person_1::person_1()
{
	cout<<"Конструктор person\n";
	this->nm = "Василий";
	this->age = 25;
	this->sx = true;
}

//person_1::person_1(string nm1, short age1, bool sx1)
//{
//	this->nm = nm1;
//	this->age = age1;
//	this->sx = sx1;
//}
//
//person_1::person_1(const person_1 & p1)
//{
//	cout<<"Конструктор копирования person\n";
//	this->nm = p1.nm;
//	this->age = p1.age;
//	this->age = p1.sx;
//}

person_1::~person_1()
{
	cout<<"Деструктор person\n";
}

void person_1::show() const
{
	cout<<"Экземпляр класса \"ПЕРСОНА\", витруальная ф-ция: \n";
	
	cout<<"Имя: "<<this->nm<<endl;
	cout<<"Возраст: "<<this->age<<endl;
	cout<<"Пол: ";

	if(this->sx)	cout<<"мужской\n\n";
	else			cout<<"женский\n\n";
}


void person_1::show2() const
{
	cout<<"Экземпляр класса \"ПЕРСОНА\", НЕ витруальная ф-ция: \n";
	
	cout<<"Имя: "<<this->nm<<endl;
	cout<<"Возраст: "<<this->age<<endl;
	cout<<"Пол: ";

	if(this->sx)	cout<<"мужской\n\n";
	else			cout<<"женский\n\n";
}
