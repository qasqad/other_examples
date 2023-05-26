// НАПРАВЛЕНИЕ
# include "gr_nve.h"
#include "item.h"
#include "cls_engineer.h"
#include <string>


gr_nve::gr_nve()
{
	this->obj_name = "НАПРАВЛЕНИЕ";
	//cout<<"Конструктор "<<this->obj_name<<endl;
}

gr_nve::~gr_nve()
{
	//cout<<"Деструктор "<<this->obj_name<<endl;
    //cout<<"\t\t_______________"<<this->obj_name<<"_______________\n";

	int i=1;

	item * p2 = this->fO_lifo;
	//cout<<i<<")\t"; i++;
    p2->TObj->~gr_TObject();
	
	do
	{
		//cout<<i<<")\t"; i++;
		p2 = p2->next;
		p2->TObj->~gr_TObject();
	}
	while(p2->next!=NULL);
}

void gr_nve::insert(gr_TObject* gr_o2, item* it2)
{
	//cout<<"Insert вызван "<<this->obj_name<<endl;
	
	int i=0; 
	
	while((it2+i)->TObj!=NULL)	i=rand()%54;	// поиск свободного item`а. элементы выбираются вперемешку

	(it2+i)->TObj = gr_o2;
	(it2+i)->next = this->fO_lifo;
	this->fO_lifo = (it2+i);
}

void gr_nve::show() const
{
	cout<<"\t\t_______________"<<this->obj_name<<"_______________\n";

	int i=1;

	item * p2 = this->fO_lifo;
	cout<<i<<")\t"; i++;
	p2->TObj->show();
	
	do
	{
		cout<<i<<")\t"; i++;
		p2 = p2->next;
		p2->TObj->show();
	}
	while(p2->next!=NULL);
}


void gr_nve::iter(fp fnc, int * t3)
{
        cout<<"\t\tсмотрим направление:\n";

        item * p3_1 = this->fO_lifo;

        do
        {
            cls_engineer *eng_t = (cls_engineer*) p3_1->TObj;
            fnc(eng_t, t3);
            p3_1=p3_1->next;
        }

        while(p3_1->next!=NULL);

        cls_engineer *eng_t = (cls_engineer*) p3_1->TObj;
        fnc(eng_t, t3);

}