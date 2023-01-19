#include "empl.h"
#include <windows.h>
#include <iostream>
#include <sstream>

using namespace std;


struct param
{
    
    string nm, nm1;
    int age;
    string lv, lv1;     

};

void cnty(empl templ, empl* ttempl)		//для конструктора копирования№2
{
	if (templ.getAge()>=18)
		{
			cout<<"Объект \""<<&templ<<"\", являющийся копией объекта \""<<ttempl<<"\" - совершеннолетний\n";
		}
	else
		{
			cout<<"Объект \""<<&templ<<"\", являющийся копией объекта \""<<ttempl<<"\" - не совершеннолетний\n";
		}
}

empl pnty(empl * tttempl)		//для конструктора копирования№3 
{
	int ag = tttempl->getAge();
	string n = tttempl->getNm();
	string l = tttempl->getLv();

	empl t4empl("Бывший "+n, ag*2, "Старый "+l);
	return t4empl;
}

void intro(int& count, int tp, bool b1, bool b2)
{
	string tparr[4];
	tparr[0]="СТАТИЧЕСКОГО объекта";
	tparr[1]="ДИНАМИЧЕСКОГО объекта";
	tparr[2]="СТАТИЧЕСКОГО МАССИВА из 3-x объектов";
	tparr[3]="ДИНАМИЧЕСКОГО МАССИВА с произвольным числом объектов ";

	if (b1) cout<<"\nCоздание "<<tparr[tp];
	if((!b1)&&(b2)) cout<<"\n\n\n\t__________________________________________\n";
	if (b2) {
				cout<<"\n\t\t_______________\n"; 
				cout<<"\t\t\"Служащий\" №"<<count<<"\n"; 
				cout<<"\t\t_______________\n\n\n";
				++count;
	}	
	
}

param getvars()
{
    


    cout<<"Имя?\t\t";
    stringstream ss;            
        
    param t_p;

	char t_ch;

    while((t_ch=cin.get()) != '\n')     
        
        {
        
            ss<<t_ch;
            ss>>t_p.nm1;
            ss.clear();
        
            if (t_ch == (char) 32) t_p.nm.append(" ");
            else t_p.nm.append(t_p.nm1);
    
            t_p.nm1.clear();

        }


    cout<<"Возраст?\t";
    
    
    
    while(!(cin>>t_p.age))
    
        {
            cin.clear();
            while(cin.get()!='\n');
            cout<<"\t\tВведите возраст числом: ";
        }


    cin.clear();						
    while (cin.get() != '\n');


    cout<<"Должность?\t";
    
           
	
    while((t_ch=cin.get()) != '\n')
        
        {
        
            ss<<t_ch;
            ss>>t_p.lv1;
            ss.clear();
        
            if (t_ch == (char) 32) t_p.lv.append(" ");
            else t_p.lv.append(t_p.lv1);
    
            t_p.lv1.clear();

        }


    return t_p;

}


void main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

	int iempl=1;	//счетчик созданных объектов

	param p;
	
//_____________________________________________________________________________________________________
	// создание статических объектов конструктором с параметрами
		
		cout<<"______________________________________________________\n"<<"Конструктор C параметрами";
		intro(iempl, 0, true, true);	// Номер служащего
		p=getvars();					// получение параметров через структуру
		empl stat11(p.nm, p.age, p.lv);	// создание объекта в статической памяти с передачей параметров через конструктор с параметрами
		iempl--;
		intro(iempl, 0, false, true);	// Номер служащего
		stat11.shw();					// демонстрация созданного объекта
		

	// создание статических объектов конструктором без параметров

		cout<<"______________________________________________________\n"<<"Конструктор БЕЗ параметров";
		intro(iempl, 0, true, true);					// Номер служащего
		p=getvars();							// получение параметров через структуру
		empl stat12;							// создание объекта в статической памяти
		stat12.setempl(p.nm, p.age, p.lv);		// передача созданному объекту значений
		iempl--;
		intro(iempl, 0, false, true);			// Номер служащего
		stat12.shw();							// демонстрация созданного объекта
		
//___________________________________________________________________________________________________
	
	// создание объектов в динамической памяти конструктором с параметрами

		cout<<"______________________________________________________\n"<<"Конструктор С параметрами";
		intro(iempl, 1, true, true);
		p=getvars();
		empl* din11 = new empl(p.nm, p.age, p.lv);
		iempl--;
		intro(iempl, 1, false, true);			// Номер служащего
		din11->shw();
		delete din11;
		

	// создание объектов в динамической памяти конструктором без параметров
		
		cout<<"______________________________________________________\n"<<"Конструктор БЕЗ параметров";
		intro(iempl, 1, true, true);
		p=getvars();
		empl* din12 = new empl;
		(*din12).setempl(p.nm, p.age, p.lv); //din12->setempl(p.nm, p.age, p.lv);
		iempl--;
		intro(iempl, 1, false, true);			// Номер служащего
		din12->shw();
		delete din12;
		
//______________________________________________________________________________
	

//	// создание массива объектов в статической памяти конструктором с параметрами - невозможно?
//empl stat21[] = {	
//	empl("df", 1, "sdf"),// - создание нового ("df", 1, "sdf"), копирование (в stat21[0]), деструктор нового ("df", 1, "sdf")
//	empl("sdf", 2, "df"),
//	empl("dsf",3,"sdf")
//	};

				
	// создание массива объектов в статической памяти конструктором без параметров

		cout<<"______________________________________________________\n";

		empl stat22[3];

		for (int i4=0; i4<2; i4++)
			
			{	
				if (i4!=1)
					{
						for(int i3=0; i3<3; i3++)
					
							{
								if (i3==0) intro(iempl, 2, true, true);
								else intro(iempl, 2, false, true);
								p=getvars();
								stat22[i3].setempl(p.nm, p.age, p.lv);
				
							}	
					}
				else
					{
						iempl=iempl-3;
						
						for (int i5=0; i5<3; i5++)
							{
								intro(iempl,2, false, true);
								stat22[i5].shw();
							}
					}

			}	
//______________________________________________________________________________________________________
	 //создание массива объектов в динамической памяти конструктором без параметров	
		
		cout<<"______________________________________________________\n"<<"Конструктор БЕЗ параметров";
		
		intro(iempl, 3, true, false);

		int cnt;
	
		cout<<"\nВведите число элементов в массиве: ";

		while(!(cin>>cnt))
	
			{
				cin.clear();
				while((cin.get())!='\n');
				cout<<"необходимо ввести цифрой: ";
			}

		
		
		empl* din21 = new empl[cnt];
			
		while((cin.get())!='\n');

		for(int j1=0; j1<cnt; j1++)
			
			{
				intro(iempl, 3, false, true);
				p=getvars();
				(din21+j1)->setempl(p.nm, p.age, p.lv);
			}

		iempl=iempl-cnt;

		for(int j2=0; j2<cnt; j2++)
			
			{
				intro(iempl, 3, false, true);
				(din21+j2)->shw();
			}
		
		delete [] din21;
	//________________________________________________________________________________________________________________________
	
		cout<<"\nпример вызовов конструктора копирования: \n";
		cout<<"\t1. при использовании объекта для инициализации другого объекта;\n";
		cout<<"\t2. когда объект передается функции по значению;\n";
		cout<<"\t3. при построении временного объекта как возвращаемого значения функции;\n\n";
		
		cout<<"\n\t---1-begin-----------begin-1-begin-----------begin-1---\n";
		empl* cop1=new empl("Шаблон Служащего", 25, "Бессмертный работник");	// или empl asd2 = empl("sd", 12, "sdf");
		empl res1 = *cop1;														//Использование указателя на объект
		delete cop1;
		res1.shw();
		cout<<"\n\t---1---end-----------end---1---end-----------end---1---\n";

		cout<<"\n\t---2-begin-----------begin-2-begin-----------begin-2---\n";
		cnty(res1, &res1);
		cout<<"\n\t---2---end-----------end---2---end-----------end---2---\n";

		cout<<"\n\t---3-begin-----------begin-3-begin-----------begin-3---\n";
		res1=pnty(&res1);
		res1.shw();
		cout<<"\n\t---3---end-----------end---3---end-----------end---3---\n";

	system("pause");

}

