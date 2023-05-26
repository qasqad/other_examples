// 
#pragma once
#include <string>
#include <iostream>
using namespace std;

class person
{
	protected:	
	
		char	nm[30];	// טל
		int	    age;	// גמחנאסע
		bool	sx;		// ןמכ (true - ל.נ., false - ז.נ.)
	
	public:
		person();
        person(char nm2[30], int, bool);
		virtual ~person();
        virtual void SetNm(char Nm3[30])=0;
		virtual void SetAge(int)=0;
        virtual void SetSx(bool)=0;
        virtual char* GetNm()=0;
        virtual int GetAge()=0;
        virtual bool GetSx()=0;

        virtual void show() const;

        bool operator<(const person& l1);
        bool operator == (const person& f1);
};