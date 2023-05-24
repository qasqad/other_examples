#include <iostream>
#include "List.h"
#include <windows.h>

using namespace std;

int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

	list a,b;
	a.Input('D');
	a.Input('J');
	a.Input('C');

	b.Input('D');
	b.Input('J');
	b.Input('C');

	a.Print();
	b.Print();

	if (a!=b) {
		cout<< "Списки неравны"<<endl;
	}
	cout << b[0] <<endl;

	system("pause");
	return 0;
}