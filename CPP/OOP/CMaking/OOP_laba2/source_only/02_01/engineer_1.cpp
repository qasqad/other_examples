// ИНЖЕНЕР
#include "engineer_1.h"
#include "employer_1.h"
#include "person_1.h"
#include <string>


engineer_1::engineer_1()
{
	cout<<"Конструктор engineer\n";
	this->nm = "Степан";
	this->age = 35;
	this->sx = true;

	this->pfnm = "машиностроительная";
	this->zp = 70000;
	this->staj = 12;
	this->wg = 80;
		
	this->pl = 2;
	this->px = 5;
}


//engineer_1::engineer_1(short pl1, short px1, string pfnm3, float zp3, float staj3, short wg3, string nm3, short age3, bool sx3):employer_1(pfnm3, zp3, staj3, wg3, nm3, age3, sx3)
//{
//	this->nm = nm3;
//	this->age = age3;
//	this->sx = sx3;
//
//	this->pfnm = pfnm3;
//	this->zp = zp3;
//	this->staj = staj3;
//	this->wg = wg3;
//
//	this->pl = pl1;
//	this->px = px1;
//}
//
//engineer_1::engineer_1(const engineer_1 & en1)
//{
//	cout<<"Конструктор копирования engineer\n";
//	this->nm = en1.nm;
//	this->age = en1.age;
//	this->sx = en1.sx;
//
//	this->pfnm = en1.pfnm;
//	this->zp = en1.zp;
//	this->staj = en1.staj;
//	this->wg = en1.wg;
//
//	this->pl = en1.pl;
//	this->px = en1.px;
//}

engineer_1::~engineer_1()
{
	cout<<"Деструктор engineer\n";
}

void engineer_1::show() const
{
	cout<<"Экземпляр класса \"ИНЖЕНЕР\", витруальная ф-ция: \n";
	
	cout<<"Имя: "<<this->nm<<endl;
	cout<<"Возраст: "<<this->age<<endl;
	cout<<"Пол: ";
	if (this->sx)	cout<<"мужской\n";
	else			cout<<"женский\n";
	
	cout<<"Проф. область: "<<this->pfnm<<endl;
	cout<<"Заработная плата: "<<this->zp<<endl;
	cout<<"Стаж: "<<this->staj<<endl;
	cout<<"Процент роста в должности: "<<this->wg<<endl;
	
	cout<<"+Уровень разрабатываемых проектов: ";
	
	switch (this->pl)
	{
		case 1:
			{
				cout<<"небольшие\n";
				break;
			}

		case 2:
			{
				cout<<"средние\n";
				break;
			}

		case 3:
			{
				cout<<"крупные\n";
				break;
			}
		default:
			{
				cout<<"некорретный параметр ( допустимые значения 1,2,3)\n";
				break;
			}
	}
	
	cout<<"+Количество человек в подчинении: "<<this->px<<"\n\n";
}


void engineer_1::show2() const
{
	cout<<"Экземпляр класса \"ИНЖЕНЕР\", НЕ витруальная ф-ция: \n";
	
	cout<<"Имя: "<<this->nm<<endl;
	cout<<"Возраст: "<<this->age<<endl;
	cout<<"Пол: ";
	if (this->sx)	cout<<"мужской\n";
	else			cout<<"женский\n";
	
	cout<<"Проф. область: "<<this->pfnm<<endl;
	cout<<"Заработная плата: "<<this->zp<<endl;
	cout<<"Стаж: "<<this->staj<<endl;
	cout<<"Процент роста в должности: "<<this->wg<<endl;
	
	cout<<"+Уровень разрабатываемых проектов: ";
	
	switch (this->pl)
	{
		case 1:
			{
				cout<<"небольшие\n";
				break;
			}

		case 2:
			{
				cout<<"средние\n";
				break;
			}

		case 3:
			{
				cout<<"крупные\n";
				break;
			}
		default:
			{
				cout<<"некорретный параметр ( допустимые значения 1,2,3)\n";
				break;
			}
	}
	
	cout<<"+Количество человек в подчинении: "<<this->px<<"\n\n";
}