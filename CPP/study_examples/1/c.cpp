#include <iostream>
#include <math.h>
using namespace std;
void main ()
{
const float a=1000.0,b1=0.0001;
	const double b2=0.0001;
float c1, d1, e1, f1;
	double c2, d2, e2, f2;
	
c1=pow(a+b1,2);
	c2=pow(a+b2,2);
d1=pow(a,2);
	d2=pow(a,2);
e1=2*a*b1;
	e2=2*a*b2;
f1=pow(b1,2);
	f2=pow(b2,2);

cout<<"float \t((a+b)^2-(a^2+2ab))/b^2 = "<<(c1-d1-e1)/f1<<endl;
cout<<"double \t((a+b)^2-(a^2+2ab))/b^2 = "<<(c2-d2-e2)/f2<<endl;
	system("pause");
}