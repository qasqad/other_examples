#include <iostream>
#include <windows.h>
using namespace std;
void main ()
{
	setlocale(LC_ALL,"Russian");
float x,y;
bool bx, bxy;
cout<<"x = ";
if (scanf("%f",&x) != 1)
{
	cout<<"необходимо было ввести число!";
	Sleep(3000);
	exit(0);
	
}

bx=(x>=0.0)&&(x<=5.0);	
if (bx) 
{
cout<<"y = ";
if (scanf("%f",&y) != 1)
{
	cout<<"необходимо было ввести число!";
	Sleep(3000);
	exit(0);
	
}
bxy=(x>=0.0)&&(x<=5.0)&&(y>=0.0)&&(y<=1.0);
cout<<"x from [0,5] and y from [0,1] is "<<bxy;			
cout<<endl;
}
system("pause");
}






