#include <iostream>
#include <stdlib.h>
#include <windows.h>
using namespace std;
void main ()
{
setlocale(LC_ALL,"Russian");

unsigned int n=0, maxi;
cout<<"Введите количество элементов в массиве < 100 = ";

	if ((scanf("%i",&n) != 1))
		{
			cout<<"необходимо было ввести количество элементов!";
			Sleep(4000);
			exit(0);
		}	


	
	if (n>=100) 
		{
			cout<<"необходимо было ввести количество элементов согласно условию!";
			Sleep(4000);
			exit(0);
		}


int m[100],i;
cout<<"\nВыводим начальный массив\n\n";


	for(i=0;i<=(n-1);i++) m[i]=rand()%100-50;
	
	for(i=0;i<=(n-1);i++) cout<<m[i]<<"["<<i+1<<"]"<<", ";

	cout<<"\b\b.\n\n";

cout<<"\n\nИщем максимальный элемент и удаляем его из начального массива\n\n";
signed int max=m[0];

	
		for(i=0;i<=(n-1);i++)
			{
				if (max<m[i]) 
					{
						max=m[i];
						maxi=i;
					}
			}


cout<<max<<" ["<<++maxi<<"] - максимальный элемент\n\n";


		for(i=maxi-1;i<=(n-1);i++) m[i]=m[i+1];

		m[n-1]=0;

		for(i=0;i<=(n-2);i++) cout<<m[i]<<"["<<i+1<<"]"<<", ";

		cout<<"\b\b.\n\n";

unsigned int k=0;
cout<<"\nВведите число элементов, которые необходимо добавить в начало массива\n";
		
		if ((scanf("%i",&k) != 1))
			{
				cout<<"необходимо было ввести число элементов!";
				Sleep(4000);
				exit(0);
			}

		
		if (k>(101-n)) 
			{
				cout<<"число элементов должно было быть не больше числа свободных мест в массиве!";
				Sleep(5000);
				exit(0);
			}

cout<<"\n";

		
		for(i=0;i<=(n-2);i++) m[n+k-2-i]=m[n-2-i];

		for(i=0;i<=k-1;i++) m[i]=rand()%100-50;

		for(i=0;i<=(n-2+k);i++) cout<<m[i]<<"["<<i+1<<"]"<<", ";

		cout<<"\b\b.\n\n\n";

cout<<"Перевернем массив\n";
signed int buff;

		for(i=0;i<=((n+k-1)/2-1);i++)	
			{
				buff=m[n+k-2-i];
				m[n+k-2-i]=m[i];
				m[i]=buff;
			}

		for(i=0;i<=(n+k-2);i++) cout<<m[i]<<"["<<i+1<<"]"<<", ";

		cout<<"\b\b.\n\n\n";

unsigned int ifeven;
		
		for(i=0;i<=(n+k-2);i++)
			{
				if (m[i]%2==0) {ifeven=i; break;}
			}

		cout<<"("<<m[ifeven]<<") - первое четное число массива. Количество сравнений: "<<ifeven+1<<"\n\n\nСортировка методом простого обмена\n\n";

		for(i=1;i<n+k-2;i++)
		for(int j=n+k-2;j>=i;j--)
			{
				if (m[j]<m[j-1]) 
					{
						buff=m[j];
						m[j]=m[j-1];
						m[j-1]=buff;
					} 
			}

		for(i=0;i<=(n+k-2);i++) cout<<m[i]<<"["<<i+1<<"]"<<", ";

		cout<<"\b\b.\n\n\n";

		for(i=0;i<=(n+k-2);i++)
			{
				if (*(m+i)%2==0) {ifeven=i; break;}
			}

		cout<<"("<<m[ifeven]<<") - первое четное число массива. Количество сравнений: "<<ifeven+1<<"\n\n\n";

system("pause");
}