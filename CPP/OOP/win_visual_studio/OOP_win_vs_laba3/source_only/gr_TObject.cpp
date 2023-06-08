// СПИСОК
#include "gr_TObject.h"
#include "item.h"
#include <string>


gr_TObject::gr_TObject()
{
	this->obj_name = "gr_TObject";
	//cout<<"Конструктор "<<this->obj_name<<endl;
}

gr_TObject::~gr_TObject()
{

}

void gr_TObject::show() const
{
	cout<<"Show "<<this->obj_name<<endl;
}


