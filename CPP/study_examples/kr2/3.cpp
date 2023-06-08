#include <iostream>
#include <Windows.h>


void main()
{
	setlocale(LC_ALL, "Russian");
	
	cout<<"Введите количество элементов в массиве";
	
	int p=0; cin>>p;
	if (cin.good()!=1)
	{
		cout<<"ошибка!";
		Sleep(2000);
		exit(0);
	}
	
	cout<<"Введите количество элементов в массиве, которые надо удалить";
	int n=0; cin>>n;
	if (cin.good()!=1)
	{
		cout<<"ошибка!";
		Sleep(2000);
		exit(0);
	}

	int * mas=new int[n];
	
	for(int i=0; i<p; i++)	mas[i]=rand()%100-50;
	
	int ch;
	for(int i=0; i<n; i++)	if(mas[i]%2==0)	ch=i;
	
	if ((p-ch-1)<n)
	cout<<"При удалении из массива достигается конец массива. число удаленных будет уменьшено до максимально возможного ("<<(n=p-ch-1)<<")\n";
	
	int *mas2=new int[ch];
	
	for(int i=0; i<ch; i++)
	{
		mas2[i]=mas[i];
		cout<<mas2[i];
	}
	
	system("pause");
	
}