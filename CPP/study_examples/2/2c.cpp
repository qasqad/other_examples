#include <iostream>
#include <stdlib.h>
#include <windows.h>
#include <math.h>
using namespace std;
void main ()
{
	setlocale(LC_ALL,"Russian");
int n;
n=0;
cout<<"S=1-2+3-4+5-6+...((-1)^(n+1))n"<<"\n¬ведите n ";
 if (scanf("%i",&n) != 1)
{
	cout<<"необходимо было ввести номер (целое число)!";
	Sleep(3000);
	exit(0);
}

signed int s;
int i;

cout<<"\n";

for (i=1,s=0;i<=n;i++)
{
	s=s+pow((double)-1,i+1)*i;
	cout<<"S("<<i<<")="<<s<<endl;
}

cout<<endl<<"S ("<<n<<")=";
for (i=1,s=0;i<=n;i++)
{
	s=s+pow((double)-1,i+1)*i;
	if ((i%2!=0)&&(i!=1)) cout<<"+"<<pow((double)-1,i+1)*i;else cout<<pow((double)-1,i+1)*i; 
}
cout<<"="<<s<<endl<<endl;

system("pause");
}