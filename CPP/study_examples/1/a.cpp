#include <iostream>
#include <windows.h>
#include <math.h>
using namespace std;
void main ()
{
setlocale(LC_ALL,"Russian");
float n, m;

cout<<"m?";
		
if (scanf("%f",&m) != 1)
{
	cout<<"необходимо было ввести число!";
	Sleep(3000);
	exit(0);
	
}

		cout<<"n?";
		
if (scanf("%f",&n) != 1)
{
	cout<<"необходимо было ввести число!";
	Sleep(3000);
	exit(0);
	
}

cout<<"\nn="<<n<<" m="<<m<<" n+++m="<<n+++m<<endl<<endl;
	
system("pause");

////////////////////////////////////////////////////////////////////////////////////////////////

bool b1;	
	b1=(m-->n);
cout<<"\nn="<<n<<" m="<<m<<" m-->n="<<b1<<endl;

////////////////////////////////////////////////////////////////////////////////////////////////

bool b2;	
	b2=(n-->m);
cout<<"\nn="<<n<<" m="<<m<<" n-->m="<<b2<<endl<<endl;
system("pause");

////////////////////////////////////////////////////////////////////////////////////////////////

float x;
cout<<"\nx?";
if (scanf("%f",&x) != 1)
{
	cout<<"необходимо было ввести число!";
	Sleep(3000);
	exit(0);
	
}

float a;a=sin(x);
float b;b=pow(x,3);
float c;c=pow(pow(x,2)+1,-1);
cout<<"\nx="<<x<<"\tsin(x)+x^3+(1/(x^2+1))="<<a+b+c<<endl<<endl;
system("pause");
}