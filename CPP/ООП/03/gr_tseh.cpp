// ���
#include "gr_tseh.h"
#include "item.h"
#include "cls_worker.h"
#include <string>


gr_tseh::gr_tseh()
{
	this->obj_name = "���";
	//cout<<"����������� "<<this->obj_name<<endl;
}

gr_tseh::~gr_tseh()
{
	//cout<<"���������� "<<this->obj_name<<endl;
    //cout<<"\t\t____________________"<<this->obj_name<<"____________________\n";

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

void gr_tseh::insert(gr_TObject* gr_o2, item* it2)
{
	
	//cout<<"Insert ������ "<<this->obj_name<<endl;
	
	int i=0; 
	
	while((it2+i)->TObj!=NULL)	i=rand()%54;	// ����� ���������� item`�. �������� ���������� ����������

	(it2+i)->TObj = gr_o2;
	(it2+i)->next = this->fO_lifo;
	this->fO_lifo = (it2+i);

}

void gr_tseh::show() const
{
	cout<<"\t\t____________________"<<this->obj_name<<"____________________\n";

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

void gr_tseh::iter(fp fnc, int * t2)
{
    cout<<"\t\t������� ���:\n";

    item * p3_1 = this->fO_lifo;

    do
    {
        cls_worker *wrk_t = (cls_worker*) p3_1->TObj;
        fnc(wrk_t, t2);
        p3_1=p3_1->next;
    }

    while(p3_1->next!=NULL);

    cls_worker *wrk_t = (cls_worker*) p3_1->TObj;
    fnc(wrk_t, t2);

}