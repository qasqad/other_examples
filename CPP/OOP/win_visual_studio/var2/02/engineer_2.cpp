// �������
#include "engineer_2.h"
#include "employer_2.h"
#include "person_2.h"
#include <string>


engineer_2::engineer_2()
{
	cout<<"����������� engineer\n";
	this->nm = "������";
	this->age = 35;
	this->sx = true;

	this->pfnm = "������������������";
	this->zp = 70000;
	this->staj = 12;
	this->wg = 80;
		
	this->pl = 2;
	this->px = 5;
}


//engineer_2::engineer_2(short pl1, short px1, string pfnm3, float zp3, float staj3, short wg3, string nm3, short age3, bool sx3):employer_2(pfnm3, zp3, staj3, wg3, nm3, age3, sx3)
//{
//	this->nm = nm3;
//	this->age = age3;
//	this->sx = sx3;
//
//	this->pfnm = pfnm3;
//	this->zp = zp3;
//	this->staj = staj3;
//	this->wg = wg3;
//
//	this->pl = pl1;
//	this->px = px1;
//}
//
//engineer_2::engineer_2(const engineer_2 & en1)
//{
//	cout<<"����������� ����������� engineer\n";
//	this->nm = en1.nm;
//	this->age = en1.age;
//	this->sx = en1.sx;
//
//	this->pfnm = en1.pfnm;
//	this->zp = en1.zp;
//	this->staj = en1.staj;
//	this->wg = en1.wg;
//
//	this->pl = en1.pl;
//	this->px = en1.px;
//}

engineer_2::~engineer_2()
{
	cout<<"���������� engineer\n";
}

void engineer_2::show() const
{
	cout<<"��������� ������ \"�������\", ����������� �-���: \n";
	
	cout<<"���: "<<this->nm<<endl;
	cout<<"�������: "<<this->age<<endl;
	cout<<"���: ";
	if (this->sx)	cout<<"�������\n";
	else			cout<<"�������\n";
	
	cout<<"����. �������: "<<this->pfnm<<endl;
	cout<<"���������� �����: "<<this->zp<<endl;
	cout<<"����: "<<this->staj<<endl;
	cout<<"������� ����� � ���������: "<<this->wg<<endl;
	
	cout<<"+������� ��������������� ��������: ";
	
	switch (this->pl)
	{
		case 1:
			{
				cout<<"���������\n";
				break;
			}

		case 2:
			{
				cout<<"�������\n";
				break;
			}

		case 3:
			{
				cout<<"�������\n";
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


void engineer_2::show2() const
{
	cout<<"��������� ������ \"�������\", �� ����������� �-���: \n";
	
	cout<<"���: "<<this->nm<<endl;
	cout<<"�������: "<<this->age<<endl;
	cout<<"���: ";
	if (this->sx)	cout<<"�������\n";
	else			cout<<"�������\n";
	
	cout<<"����. �������: "<<this->pfnm<<endl;
	cout<<"���������� �����: "<<this->zp<<endl;
	cout<<"����: "<<this->staj<<endl;
	cout<<"������� ����� � ���������: "<<this->wg<<endl;
	
	cout<<"+������� ��������������� ��������: ";
	
	switch (this->pl)
	{
		case 1:
			{
				cout<<"���������\n";
				break;
			}

		case 2:
			{
				cout<<"�������\n";
				break;
			}

		case 3:
			{
				cout<<"�������\n";
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