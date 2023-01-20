// РАБОЧИЙ
#include "worker_1.h"
#include "employer_1.h"
#include "person_1.h"
#include <string>


worker_1::worker_1()
{
	cout<<"Конструктор worker\n";
	this->nm = "Николай";
	this->age = 45;
	this->sx = true;

	this->pfnm = "сельское хозяйство";
	this->zp = 40000;
	this->staj = 2;
	this->wg = 50;

	this->wqp = 50;
}


//worker_1::worker_1(short wqp1, string pfnm2, float zp2, float staj2, short wg2, string nm2, short age2, bool sx2):employer_1(pfnm2, zp2, staj2, wg2, nm2, age2, sx2)
//{
//	this->nm = nm2;
//	this->age = age2;
//	this->sx = sx2;
//
//	this->pfnm = pfnm2;
//	this->zp = zp2;
//	this->staj = staj2;
//	this->wg = wg2;
//
//	this->wqp = wqp1;
//}
//
//worker_1::worker_1(const worker_1 & w1)
//{
//	cout<<"Конструктор копирования worker\n";
//	this->nm = w1.nm;
//	this->age = w1.age;
//	this->sx = w1.sx;
//
//	this->pfnm = w1.pfnm;
//	this->zp = w1.zp;
//	this->staj = w1.staj;
//	this->wg = w1.wg;
//
//	this->wqp = w1.wqp;
//}

worker_1::~worker_1()
{
	cout<<"Деструктор worker\n";
}

void worker_1::show() const
{
	cout<<"Экземпляр класса \"РАБОЧИЙ\", витруальная ф-ция: \n";
	
	cout<<"Имя: "<<this->nm<<endl;
	cout<<"Возраст: "<<this->age<<endl;
	cout<<"Пол: ";
	if (this->sx)	cout<<"мужской\n";
	else			cout<<"женский\n";
	
	cout<<"Проф. область: "<<this->pfnm<<endl;
	cout<<"Заработная плата: "<<this->zp<<endl;
	cout<<"Стаж: "<<this->staj<<endl;
	cout<<"Процент роста в должности: "<<this->wg<<endl;
	
	cout<<"+Процент условий работы: "<<this->wqp<<"\n\n";
}


void worker_1::show2() const
{
	cout<<"Экземпляр класса \"РАБОЧИЙ\", НЕ витруальная ф-ция: \n";
	
	cout<<"Имя: "<<this->nm<<endl;
	cout<<"Возраст: "<<this->age<<endl;
	cout<<"Пол: ";
	if (this->sx)	cout<<"мужской\n";
	else			cout<<"женский\n";
	
	cout<<"Проф. область: "<<this->pfnm<<endl;
	cout<<"Заработная плата: "<<this->zp<<endl;
	cout<<"Стаж: "<<this->staj<<endl;
	cout<<"Процент роста в должности: "<<this->wg<<endl;
	
	cout<<"+Процент условий работы: "<<this->wqp<<"\n\n";
}