// �������
#pragma once
#include <string>
#include <iostream>
#include "person.h"
using namespace std;

class engineer:public person
{
	protected:	
			int	pl;		// ������� ��������������� �������� (1-����, 2-��, 3-��)
			int	px;		// ���������� ������� � ����������
	public:
            engineer();
			engineer(char nm4[30], int age4, bool sx4, int pl2, int px2);
			~engineer();
            
            void SetNm(char Nm4[30]);
		    void SetAge(int);
            void SetSx(bool);
            void SetPl(int);
            void SetPx(int);

            char* GetNm();
            int GetAge();
            bool GetSx();
            int GetPl();
            int GetPx();

            void show() const;

            bool operator<(const engineer& l3);
            bool operator == (const engineer& f3);

            void showname() const;
};