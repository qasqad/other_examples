// ПЕРСОНА
#include "person.h"
#include <string>

person::person()
{
    for (int i=0; i<29; i++)
        this->nm[i] = ' ';
    this->nm[29] = '\0';

    this->age = -1;
	this->sx = false;
}


person::person(char nm2[30], int age2, bool sx2)
{
	//cout<<"Конструктор с параметрами person\n";
	
    for (int i=0; i<29; i++)
        this->nm[i] = nm2[i];
    this->nm[29] = '\0';

    this->age = age2;
	this->sx = sx2;
}

person::~person()
{
	//cout<<"Деструктор person\n";
}

void person::show() const
{
	cout<<"Экземпляр класса \"ПЕРСОНА\", витруальная ф-ция: \n";
	
	cout<<"Имя: "<<this->nm<<endl;
	cout<<"Возраст: "<<this->age<<endl;
	cout<<"Пол: ";

	if(this->sx)	cout<<"мужской\n\n";
	else			cout<<"женский\n\n";
}

void person::SetNm(char Nm3[30])
{
    for (int i=0; i<29; i++)
        this->nm[i] = Nm3[i];
    this->nm[29] = '\0';
}

void person::SetAge(int Age3)
{
    this->age=Age3;
}

void person::SetSx(bool Sx3)
{
    this->sx=Sx3;
}


char* person::GetNm()
{
    return this->nm;
}

int person::GetAge()
{
    return this->age;
}

bool person::GetSx()
{
    return this->sx;
}

bool person::operator<(const person& l1)
{
    if(strcmp(this->nm,  l1.nm)<0)
        return 1;
    else
        return 0;
}

bool person::operator == (const person& f1)
{
    if (this->nm == f1.nm)
        return true;
    else
        return false;
}