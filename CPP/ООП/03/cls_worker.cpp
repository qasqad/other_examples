// �������
#include "cls_worker.h"
#include <string>


cls_worker::cls_worker()
{
	//cout<<"����������� cls_worker\n";

	int i=0;

		// 11
	string m_name[] = {"�����", "�������", "�������", "������", "������", "�����", "�����", "������", "��������", "���������", "���������"};
		// 5
	string m_pfnm[] = {"��������������", "�������������", "������ �������� ����������", "�����������", "���������������"};
	
	this->nm = m_name[rand()%11];
	this->age = rand()%15+35;
	
	if((this->nm == "�����")||(this->nm == "���������")) 
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
	//cout<<"���������� cls_worker\n";
}

void cls_worker::show() const
{
	cout<<"��������� ������ \"�������\": \n";
	
	cout<<"���: "<<this->nm<<" | ";
	cout<<"�������: "<<this->age<<" | ";
	cout<<"���: ";
	if (this->sx)	cout<<"������� | ";
	else			cout<<"������� | ";
	
	cout<<"����. �������: "<<this->pfnm<<" | ";
	cout<<"���������� �����: "<<this->zp<<" | ";
	cout<<"����: "<<this->staj<<" | ";
	cout<<"������� ����� � ���������: "<<this->wg<<" | ";
	
	cout<<"+������� ������� ������: "<<this->wqp<<"\n\n";
}
