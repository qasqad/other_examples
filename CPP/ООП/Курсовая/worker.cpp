// РАБОЧИЙ
#include "worker.h"
#include "person.h"
#include <string>


worker::worker()
{
    for (int i=0; i<29; i++)
        this->nm[i] = ' ';
    this->nm[29] = '\0';

    this->age = 0;
	this->sx = false;

    this->wqp = -1;

}

worker::worker(char nm3[30], int age3, bool sx3, int wqp2):person(nm3, age3, sx3)
{
	//cout<<"Конструктор worker\n";

    for (int i=0; i<29; i++)
        this->nm[i] = nm3[i];
    this->nm[29] = '\0';

    this->age = age3;
	this->sx = sx3;


	this->wqp = wqp2;
}




worker::~worker()
{
	//cout<<"Деструктор worker\n";
}

void worker::show() const
{
	cout<<"Экземпляр класса \"РАБОЧИЙ\", витруальная ф-ция: \n";
	
	cout<<"Имя: "<<this->nm<<endl;
	cout<<"Возраст: "<<this->age<<endl;
	cout<<"Пол: ";
	if (this->sx)	cout<<"мужской\n";
	else			cout<<"женский\n";

	
	cout<<"+Процент условий работы: "<<this->wqp<<"\n\n";
}


void worker::SetNm(char Nm5[30])
{

    for (int i=0; i<29; i++)
        this->nm[i] = Nm5[i];
    this->nm[29] = '\0';

}

void worker::SetAge(int Age5)
{
    this->age=Age5;
}

void worker::SetSx(bool Sx5)
{
    this->sx=Sx5;
}

void worker::SetWqp(int Wqp5)
{
    this->wqp = Wqp5;
}


char* worker::GetNm()
{
    return this->nm;   
}

int worker::GetAge()
{
    return this->age;
}
//
bool worker::GetSx()
{
    return this->sx;
}

int worker::GetWqp()
{
    return this->wqp;
}

bool worker::operator<(const worker& l2)
{
    if(strcmp(this->nm,  l2.nm)<0)
        return 1;
    else
        return 0;
}


bool worker::operator == (const worker& f2)
{
    if (strcmp(this->nm, f2.nm)==0)
        return true;
    else
        return false;
}


void worker::showname() const
{
    cout<<nm<<endl;
}