// �������
#include "cls_person.h"
#include <string>


cls_person::cls_person()
{
	this->obj_name = "cls_person";
	//cout<<"����������� "<<this->obj_name<<endl;

	this->nm = "�������";
	this->age = 25;
	this->sx = true;
}

cls_person::~cls_person()
{
	//cout<<"���������� "<<this->obj_name<<endl;
}

void cls_person::show() const
{
	cout<<"��������� ������ \"�������\": \n";
	
	cout<<"���: "<<this->nm<<" | ";
	cout<<"�������: "<<this->age<<" | ";
	cout<<"���: ";

	if(this->sx)	cout<<"�������\n\n";
	else			cout<<"�������\n\n";
}

string cls_person::getnm() const
{
    return this->nm;
}