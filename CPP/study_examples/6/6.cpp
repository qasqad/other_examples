#include <iostream>
#include <Windows.h>
using namespace std;

struct person
{
	char * name;
	char * adres;
	int age;
};

void main()
{
	setlocale(LC_ALL, "Russian");

	
	do
	{
		cout<<"1. ��������/n2. �����/n3. �����";

		
	}
	
	
	/*

	cout<<"������� ������ ������� ��������: "; int lp; cin>>lp;
	if(cin.good()!=1)
	{
		cout<<"\n������. ������������ ������\n\n�� ������ ������!\n������ ��� ���! \1\n";
		Sleep(4000);
		exit(0);
	}


	cout<<"\n����� ���� '���': ";	int ln;	cin>>ln;
	if(cin.good()!=1)
	{	
		cout<<"\n������. ������������ ����\n\n�� ������ ������!\n������ ��� ���! "<<(char) 1<<endl;
		Sleep(4000);
		exit(0);
	}


	cout<<"\n����� ���� '�����': "; int lad; cin>>lad;
	if(cin.good()!=1)
	{	
		cout<<"\n������. ������������ ����\n\n�� ������ ������!\n������ ��� ���! "<<(char) 1<<endl;
		Sleep(4000);
		exit(0);
	}


	person * prsn=new person[lp];

	for(int i=0; i<lp; i++)
	{
		prsn[i].name=new char[ln];
		prsn[i].adres=new char[lad];
	}	
		
	
	
	for(int i=0; i<lp; i++)	//�������� ��������: ������ �������?/����� �������?
	{
		cout<<"\n��� �������� ��� ������� "<<i+1<<": "; 
		cin.ignore();
		gets(prsn[i].name);

			if((cin.good()!=1))
			{	
				cout<<"\n������. ������������ ���� ���\n\n�� ������ ������!\n������ ��� ���! \1"<<endl;
				Sleep(4000);
				exit(0);
			}

		cout<<"����� �������� ��� ������� "<<i+1<<": ";
		gets(prsn[i].adres);
		
			if(cin.good()!=1)
			{	
				cout<<"\n������. ������������ ���� �����\n\n�� ������ ������!\n������ ��� ���! \1"<<endl;
				Sleep(4000);
				exit(0);
			}

		cout<<"������� �������� ��� ������� "<<i+1<<": ";
		cin>>prsn[i].age;

			if(cin.good()!=1)
			{	
				cout<<"\n������. ������������ ���� �������\n\n�� ������ ������!\n������ ��� ���! \1"<<endl;
				Sleep(4000);
				exit(0);

			}

	}

	for(int i=0; i<lp; i++)	cout<<endl<<i+1<<"-�\n\n\t"<<prsn[i].name<<"\n\t"<<prsn[i].adres<<"\n\t"<<prsn[i].age<<"\n\n";

	*/

	system("pause");
}
