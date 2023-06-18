#include "employer_2.h"
#include "engineer_2.h"
#include "person_2.h"
#include "worker_2.h"
#include "item_2.h"
#include <iostream>

using namespace std;

item_2 *item_2::begin = NULL;

int main()
{

	worker_2 w2;
	engineer_2 en2;
		
	person_2* per_2[2];
	
	per_2[0] = &w2;		
	per_2[1] = &en2;	

	item_2 it_2[2] = {item_2(per_2[0]), item_2(per_2[1])};

	for(int i2=0; i2<2; i2++)
	{
		
		it_2[i2].add();
	}

	item_2::show();


	system("pause");

	return 0;
}
