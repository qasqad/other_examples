// ИНЖЕНЕР
#include "engineer.h"
#include "person.h"
#include <string>


engineer::engineer()
{
    for (int i=0; i<29; i++)
        this->nm[i] = ' ';
    this->nm[29] = '\0';

    this->age = 0;
	this->sx = false;

    this->px = -1;
    this->pl = -1;
}

engineer::engineer(char nm4[30], int age4, bool sx4, int pl2, int px2):person(nm4, age4, sx4)
{
	//cout<<"Конструктор engineer\n";
	    
    for (int i=0; i<29; i++)
        this->nm[i] = nm4[i];
    this->nm[29] = '\0';
    
    this->age = age4;
	this->sx = sx4;

		
	this->pl = pl2;
	this->px = px2;
}



engineer::~engineer()
{
	//cout<<"Деструктор engineer\n";
}

void engineer::show() const
{
	cout<<"Экземпляр класса \"ИНЖЕНЕР\", витруальная ф-ция: \n";
	
	cout<<"Имя: "<<this->nm<<endl;
	cout<<"Возраст: "<<this->age<<endl;
	cout<<"Пол: ";
	if (this->sx)	cout<<"мужской\n";
	else			cout<<"женский\n";

	
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



void engineer::SetNm(char Nm4[30])
{
    for (int i=0; i<29; i++)
        this->nm[i] = Nm4[i];
    this->nm[29] = '\0';
}

void engineer::SetAge(int Age4)
{
    this->age=Age4;
}

void engineer::SetSx(bool Sx4)
{
    this->sx=Sx4;
}

void engineer::SetPl(int Pl4)
{
    this->pl = Pl4;
}

void engineer::SetPx(int Px4)
{
    this->px = Px4;
}


char* engineer::GetNm()
{
    return this->nm;
}

int engineer::GetAge()
{
    return this->age;
}

bool engineer::GetSx()
{
    return this->sx;
}

int engineer::GetPl()
{
    return this->pl;
}

int engineer::GetPx()
{
    return this->px;
}

bool engineer::operator<(const engineer& l3)
{
    if(strcmp(this->nm,  l3.nm)<0)
        return 1;
    else
        return 0;
}


bool engineer::operator == (const engineer& f3)
{
    if (strcmp(this->nm, f3.nm)==0)
        return true;
    else
        return false;
}

void engineer::showname() const
{
    cout<<nm<<endl;
}