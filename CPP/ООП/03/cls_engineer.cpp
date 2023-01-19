// ИНЖЕНЕР
#include "cls_engineer.h"
#include <string>


cls_engineer::cls_engineer()
{
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
		
	this->pl = rand()%3+1;
	this->px = rand()%2+8;
}


cls_engineer::~cls_engineer()
{
	//cout<<"Деструктор cls_engineer\n";
}

void cls_engineer::show() const
{
	cout<<"Экземпляр класса \"ИНЖЕНЕР\": \n";
	
	cout<<"Имя: "<<this->nm<<" | ";
	cout<<"Возраст: "<<this->age<<" | ";
	cout<<"Пол: ";
	if (this->sx)	cout<<"мужской | ";
	else			cout<<"женский | ";
	
	cout<<"Проф. область: "<<this->pfnm<<" | ";
	cout<<"Заработная плата: "<<this->zp<<" | ";
	cout<<"Стаж: "<<this->staj<<" | ";
	cout<<"Процент роста в должности: "<<this->wg<<" | ";
	
	cout<<"+Уровень разрабатываемых проектов: ";
	
	switch (this->pl)
	{
		case 1:
			{
				cout<<"небольшие | ";
				break;
			}

		case 2:
			{
				cout<<"средние | ";
				break;
			}

		case 3:
			{
				cout<<"крупные | ";
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

