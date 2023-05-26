#include "employer_1.h"
#include "engineer_1.h"
#include "person_1.h"
#include "worker_1.h"
#include <windows.h>
#include <iostream>

using namespace std;

void main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

	
	//person_1 p1;		
	//employer_1 em1;
	worker_1 w1;
	engineer_1 en1;
		
	person_1* p2[2];
		
	//p2[0] = &p1;		
	//p2[1] = &em1;		
	p2[0] = &w1;		
	p2[1] = &en1;		
		
	for (int i=0; i<2; i++)
	{
		p2[i]->show();
	}
		
	for (int i=0; i<2; i++)
	{
		p2[i]->show2();
	}
	
	system("pause");
}