// �������
#pragma once
#include "gr_TObject.h"
#include <string>
#include <iostream>

using namespace std;

class cls_person : public gr_TObject
{
	protected:	
		
        string	nm;		// ���
		int	age;	// �������
		bool	sx;		// ��� (true - �.�., false - �.�.)
	
	public:
		
        cls_person();
		virtual ~cls_person();								
		virtual void show() const=0;
		string getnm() const;
};