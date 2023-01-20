// РАБОЧИЙ
#pragma once
#include <string>
#include <iostream>
#include "person.h"
using namespace std;

class worker:public person
{
	protected:	
		int	wqp;		// % удобств в условиях работы
	public:					
		worker();
        worker(char nm3[30], int age3, bool sx3, int wqp2);
		~worker();
        void SetNm(char Nm5[30]);
        void SetAge(int);
        void SetSx(bool);
        void SetWqp(int);

        char* GetNm();
        int GetAge();
        bool GetSx();
        int GetWqp();

		void show() const;

        bool operator<(const worker& l2);
        bool operator == (const worker& f2);

        void showname() const;
        
};