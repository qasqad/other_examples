// ������
#include "item_2.h"
#include <string>

item_2::item_2(person_2* p2)
{
	cout<<"����������� item\n";

	this->p = p2;			// �������� ������ �� ������, ������� �������� � ������

}

item_2::~item_2()
{
	cout<<"���������� item\n";
}

void item_2::add()
{
	cout<<"�������� � ������ item\n";
	this->next = begin;				
	begin = this;						// ������� filo, ��������� ��

}

void item_2::show()
{
	cout<<"����� ��������� ������ item\n";
	
	item_2 *p3;
	person_2* p5;
	p3 = begin; 
	
	int i4=1;

	while(p3 != NULL )
	{
		
		cout<<"\n\t\t������� ������� �"<<i4<<")\n";
		p5 = (p3->p);

		p5->show();
		p5->show2();


		p3=p3->next;
		
		i4++;
	}
}

