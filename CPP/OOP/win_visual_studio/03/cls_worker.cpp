// РАБОЧИЙ
#include "cls_worker.h"
#include <string>


cls_worker::cls_worker()
{
	//cout<<"Конструктор cls_worker\n";

	int i=0;

		// 11
	string m_name[] = {"Антон", "Виталий", "Николай", "Сергей", "Андрей", "Елена", "Семен", "Никита", "Вячеслав", "Станислав", "Екатерина"};
		// 5
	string m_pfnm[] = {"машиностроение", "строительство", "добыча полезных ископаемых", "металлургия", "приборостроение"};
	
	this->nm = m_name[rand()%11];
	this->age = rand()%15+35;
	
	if((this->nm == "Елена")||(this->nm == "Екатерина")) 
			this->sx = false;
	else	this->sx = true;

	this->pfnm = m_pfnm[rand()%5];
	this->zp = rand()%15000+45000;
	this->staj = rand()%7+8;
	this->wg = rand()%20+60;

	this->wqp = rand()%10+50;
}


cls_worker::~cls_worker()
{
	//cout<<"Деструктор cls_worker\n";
}

void cls_worker::show() const
{
	cout<<"Экземпляр класса \"РАБОЧИЙ\": \n";
	
	cout<<"Имя: "<<this->nm<<" | ";
	cout<<"Возраст: "<<this->age<<" | ";
	cout<<"Пол: ";
	if (this->sx)	cout<<"мужской | ";
	else			cout<<"женский | ";
	
	cout<<"Проф. область: "<<this->pfnm<<" | ";
	cout<<"Заработная плата: "<<this->zp<<" | ";
	cout<<"Стаж: "<<this->staj<<" | ";
	cout<<"Процент роста в должности: "<<this->wg<<" | ";
	
	cout<<"+Процент условий работы: "<<this->wqp<<"\n\n";
}
