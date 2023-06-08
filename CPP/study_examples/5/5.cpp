# include <iostream>
# include <Windows.h>
# include <time.h>
using namespace std;


 int vardeistv(bool DopSpis[5], bool &dvmas)	//вариант действий, допустимый список
{	/*	1. Формарование массива
		2. Печать массива
		3. Удаление из массива
		4. Добавление в массив
		5. Выход
	*/
	int i=0;
	int j[5]={-1,-1,-1,-1,-1};


		for (int k=0; k<5; k++)
		{
			if (DopSpis[k]==1) 
			{
				cout<<"\t\t"<<i+1<<". ";
				
					switch(k)
					{
						case 0: cout<<"Формирование массива\n"; break;
						case 1: cout<<"Печать массива\n"; break;
						case 2: cout<<"Удаление из массива первого четного элемента\n"; break;
						case 3:	if(dvmas==true)	cout<<"Работать с двумерным массивом\n";	else	cout<<"Добавление строки в массив\n"; break;
						case 4: cout<<"Выход\n"; break;
					}
				j[i]=k;	i++;
			}
		}

	cout<<"\nВыберите номер действия: ";	int d=0;	cin>>d;
	
	if ((d<=0)||(d>=6))
	{
		cout<<"\n\tСделан некоректный выбор";
		Sleep(2000);
		exit(0);
	}
	
	
	if ((cin.good()==1)&&(DopSpis[j[d-1]]==1))
		{
			switch(j[d-1])
			{
				case 0: return 0; break;
				case 1: return 1; break;
				case 2: return 2; break;
				case 3: return 3; dvmas=false; break;
				case 4: return 4; break;
			}
		}
	
	else
		{
			cout<<"\n\tСделан некоректный выбор";
			Sleep(2000);
			exit(0);
		}
}




int fas()
{
	cout<<"ВВЕДИТЕ РАЗМЕР ОДНОМЕРНОГО МАССИВА: ";
	int r1=0;	cin>>r1;	cout<<"\n\n\n";
	if (cin.good()!=1)
	{
		cout<<"\n\tНекорректный размер массива";
		Sleep(2000);
		exit(0);
	}
	return r1;
}



void sas(int &swidth, int &sheight, int &p)
{
	cout<<"ВВЕДИТЕ РАЗМЕРЫ ДВУМЕРНОГО МАССИВА\nКоличество строк: ";
	cin>>sheight;
	
	if (cin.good()!=1)
	{
		cout<<"\n\tНекорректный размер массива";
		Sleep(2000);
		exit(0);
	}
	
	cout<<"Количество столбцов: ";
	cin>>swidth;	
	
	if (cin.good()!=1)
	{
		cout<<"\n\tНекорректный размер массива";
		Sleep(2000);
		exit(0);
	}
	
	cout<<"Номер добавляемой строки: ";
	cin>>p;			
	
	if ((cin.good()!=1)||(p>(sheight+1))||(p<=0))
	{
		cout<<"\n\tНекорректный номер строки";
		Sleep(2000);
		exit(0);
	}

	cout<<endl;
}





int* formFmas(int wfm)	//ФОРМИРОВАНИЕ ОДНОМЕРНОГО МАССИВА	width first massiv
{
	srand( (unsigned)time( NULL ) );	
	int* mas=new int[wfm];
	for(int i=0;i<wfm;i++) mas[i]=rand()%100-50;
	cout<<"\n\tМассив сформирован!\n\n\n\n\n\n";

	return mas;
}




void formSmas(int **mas, int **mas4add, int hsm, int wsm)	//ФОРМИРОВАНИЕ ОДНОМЕРНОГО МАССИВА	height second massiv, width second massiv
{
	srand( (unsigned)time( NULL ) );	
	
	for(int i=0;i<hsm;i++)	mas[i]=new int[wsm];
	for(int i=0;i<(hsm+1);i++)	mas4add[i]=new int[wsm];
	
	for(int i=0;i<hsm;i++)
	for(int j=0;j<wsm;j++)
	mas[i][j]=rand()%100-50;

	cout<<"\n\tМассив сформирован!\n\n\n\n\n\n";

	
}



void printFmas(int *pfm, int wfm)
{
	cout<<"\n";
	for(int i=0;i<wfm;i++)	cout<<pfm[i]<<", ";
	cout<<"\b\b.";
	
	cout<<"\n\n\tМассив напечатан!\n\n\n\n\n\n";

}


void printSmas(int **pfm, int hsm, int wsm)
{
	cout<<"\n";
	
	for(int i=0;i<hsm;i++)
	{
		for(int j=0;j<wsm;j++)
			{
				cout<<pfm[i][j]<<"\t";
				if(j==wsm-1) cout<<"\n";
			}
	}
	
	cout<<"\n\n\tМассив напечатан!\n\n\n\n\n\n";

}
	
void delFevenmas(int *pfm, int &wfm)
{
	int *pfm2=new int[wfm-1];
	int i,chi=-1,k=-1;

	for(i=0; i<wfm; i++)	//находим номер первого четного числа
	{
		if(pfm[i]%2==0)
		{
			chi=i; 
			break;
		}
	}

	for(i=0; i<wfm; i++)	//копируем все кроме него в другой массив
	{
		if(i!=chi)
		{
			k++;
			pfm2[k]=pfm[i];
		}
	}
	
	for(i=0; i<wfm-1; i++)	pfm[i]=pfm2[i];

	if(chi!=-1)	
	{
		cout<<"\n\tПервый четный элемент найден и удален!\n\n\n\n\n\n";
		--wfm;
	}

	else cout<<"\n\tЧетный элемент не найден!\n\n\n\n\n\n";
	
	cout<<"\n\n";
	
	delete [] pfm2;

	
}




void addSstring(int **mas, int **mas4add, int &hsm, int wsm, int p)
{
	int t=-1;

	for(int i=0; i<(hsm+1); i++)
	{
		t++;
		for(int j=0; j<wsm; j++)
		{
			if (i==(p-1)) 
			{
				mas4add[i][j]=rand()%100-50;
				t=i-1;
			}
			
			else
			
			{
				mas4add[i][j]=mas[t][j];	
				
			}
		}
	
	
	
	}
	
	hsm++;
	cout<<"\n\tСтрока добавлена!\n\n\n\n\n\n";
}




void main ()
{
	setlocale(LC_ALL,"Russian");

//_______________________________________________________________________________

	int fwidth=fas();		//first array size
	int *masf=new int[fwidth];
	bool logicmas[5]={1,0,0,1,1};
	bool dvmas1=true;
	
	int k;

	do
	{
		
		k=vardeistv(logicmas, dvmas1);

		switch(k)
			{
				case 0:	masf=formFmas(fwidth); logicmas[0]=0; logicmas[1]=1; logicmas[2]=1; cout<<endl; break;
				case 1:	printFmas(masf,fwidth); break;
				case 2:	delFevenmas(masf, fwidth); logicmas[2]=0; break;
				case 3: logicmas[3]=0; cout<<endl; break;
				case 4:	exit(0); break;
			}
	}
	while(k!=3);

//_______________________________________________________________________________


	int swidth=0, sheight=0, p=0;	// кол-во столбцов и строк соответственно
	sas(swidth, sheight, p);
	
	int **mass=new int*[sheight,swidth];
	int **massadd=new int*[sheight+1,swidth];

	bool dvmas2=false;

	logicmas[0]=1;	//Формировать
	logicmas[1]=0;	//Печатать
	logicmas[2]=0;	//Удалить
	logicmas[3]=0;	//Добавить
	logicmas[4]=1;	//Выход
	
	dvmas1=false;

	do
	{
		
		k=vardeistv(logicmas, dvmas1);

		switch(k)
			{
				case 0: formSmas(mass, massadd, sheight, swidth); logicmas[0]=0; logicmas[1]=1; logicmas[3]=1; cout<<endl; break;
				case 1:	if (dvmas2==true){printSmas(massadd, sheight, swidth);} else {printSmas(mass, sheight, swidth);} break;
				case 3: addSstring(mass, massadd, sheight, swidth, p); cout<<endl; dvmas2=true;	logicmas[3]=0;  break;
				case 4:	exit(0); break;
			}
	}
	while(1>0);
	
}