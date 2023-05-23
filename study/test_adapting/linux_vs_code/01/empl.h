#pragma once
#include <string>
#include <iostream>
using namespace std;

class empl
{
	string nm;		                                    // имя
	int age;		                                    // возраст
	string lv;		                                    // должность

public:

	empl();											    // конструктор без параметров
	empl(string nm2, int age2, string lv2);			    // конструктор с параметрами
	empl(const empl& em);								// конструктор копирования
	~empl();										    // деструктор

	// селекторы
	    string getNm() const;
	    int getAge() const;
	    string getLv() const;

	// модификаторы
	    void setNm(string nm12);
	    void setAge(int age12);
	    void setLv(string lv12);

	void setempl(string nm3, int age3, string lv3);
	void shw() const;

};