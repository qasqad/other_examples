// ќ–√јЌ»«ј÷»я
#include "typeinfo.h"
#include "gr_org.h"
#include "item.h"
#include "gr_tseh.h"
#include "gr_nve.h"
#include <string>




gr_org::gr_org()
{
	this->obj_name = "ќ–√јЌ»«ј÷»я";
	
}

gr_org::~gr_org()
{
	//cout<<"__________________________________"<<this->obj_name<<"__________________________________\n\n";

	item * p2 = this->fO_lifo;
    p2->TObj->~gr_TObject();

	do
	{
		p2 = p2->next;
		p2->TObj->~gr_TObject();
	}
	while(p2->next!=NULL);
}

void gr_org::insert(gr_TObject* gr_o2, item* it2)
{
	//cout<<"Insert вызван "<<this->obj_name<<endl;
	
	int i=0; 
	
	while((it2+i)->TObj!=NULL)	i=rand()%54;	// поиск свободного item`а. элементы выбираютс¤ вперемешку

	(it2+i)->TObj = gr_o2;
	(it2+i)->next = this->fO_lifo;
	this->fO_lifo = (it2+i);
}

void gr_org::show() const
{
	cout<<"__________________________________"<<this->obj_name<<"__________________________________\n\n";

	item * p2 = this->fO_lifo;
	p2->TObj->show();

	do
	{
		p2 = p2->next;
		p2->TObj->show();
	}
	while(p2->next!=NULL);

}

void gr_org::iter(fp fnc, int * t1)
{
    //cout<<"\t\torg_iter\n";
    item * p3 = this->fO_lifo;

    do
    {
        if(typeid(*p3->TObj)==typeid(gr_tseh))
        {
            //typeid(*p3->TObj).name(); - не работает (?)
            gr_tseh *tseh_t = (gr_tseh*) p3->TObj;
            tseh_t->iter(fnc, t1);
            p3=p3->next;
        }

        else
        {
            //typeid(*p3->TObj).name(); - не работает (?)
            gr_nve *nve_t = (gr_nve*) p3->TObj;
            nve_t->iter(fnc, t1);
            p3=p3->next;
        }


    }

    while(p3->next!=NULL);

        if(typeid(*p3->TObj)==typeid(gr_tseh))
        {
            //typeid(*p3->TObj).name(); - не работает (?)
            gr_tseh *tseh_t = (gr_tseh*) p3->TObj;
            tseh_t->iter(fnc, t1);
        }

        else
        {
            //typeid(*p3->TObj).name(); - не работает (?)
            gr_nve *nve_t = (gr_nve*) p3->TObj;
            nve_t->iter(fnc, t1);
        }

}