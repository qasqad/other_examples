// �������
#include "person_1.h"
#include <string>


person_1::person_1()
{
	cout<<"����������� person\n";
	this->nm = "�������";
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
//	cout<<"����������� ����������� person\n";
//	this->nm = p1.nm;
//	this->age = p1.age;
//	this->age = p1.sx;
//}

person_1::~person_1()
{
	cout<<"���������� person\n";
}

void person_1::show() const
{
	cout<<"��������� ������ \"�������\", ����������� �-���: \n";
	
	cout<<"���: "<<this->nm<<endl;
	cout<<"�������: "<<this->age<<endl;
	cout<<"���: ";

	if(this->sx)	cout<<"�������\n\n";
	else			cout<<"�������\n\n";
}


void person_1::show2() const
{
	cout<<"��������� ������ \"�������\", �� ����������� �-���: \n";
	
	cout<<"���: "<<this->nm<<endl;
	cout<<"�������: "<<this->age<<endl;
	cout<<"���: ";

	if(this->sx)	cout<<"�������\n\n";
	else			cout<<"�������\n\n";
}
