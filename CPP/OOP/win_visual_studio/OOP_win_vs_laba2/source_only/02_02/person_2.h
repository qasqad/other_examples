// �������
#pragma once
#include <string>
#include <iostream>
using namespace std;

class person_2
{
	protected:	
	
		string	nm;		// ���
		short	age;	// �������
		bool	sx;		// ��� (true - �.�., false - �.�.)
	
	public:
		person_2();
		//person_2(string nm1, short age1, bool sx1);	
		//person_2(const person_2 & p1);
		virtual ~person_2();								
		virtual void show() const=0;
		void show2() const;
};