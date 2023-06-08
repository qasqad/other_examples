#include "empl.h"
#include <string>

// ���������� ����������� ��� ����������

empl::empl()
{
	this->nm = "";
	this->age = -1;
	this->lv = "";

	cout<<"������ ����������� ��� ���������� �������� "<<this<<"\n";
}

// ���������� ����������� � �����������

empl::empl(string nm2, int age2, string lv2)
{

	this->nm = nm2;
	this->age = age2;
	this->lv = lv2;

    cout<<"������ ����������� � ����������� �������� "<<this<<"\n";
}


// ���������� ������������ �����������

empl::empl(const empl& em)
{
	
	
	this->nm = em.nm;
	this->age = em.age;
	this->lv = em.lv;

	cout<<"������ ����������� ����������� �������� "<<this<<"\n";
	
}

// ���������� �����������

empl::~empl()
{
    cout<<"������ ���������� �������� "<<this<<"\n";
}

// ���������� ���������

string empl::getNm() const
{
	
	return this->nm;

	//cout<<"������ �������� getNm "<<this<<" �� ��������� "<<this->nm<<"\n";	
	
}

int empl::getAge() const
{
	
	return this->age;

	//cout<<"������ �������� getAge "<<this<<" �� ��������� "<<this->age<<"\n";	
	
}

string empl::getLv() const
{
	
	return this->lv;

	//cout<<"������ �������� getLv "<<this<<" �� ��������� "<<this->lv<<"\n";	
	
}



// ���������� ������������

void empl::setNm(string nm12)
{
	this->nm = nm12;
	//cout<<"������ ����������� setNm "<<this<<" �� ��������� \"���\": \""<<this->nm<<"\"\n";	
}

void empl::setAge(int age12)
{
	this->age = age12;
	//cout<<"������ ����������� setAge "<<this<<" �� ��������� \"�������\": \""<<this->age<<"\"\n";
}

void empl::setLv(string lv12)
{
	
	this->lv = lv12;
	//cout<<"������ ����������� setLv "<<this<<" �� ��������� \"���������\": \""<<this->lv<<"\"\n";
}


// ���������� �������-���������� ��� ��������� �������� (������������� � ������������� ��� ����������)

void empl::setempl(string nm3, int age3, string lv3)
{
	//cout<<"������ ����������� setempl "<<this<<"\n";
	
	this->setNm(nm3);
	this->setAge(age3);
	this->setLv(lv3);
		
}


void empl::shw() const
{
	//cout<<"\t������ ����� ������ ������ ������� "<<this<<"\n";
	
	cout<<"\n\n\t\t���: \""<<this->nm<<"\"\n";
	cout<<"\t\t�������: \""<<this->age<<"\"\n";
	cout<<"\t\t���������: \""<<this->lv<<"\"";
	cout<<"\n\t__________________________________________\n\n\n";
	
}