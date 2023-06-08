# include <iostream>
# include <Windows.h>
# include <time.h>
using namespace std;


 int vardeistv(bool DopSpis[5], bool &dvmas)	//������� ��������, ���������� ������
{	/*	1. ������������ �������
		2. ������ �������
		3. �������� �� �������
		4. ���������� � ������
		5. �����
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
						case 0: cout<<"������������ �������\n"; break;
						case 1: cout<<"������ �������\n"; break;
						case 2: cout<<"�������� �� ������� ������� ������� ��������\n"; break;
						case 3:	if(dvmas==true)	cout<<"�������� � ��������� ��������\n";	else	cout<<"���������� ������ � ������\n"; break;
						case 4: cout<<"�����\n"; break;
					}
				j[i]=k;	i++;
			}
		}

	cout<<"\n�������� ����� ��������: ";	int d=0;	cin>>d;
	
	if ((d<=0)||(d>=6))
	{
		cout<<"\n\t������ ����������� �����";
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
			cout<<"\n\t������ ����������� �����";
			Sleep(2000);
			exit(0);
		}
}




int fas()
{
	cout<<"������� ������ ����������� �������: ";
	int r1=0;	cin>>r1;	cout<<"\n\n\n";
	if (cin.good()!=1)
	{
		cout<<"\n\t������������ ������ �������";
		Sleep(2000);
		exit(0);
	}
	return r1;
}



void sas(int &swidth, int &sheight, int &p)
{
	cout<<"������� ������� ���������� �������\n���������� �����: ";
	cin>>sheight;
	
	if (cin.good()!=1)
	{
		cout<<"\n\t������������ ������ �������";
		Sleep(2000);
		exit(0);
	}
	
	cout<<"���������� ��������: ";
	cin>>swidth;	
	
	if (cin.good()!=1)
	{
		cout<<"\n\t������������ ������ �������";
		Sleep(2000);
		exit(0);
	}
	
	cout<<"����� ����������� ������: ";
	cin>>p;			
	
	if ((cin.good()!=1)||(p>(sheight+1))||(p<=0))
	{
		cout<<"\n\t������������ ����� ������";
		Sleep(2000);
		exit(0);
	}

	cout<<endl;
}





int* formFmas(int wfm)	//������������ ����������� �������	width first massiv
{
	srand( (unsigned)time( NULL ) );	
	int* mas=new int[wfm];
	for(int i=0;i<wfm;i++) mas[i]=rand()%100-50;
	cout<<"\n\t������ �����������!\n\n\n\n\n\n";

	return mas;
}




void formSmas(int **mas, int **mas4add, int hsm, int wsm)	//������������ ����������� �������	height second massiv, width second massiv
{
	srand( (unsigned)time( NULL ) );	
	
	for(int i=0;i<hsm;i++)	mas[i]=new int[wsm];
	for(int i=0;i<(hsm+1);i++)	mas4add[i]=new int[wsm];
	
	for(int i=0;i<hsm;i++)
	for(int j=0;j<wsm;j++)
	mas[i][j]=rand()%100-50;

	cout<<"\n\t������ �����������!\n\n\n\n\n\n";

	
}



void printFmas(int *pfm, int wfm)
{
	cout<<"\n";
	for(int i=0;i<wfm;i++)	cout<<pfm[i]<<", ";
	cout<<"\b\b.";
	
	cout<<"\n\n\t������ ���������!\n\n\n\n\n\n";

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
	
	cout<<"\n\n\t������ ���������!\n\n\n\n\n\n";

}
	
void delFevenmas(int *pfm, int &wfm)
{
	int *pfm2=new int[wfm-1];
	int i,chi=-1,k=-1;

	for(i=0; i<wfm; i++)	//������� ����� ������� ������� �����
	{
		if(pfm[i]%2==0)
		{
			chi=i; 
			break;
		}
	}

	for(i=0; i<wfm; i++)	//�������� ��� ����� ���� � ������ ������
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
		cout<<"\n\t������ ������ ������� ������ � ������!\n\n\n\n\n\n";
		--wfm;
	}

	else cout<<"\n\t������ ������� �� ������!\n\n\n\n\n\n";
	
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
	cout<<"\n\t������ ���������!\n\n\n\n\n\n";
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


	int swidth=0, sheight=0, p=0;	// ���-�� �������� � ����� ��������������
	sas(swidth, sheight, p);
	
	int **mass=new int*[sheight,swidth];
	int **massadd=new int*[sheight+1,swidth];

	bool dvmas2=false;

	logicmas[0]=1;	//�����������
	logicmas[1]=0;	//��������
	logicmas[2]=0;	//�������
	logicmas[3]=0;	//��������
	logicmas[4]=1;	//�����
	
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