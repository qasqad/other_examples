// �������
#pragma once
#include <string>
#include <iostream>
using namespace std;

class person_1 /*abstract*/
{
	protected:	
	
		string	nm;		// ���
		short	age;	// �������
		bool	sx;		// ��� (true - �.�., false - �.�.)
	
	public:
		person_1();
		//person_1(string nm1, short age1, bool sx1);	
		//person_1(const person_1 & p1);
		virtual ~person_1();								
		virtual void show() const /*abstract*/;
		void show2() const;
};