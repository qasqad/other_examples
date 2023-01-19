#include <iostream>
#include "List.h"
#include <windows.h>

using namespace std;

void chartype()
{
	list<char> a,b;
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
	else {cout<< "Списки равны"<<endl;}
	cout << b[0] <<endl;

}

void inttype()
{
	list<int> a,b;
	a.Input(1);
	a.Input(2);
	a.Input(3);

	b.Input(4);
	b.Input(5);
	b.Input(6);

	a.Print();
	b.Print();

	if (a!=b) {
		cout<< "Списки неравны"<<endl;
	}
	cout << b[0] <<endl;

}
void doubletype()
{
	list<double> a,b;
	a.Input(1.1);
	a.Input(1.2);
	a.Input(1.3);

	b.Input(1.4);
	b.Input(1.2);
	b.Input(1.6);

	a.Print();
	b.Print();

	if (a!=b) {
		cout<< "Списки неравны"<<endl;
	}
	cout << b[0] <<endl;

}
int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

	chartype();
	cout << endl;
	inttype();
	cout << endl;
	doubletype();
	cout << endl;

	system("pause");
	return 0;
}