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

void cnty(empl templ, empl* ttempl)		//��� ������������ ������������2
{
	if (templ.getAge()>=18)
		{
			cout<<"������ \""<<&templ<<"\", ���������� ������ ������� \""<<ttempl<<"\" - ����������������\n";
		}
	else
		{
			cout<<"������ \""<<&templ<<"\", ���������� ������ ������� \""<<ttempl<<"\" - �� ����������������\n";
		}
}

empl pnty(empl * tttempl)		//��� ������������ ������������3 
{
	int ag = tttempl->getAge();
	string n = tttempl->getNm();
	string l = tttempl->getLv();

	empl t4empl("������ "+n, ag*2, "������ "+l);
	return t4empl;
}

void intro(int& count, int tp, bool b1, bool b2)
{
	string tparr[4];
	tparr[0]="������������ �������";
	tparr[1]="������������� �������";
	tparr[2]="������������ ������� �� 3-x ��������";
	tparr[3]="������������� ������� � ������������ ������ �������� ";

	if (b1) cout<<"\nC������� "<<tparr[tp];
	if((!b1)&&(b2)) cout<<"\n\n\n\t__________________________________________\n";
	if (b2) {
				cout<<"\n\t\t_______________\n"; 
				cout<<"\t\t\"��������\" �"<<count<<"\n"; 
				cout<<"\t\t_______________\n\n\n";
				++count;
	}	
	
}

param getvars()
{
    


    cout<<"���?\t\t";
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


    cout<<"�������?\t";
    
    
    
    while(!(cin>>t_p.age))
    
        {
            cin.clear();
            while(cin.get()!='\n');
            cout<<"\t\t������� ������� ������: ";
        }


    cin.clear();						
    while (cin.get() != '\n');


    cout<<"���������?\t";
    
           
	
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

	int iempl=1;	//������� ��������� ��������

	param p;
	
//_____________________________________________________________________________________________________
	// �������� ����������� �������� ������������� � �����������
		
		cout<<"______________________________________________________\n"<<"����������� C �����������";
		intro(iempl, 0, true, true);	// ����� ���������
		p=getvars();					// ��������� ���������� ����� ���������
		empl stat11(p.nm, p.age, p.lv);	// �������� ������� � ����������� ������ � ��������� ���������� ����� ����������� � �����������
		iempl--;
		intro(iempl, 0, false, true);	// ����� ���������
		stat11.shw();					// ������������ ���������� �������
		

	// �������� ����������� �������� ������������� ��� ����������

		cout<<"______________________________________________________\n"<<"����������� ��� ����������";
		intro(iempl, 0, true, true);					// ����� ���������
		p=getvars();							// ��������� ���������� ����� ���������
		empl stat12;							// �������� ������� � ����������� ������
		stat12.setempl(p.nm, p.age, p.lv);		// �������� ���������� ������� ��������
		iempl--;
		intro(iempl, 0, false, true);			// ����� ���������
		stat12.shw();							// ������������ ���������� �������
		
//___________________________________________________________________________________________________
	
	// �������� �������� � ������������ ������ ������������� � �����������

		cout<<"______________________________________________________\n"<<"����������� � �����������";
		intro(iempl, 1, true, true);
		p=getvars();
		empl* din11 = new empl(p.nm, p.age, p.lv);
		iempl--;
		intro(iempl, 1, false, true);			// ����� ���������
		din11->shw();
		delete din11;
		

	// �������� �������� � ������������ ������ ������������� ��� ����������
		
		cout<<"______________________________________________________\n"<<"����������� ��� ����������";
		intro(iempl, 1, true, true);
		p=getvars();
		empl* din12 = new empl;
		(*din12).setempl(p.nm, p.age, p.lv); //din12->setempl(p.nm, p.age, p.lv);
		iempl--;
		intro(iempl, 1, false, true);			// ����� ���������
		din12->shw();
		delete din12;
		
//______________________________________________________________________________
	

//	// �������� ������� �������� � ����������� ������ ������������� � ����������� - ����������?
//empl stat21[] = {	
//	empl("df", 1, "sdf"),// - �������� ������ ("df", 1, "sdf"), ����������� (� stat21[0]), ���������� ������ ("df", 1, "sdf")
//	empl("sdf", 2, "df"),
//	empl("dsf",3,"sdf")
//	};

				
	// �������� ������� �������� � ����������� ������ ������������� ��� ����������

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
	 //�������� ������� �������� � ������������ ������ ������������� ��� ����������	
		
		cout<<"______________________________________________________\n"<<"����������� ��� ����������";
		
		intro(iempl, 3, true, false);

		int cnt;
	
		cout<<"\n������� ����� ��������� � �������: ";

		while(!(cin>>cnt))
	
			{
				cin.clear();
				while((cin.get())!='\n');
				cout<<"���������� ������ ������: ";
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
	
		cout<<"\n������ ������� ������������ �����������: \n";
		cout<<"\t1. ��� ������������� ������� ��� ������������� ������� �������;\n";
		cout<<"\t2. ����� ������ ���������� ������� �� ��������;\n";
		cout<<"\t3. ��� ���������� ���������� ������� ��� ������������� �������� �������;\n\n";
		
		cout<<"\n\t---1-begin-----------begin-1-begin-----------begin-1---\n";
		empl* cop1=new empl("������ ���������", 25, "����������� ��������");	// ��� empl asd2 = empl("sd", 12, "sdf");
		empl res1 = *cop1;														//������������� ��������� �� ������
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

