// ������

#include "item.h"

#include <string>


item::item()
{
	//cout<<"����������� item �� ���������\n";

	this->TObj = NULL;
	this->next = NULL;
}

item::item(gr_TObject* TObj2)
{
	//cout<<"������������ item ��������� TObj2 � �������"<<TObj2<<"\n";
	
	this->TObj = TObj2;			// �������� ������ �� ������, ������� �������� � ������
	//cout<<this->TObj<<endl;
	
	this->next = NULL;

}

item::~item()
{
	//cout<<"���������� item\n";
}
