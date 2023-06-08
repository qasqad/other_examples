#include <iostream>
#include <stdlib.h>
#include <windows.h>
#include <ctime>
using namespace std;
void main ()
{
	setlocale(LC_ALL,"Russian");
system("pause");
cout<<"\t\t\aСтарт"<<endl<<endl;
int otr,polog,k1,k2;
signed int p;
p=0; otr=0; polog=0; k1=0; k2=0;
do
{
	/*srand(time(0));*/
	p=rand()%RAND_MAX-RAND_MAX/2;
	k1=polog; k2=otr;
	if (p>0) polog++;
	if (p<0) otr++;
	if ((polog-k1)==1) cout<<p<<" ("<<polog<<"), ";
	if ((otr-k2)==1) cout<<p<<" ("<<otr<<"), ";
	if (((polog-k1)!=1)&&((otr-k2)!=1)) cout<<p<<".";
} while (p!=0);
	if (polog>otr) cout<<"\n\n\t\t\aСтоп\n\nПоложительных больше\t"<<polog<<">"<<otr<<endl<<endl;
	if (polog<otr) cout<<"\n\n\t\t\aСтоп\n\nОтрицательных больше\t"<<polog<<"<"<<otr<<endl<<endl;
	if (polog==otr) cout<<"\n\n\t\t\aСтоп\n\nПоровну\t"<<polog<<"="<<otr<<endl<<endl;

system("pause");
}