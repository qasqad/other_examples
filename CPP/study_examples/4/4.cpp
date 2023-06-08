#include <windows.h>
#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <string.h>
using namespace std;

void createmass1(int mass[] , int n)
{	
	cout<<"\n";
	for(int i=0;i<n;i++)	
	{
		*(mass+i)=rand()%100-50;
		
		cout<<mass[i]<<", ";
		
		if (i==(n-1)) cout<<"\b\b.\n\n";				//в конце поставить точку
	}
}

void sotrmass1(int mass[], int n)
{
	int pp=0,buff=0,massfevi[100];
	
	for(int i=0;i<n;i++)
	{
		if(mass[i]%2==0)
		{
			massfevi[pp]=i;
			pp=pp+1;									//количество четных элементов
		}
	}


	for(int ii=0;ii<pp-1;ii++)							//метод пузырька
	{
		for(int i=ii+1;i<pp;i++)
		{
			if (mass[massfevi[i]]<mass[massfevi[ii]])
			{
				buff=mass[massfevi[i]];
				mass[massfevi[i]]=mass[massfevi[ii]];
				mass[massfevi[ii]]=buff;
			}
		}
	}
	
	for(int i=0;i<n;i++)	
	{
		cout<<mass[i]<<", ";
		if (i==(n-1)) cout<<"\b\b.\n\n\n\n";
	}

}

void createmass2(int mass[10][10], int m, int l)
{

	for(int i=0;i<m;i++)
	{	
		cout<<"\n";
		for(int j=0;j<l;j++)
		{
			mass[i][j]=rand()%100-50;
			cout<<mass[i][j]<<"\t";
		if ((i==(m-1))&&(j==(l-1))) cout<<"\n\n";
		}
	}
}

void sotrmass2(int mass[10][10] , int m, int l)
{
	int buff=0;
	for(int i=0;i<m;i++)
	{
		if ((i%2)!=0)
		{		
				for(int j=0;j<l/2;j++)
				{
					buff=mass[i][j];
					mass[i][j]=mass[i][l-j-1];
					mass[i][l-j-1]=buff;
				}
				
		}
	}
		
	for(int i=0;i<m;i++)
	{	
		cout<<"\n";
		for(int j=0;j<l;j++)
		{
			cout<<mass[i][j]<<"\t";
			if ((i==(m-1))&&(j==(l-1))) cout<<"\n\n\n\n";
		}
	}
}

void createstr(char * str)
{
	cin.ignore();
	gets(str);
}

void sortstr(char * str)
{	
	
	int i=0;
	while(str[i])
	{
		
		/*
		РУССКИЕ:А(128), Е(133), Ё(240), И(136), О(142), У(147), Ы(155), Э(157), Ю(158), Я(159)
		русские:а(160), е(165), ё(241), и(168), о(174), у(227), ы(235), э(237), ю(238), я(239)
		АНГЛИЙСКИЕ:A(65), E(69), I(73), O(79), U(85), //Y(89)
		английские:a(97), e(101), i(105), o(111), u(117), //y(121)
		*/
		
		if (
				str[i]==(char)	65	||
				str[i]==(char)	69	||
				str[i]==(char)	73	||
				str[i]==(char)	79	||
				str[i]==(char)	85	||
				//str[i]==(char)	89	||
				str[i]==(char)	97	||
				str[i]==(char)	101	||
				str[i]==(char)	105	||
				str[i]==(char)	111	||
				str[i]==(char)	117	||
				//str[i]==(char)	121	||
				str[i]==(char)	128	||
				str[i]==(char)	133	||
				str[i]==(char)	136	||
				str[i]==(char)	142	||
				str[i]==(char)	147	||
				str[i]==(char)	155	||
				str[i]==(char)	157	||
				str[i]==(char)	158	||
				str[i]==(char)	159	||
				str[i]==(char)	160	||
				str[i]==(char)	165	||
				str[i]==(char)	168	||
				str[i]==(char)	174	||
				str[i]==(char)	227	||
				str[i]==(char)	235	||
				str[i]==(char)	237	||
				str[i]==(char)	238	||
				str[i]==(char)	239	||
				str[i]==(char)	240	||
				str[i]==(char)	241	

			)

		{
			
			for(int ii=i;ii<strlen(str);ii++)
			{
				str[ii]=str[ii+1];
				if (ii==strlen(str)-1) str[ii]='\0';
			}
			
			--i;
			
		}
		
		
		i++;
	}

puts(str);
cout<<"\n\n";
}

void main()
{

setlocale(LC_ALL,"RUSSIAN");

//____________________________________________________________________________________________________________________________________
	cout<<"В одномерном массиве отсортировать по возрастанию все четные элементы\n\nКол-во элементов в массиве (меньше 100): ";

	int p=0; cin>>p;	

	if ((cin.good() != 1) || (p>100))  
		{	cout<<"не корректное число";
			Sleep(2000);
			exit(0);
		}


int f[100];
srand( (unsigned)time( NULL ) );
createmass1(f,p);
sotrmass1(f,p);

//____________________________________________________________________________________________________________________________________

	cout<<"В двумерном массиве перевернуть все четные строки\n\nКоличество строк в массиве (меньше 10) = ";
	
	int m=0;
	cin>>m;
	
	if ((cin.good() != 1)||(m>10))
		{	cout<<"не корректное число";
			Sleep(2000);
			exit(0);
		}

			
	cout<<"Количество столбцов в массиве (меньше 10) = ";
	
	int l=0;
	cin>>l;
	
	if ((cin.good() != 1)||(l>10))
		{	cout<<"не корректное число";
			Sleep(2000);
			exit(0);
		}


int s[10][10];
createmass2(s,m,l);
sotrmass2(s,m,l);

//____________________________________________________________________________________________________________________________________

char line[100];

cout<<"Ввод/вывод строки с gets(), puts() из <stdio.h>. Убрать из строки все гласные.\n\nCтрока (с гласными):";

createstr(line);
cout<<"Строка (без гласных):";
setlocale(LC_ALL,".OCP");
sortstr(line);

//____________________________________________________________________________________________________________________________________

system("pause");
}