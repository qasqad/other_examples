// �������
#include "cls_engineer.h"
#include <string>


cls_engineer::cls_engineer()
{
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
		
	this->pl = rand()%3+1;
	this->px = rand()%2+8;
}


cls_engineer::~cls_engineer()
{
	//cout<<"���������� cls_engineer\n";
}

void cls_engineer::show() const
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
	
	cout<<"+������� ��������������� ��������: ";
	
	switch (this->pl)
	{
		case 1:
			{
				cout<<"��������� | ";
				break;
			}

		case 2:
			{
				cout<<"������� | ";
				break;
			}

		case 3:
			{
				cout<<"������� | ";
				break;
			}
		default:
			{
				cout<<"����������� �������� ( ���������� �������� 1,2,3)\n";
				break;
			}
	}
	
	cout<<"+���������� ������� � ����������: "<<this->px<<"\n\n";
}

