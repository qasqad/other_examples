#pragma once
#include <string>
#include <iostream>
using namespace std;

class empl
{
	string nm;		                                    // ���
	int age;		                                    // �������
	string lv;		                                    // ���������

public:

	empl();											    // ����������� ��� ����������
	empl(string nm2, int age2, string lv2);			    // ����������� � �����������
	empl(const empl& em);								// ����������� �����������
	~empl();										    // ����������

	// ���������
	    string getNm() const;
	    int getAge() const;
	    string getLv() const;

	// ������������
	    void setNm(string nm12);
	    void setAge(int age12);
	    void setLv(string lv12);

	void setempl(string nm3, int age3, string lv3);
	void shw() const;

};