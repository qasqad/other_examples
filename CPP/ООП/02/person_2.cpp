// �������
#include "person_2.h"
#include <string>


person_2::person_2()
{
	cout<<"����������� person\n";
	this->nm = "�������";
	this->age = 25;
	this->sx = true;
}

//person_2::person_2(string nm1, short age1, bool sx1)
//{
//	this->nm = nm1;
//	this->age = age1;
//	this->sx = sx1;
//}
//
//person_2::person_2(const person_2 & p1)
//{
//	cout<<"����������� ����������� person\n";
//	this->nm = p1.nm;
//	this->age = p1.age;
//	this->age = p1.sx;
//}

person_2::~person_2()
{
	cout<<"���������� person\n";
}

void person_2::show() const
{
	cout<<"��������� ������ \"�������\", ����������� �-���: \n";
	
	cout<<"���: "<<this->nm<<endl;
	cout<<"�������: "<<this->age<<endl;
	cout<<"���: ";

	if(this->sx)	cout<<"�������\n\n";
	else			cout<<"�������\n\n";
}


void person_2::show2() const
{
	cout<<"��������� ������ \"�������\", �� ����������� �-���: \n";
	
	cout<<"���: "<<this->nm<<endl;
	cout<<"�������: "<<this->age<<endl;
	cout<<"���: ";

	if(this->sx)	cout<<"�������\n\n";
	else			cout<<"�������\n\n";
}
