// ��������
#include "cls_employer.h"
#include <string>


cls_employer::cls_employer()
{
	//cout<<"����������� cls_employer\n";
	this->nm = "��������";
	this->age = 30;
	this->sx = true;

	this->pfnm = "�������������";
	this->zp = 50000;
	this->staj = 5;
	this->wg = 70;
}



cls_employer::~cls_employer()
{
	//cout<<"���������� cls_employer\n";
}

void cls_employer::show() const
{
	cout<<"��������� ������ \"��������\": \n";
	
	cout<<"���: "<<this->nm<<" | ";
	cout<<"�������: "<<this->age<<" | ";
	cout<<"���: ";
	if (this->sx)	cout<<"������� | ";
	else			cout<<"������� | ";
	
	cout<<"+����. �������: "<<this->pfnm<<" | ";
	cout<<"+���������� �����: "<<this->zp<<" | ";
	cout<<"+����: "<<this->staj<<" | ";
	cout<<"+������� ����� � ���������: "<<this->wg<<"\n\n";
}


string cls_employer::getpfnm() const
{
    return this->pfnm;
}