#include "empl.h"
#include <string>

// Реализация контруктора без параметров

empl::empl()
{
	this->nm = "";
	this->age = -1;
	this->lv = "";

	cout<<"Вызван конструктор без параметров объектом "<<this<<"\n";
}

// Реализация контруктора с параметрами

empl::empl(string nm2, int age2, string lv2)
{

	this->nm = nm2;
	this->age = age2;
	this->lv = lv2;

    cout<<"Вызван конструктор с параметрами объектом "<<this<<"\n";
}


// Реализация конструктора копирования

empl::empl(const empl& em)
{
	
	
	this->nm = em.nm;
	this->age = em.age;
	this->lv = em.lv;

	cout<<"Вызван конструктор копирования объектом "<<this<<"\n";
	
}

// Реализация деструктора

empl::~empl()
{
    cout<<"Вызван деструктор объектом "<<this<<"\n";
}

// Реализация селектора

string empl::getNm() const
{
	
	return this->nm;

	//cout<<"Вызван селектор getNm "<<this<<" со значением "<<this->nm<<"\n";	
	
}

int empl::getAge() const
{
	
	return this->age;

	//cout<<"Вызван селектор getAge "<<this<<" со значением "<<this->age<<"\n";	
	
}

string empl::getLv() const
{
	
	return this->lv;

	//cout<<"Вызван селектор getLv "<<this<<" со значением "<<this->lv<<"\n";	
	
}



// Реализация модификатора

void empl::setNm(string nm12)
{
	this->nm = nm12;
	//cout<<"Вызван модификатор setNm "<<this<<" со значением \"Имя\": \""<<this->nm<<"\"\n";	
}

void empl::setAge(int age12)
{
	this->age = age12;
	//cout<<"Вызван модификатор setAge "<<this<<" со значением \"Возраст\": \""<<this->age<<"\"\n";
}

void empl::setLv(string lv12)
{
	
	this->lv = lv12;
	//cout<<"Вызван модификатор setLv "<<this<<" со значением \"Должность\": \""<<this->lv<<"\"\n";
}


// Реализация функции-компоненты для установки значения (использование с конструктором без параметров)

void empl::setempl(string nm3, int age3, string lv3)
{
	//cout<<"Вызван модификатор setempl "<<this<<"\n";
	
	this->setNm(nm3);
	this->setAge(age3);
	this->setLv(lv3);
		
}


void empl::shw() const
{
	//cout<<"\tВызван метод класса показа объекта "<<this<<"\n";
	
	cout<<"\n\n\t\tИмя: \""<<this->nm<<"\"\n";
	cout<<"\t\tВозраст: \""<<this->age<<"\"\n";
	cout<<"\t\tДолжность: \""<<this->lv<<"\"";
	cout<<"\n\t__________________________________________\n\n\n";
	
}