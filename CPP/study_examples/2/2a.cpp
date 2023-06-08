#include <iostream>
#include <stdlib.h>
#include <windows.h>
using namespace std;
void main ()
{
	setlocale(LC_ALL,"Russian");
int n, i;
cout<<"n? ";
if (scanf("%i",&n) != 1)
{
	cout<<"необходимо было ввести номер (целое число)!";
	Sleep(3000);
	exit(0);
}
cout<<"\n";
signed int s,k;

	for (i=1,s=0,k=0;i<=n;i++)
		{
			k=rand()%RAND_MAX-RAND_MAX/2;
			cout<<k<<" ("<<i<<"), ";
			s=s+k;
			if (i==n) cout<<"\b\b.";
		} 
cout<<"\ns="<<(double)s/n<<endl<<endl;
system("pause");
}