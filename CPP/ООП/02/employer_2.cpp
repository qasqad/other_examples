// ��������
#include "person_2.h"
#include "employer_2.h"
#include <string>


employer_2::employer_2()
{
	cout<<"����������� employer\n";
	this->nm = "��������";
	this->age = 30;
	this->sx = true;

	this->pfnm = "�������������";
	this->zp = 50000;
	this->staj = 5;
	this->wg = 70;
}


//employer_2::employer_2(string pfnm1, float zp1, float staj1, short wg1, string nm1, short age1, bool sx1):person_2(nm1, age1, sx1)
//{
//	
//	this->nm = nm1;
//	this->age = age1;
//	this->sx = sx1;
//
//	this->pfnm = pfnm1;
//	this->zp = zp1;
//	this->staj = staj1;
//	this->wg = wg1;
//}
//
//
//employer_2::employer_2(const employer_2 & em1)
//{
//	cout<<"����������� ����������� employer\n";
//	this->nm = em1.nm;
//	this->age = em1.age;
//	this->sx = em1.sx;
//
//	this->pfnm = em1.pfnm;
//	this->zp = em1.zp;
//	this->staj = em1.staj;
//	this->wg = em1.wg;
//}

employer_2::~employer_2()
{
	cout<<"���������� employer\n";
}

void employer_2::show() const
{
	cout<<"��������� ������ \"��������\", ����������� �-���: \n";
	
	cout<<"���: "<<this->nm<<endl;
	cout<<"�������: "<<this->age<<endl;
	cout<<"���: ";
	if (this->sx)	cout<<"�������\n";
	else			cout<<"�������\n";
	
	cout<<"+����. �������: "<<this->pfnm<<endl;
	cout<<"+���������� �����: "<<this->zp<<endl;
	cout<<"+����: "<<this->staj<<endl;
	cout<<"+������� ����� � ���������: "<<this->wg<<"\n\n";
}

void employer_2::show2() const
{
	cout<<"��������� ������ \"��������\", �� ����������� �-���: \n";
	
	cout<<"���: "<<this->nm<<endl;
	cout<<"�������: "<<this->age<<endl;
	cout<<"���: ";
	if (this->sx)	cout<<"�������\n";
	else			cout<<"�������\n";
	
	cout<<"+����. �������: "<<this->pfnm<<endl;
	cout<<"+���������� �����: "<<this->zp<<endl;
	cout<<"+����: "<<this->staj<<endl;
	cout<<"+������� ����� � ���������: "<<this->wg<<"\n\n";
}