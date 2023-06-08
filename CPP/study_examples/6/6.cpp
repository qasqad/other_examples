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
		cout<<"1. Добавить/n2. Найти/n3. Найти";

		
	}
	
	
	/*

	cout<<"Введите длинну массива структур: "; int lp; cin>>lp;
	if(cin.good()!=1)
	{
		cout<<"\nОшибка. Некорректная длинна\n\nДо скорых встреч!\nПРЯМЫХ ВАМ РУК! \1\n";
		Sleep(4000);
		exit(0);
	}


	cout<<"\nДлина поля 'имя': ";	int ln;	cin>>ln;
	if(cin.good()!=1)
	{	
		cout<<"\nОшибка. Некорректное поле\n\nДо скорых встреч!\nПРЯМЫХ ВАМ РУК! "<<(char) 1<<endl;
		Sleep(4000);
		exit(0);
	}


	cout<<"\nДлина поля 'адрес': "; int lad; cin>>lad;
	if(cin.good()!=1)
	{	
		cout<<"\nОшибка. Некорректное поле\n\nДо скорых встреч!\nПРЯМЫХ ВАМ РУК! "<<(char) 1<<endl;
		Sleep(4000);
		exit(0);
	}


	person * prsn=new person[lp];

	for(int i=0; i<lp; i++)
	{
		prsn[i].name=new char[ln];
		prsn[i].adres=new char[lad];
	}	
		
	
	
	for(int i=0; i<lp; i++)	//добавить проверку: Строка введена?/Число введено?
	{
		cout<<"\nИмя человека под номером "<<i+1<<": "; 
		cin.ignore();
		gets(prsn[i].name);

			if((cin.good()!=1))
			{	
				cout<<"\nОшибка. Некорректное поле ИМЯ\n\nДо скорых встреч!\nПРЯМЫХ ВАМ РУК! \1"<<endl;
				Sleep(4000);
				exit(0);
			}

		cout<<"Адрес человека под номером "<<i+1<<": ";
		gets(prsn[i].adres);
		
			if(cin.good()!=1)
			{	
				cout<<"\nОшибка. Некорректное поле АДРЕС\n\nДо скорых встреч!\nПРЯМЫХ ВАМ РУК! \1"<<endl;
				Sleep(4000);
				exit(0);
			}

		cout<<"Возраст человека под номером "<<i+1<<": ";
		cin>>prsn[i].age;

			if(cin.good()!=1)
			{	
				cout<<"\nОшибка. Некорректное поле ВОЗРАСТ\n\nДо скорых встреч!\nПРЯМЫХ ВАМ РУК! \1"<<endl;
				Sleep(4000);
				exit(0);

			}

	}

	for(int i=0; i<lp; i++)	cout<<endl<<i+1<<"-й\n\n\t"<<prsn[i].name<<"\n\t"<<prsn[i].adres<<"\n\t"<<prsn[i].age<<"\n\n";

	*/

	system("pause");
}
