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
		
		if (i==(n-1)) cout<<"\b\b.\n\n";				//� ����� ��������� �����
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
			pp=pp+1;									//���������� ������ ���������
		}
	}


	for(int ii=0;ii<pp-1;ii++)							//����� ��������
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
		�������:�(128), �(133), �(240), �(136), �(142), �(147), �(155), �(157), �(158), �(159)
		�������:�(160), �(165), �(241), �(168), �(174), �(227), �(235), �(237), �(238), �(239)
		����������:A(65), E(69), I(73), O(79), U(85), //Y(89)
		����������:a(97), e(101), i(105), o(111), u(117), //y(121)
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
	cout<<"� ���������� ������� ������������� �� ����������� ��� ������ ��������\n\n���-�� ��������� � ������� (������ 100): ";

	int p=0; cin>>p;	

	if ((cin.good() != 1) || (p>100))  
		{	cout<<"�� ���������� �����";
			Sleep(2000);
			exit(0);
		}


int f[100];
srand( (unsigned)time( NULL ) );
createmass1(f,p);
sotrmass1(f,p);

//____________________________________________________________________________________________________________________________________

	cout<<"� ��������� ������� ����������� ��� ������ ������\n\n���������� ����� � ������� (������ 10) = ";
	
	int m=0;
	cin>>m;
	
	if ((cin.good() != 1)||(m>10))
		{	cout<<"�� ���������� �����";
			Sleep(2000);
			exit(0);
		}

			
	cout<<"���������� �������� � ������� (������ 10) = ";
	
	int l=0;
	cin>>l;
	
	if ((cin.good() != 1)||(l>10))
		{	cout<<"�� ���������� �����";
			Sleep(2000);
			exit(0);
		}


int s[10][10];
createmass2(s,m,l);
sotrmass2(s,m,l);

//____________________________________________________________________________________________________________________________________

char line[100];

cout<<"����/����� ������ � gets(), puts() �� <stdio.h>. ������ �� ������ ��� �������.\n\nC����� (� ��������):";

createstr(line);
cout<<"������ (��� �������):";
setlocale(LC_ALL,".OCP");
sortstr(line);

//____________________________________________________________________________________________________________________________________

system("pause");
}