#include <list>
#include <algorithm>
#include <iterator>
#include <functional>

#include "person.h"
#include "worker.h"
#include "engineer.h"

#include <iostream>
#include <fstream>
#include <string>
#include <stdlib.h>     //��� atoi()
#include <Windows.h>
#include "typeinfo"   //��� ����������� ���� ��� ����� ������

using namespace std;

person*     p;
worker*     wp;
engineer*   ep;

//vector <person*> vp;
//vector <person*>::iterator it;
list <worker> vw;
list <engineer> ve;

list <worker>::iterator itw;
list <engineer>::iterator ite;
fstream f1;


void cwrker();
void cenger();
void shfact();
void clfact();
void save();
void load();
void sort();
void find();
void input(person* p2);
void WritePersons(list<worker> &t_vw, list<engineer> &t_ve, fstream& t_f);
void ReadPersons(list<worker> &t_vw, list<engineer> &t_ve, fstream& t_f);
void WriteW(person& ob, fstream& t_f2);
void WriteE(person& ob, fstream& t_f2);
void Sortt(bool fs);
void Findd(bool fs);

void inquiry();


bool comparre(person& p1, person& p2)
{
    if (strcmp(p1.GetNm(), p2.GetNm())>0)
        return true;
    else
        return false;
}

    struct str_w
    {
        char m_nm[30];
        int m_age;
        bool m_sx;
        int m_wqp;
        
    };

    struct str_e
    {
        char m_nm[30];
        int m_age;
        bool m_sx;
        int m_pl;
        int m_px;
    };



void main()
{

       

    SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

    

    int i=0;

    do
    {
        system("cls");

        cout<<"        <<������� ����>>        \n";
        cout<<"�������� ����� ����\n";
        cout<<"<1>. ������� ������ \"�������\"\n";
        cout<<"<2>. ������� ������ \"�������\"\n";
        cout<<"<3>. ����������� �������\n";
        cout<<"<4>. �������� �������\n";
        cout<<"<5>. ��������� � ����\n";
        cout<<"<6>. ��������� �� �����\n";
        cout<<"<7>. ������������� ������� � ����������\n";
        cout<<"<8>. ��������� �����\n";
        cout<<"<9>. ��������� ������\n";
        cout<<"<10>. ����� � Windows\n";
        cout<<"��������� ����� ����: ";

        cin>>i;

        switch(i)
        {
        case 1:
            {
                system("cls");
                cwrker();
                system("pause");
                break;
            }

        case 2:
            {
                system("cls");
                cenger();
                system("pause");
                break;
            }

        case 3:
            {
                system("cls");
                shfact();
                system("pause");
                break;
            }

        case 4:
            {
                system("cls");
                clfact();
                system("pause");
                break;
            }


        case 5:
            {
                system("cls");
                save();
                system("pause");
                break;
            }


        case 6:
            {
                system("cls");
                load();
                system("pause");
                break;
            }


        case 7:
            {
                system("cls");
                sort();
                system("pause");
                break;
            }


        case 8:
            {
                system("cls");
                find();
                system("pause");
                break;
            }
        
        case 9:
            {
                system("cls");
                inquiry();
                system("pause");
                break; 
            }

        default:
            {
                if(i!=10)
                {
                    cout<<"������� �������� �� 1 �� 9\n";
                    system("pause");
                    break;

                }
            }
        }

    }

    while(i!=10);
        
    system("pause");

}


    void cwrker()
    {
        /*cout<<"�������� ��������\n";*/

        char m_nm[30];
        int m_age=-1;
        bool m_sx=0;
        int m_wqp=-1;

        wp = new worker(m_nm, m_age, m_sx, m_wqp);

        input(wp);
        
        vw.push_back(*wp);


    }

    void cenger()
    {
        /*cout<<"�������� ��������\n";*/

        char m_nm[30];
        int m_age=-1;
        bool m_sx=0;
        int m_pl=-1;
	    int m_px=-1;

        ep = new engineer(m_nm, m_age, m_sx, m_pl, m_px);
        
        input(ep);
        
        ve.push_back(*ep);

    }

    void shfact()
    {
       /* cout<<"�������� �������\n";
        
        int k = vp.size();
        
        if (k==0) cout<<"������� �����\n";
        else
            for(int i=0; i<k; i++) 
                vp[i]->show();*/

        //it = vp.begin();
        //while(it != vp.end())
        //    {
        //        /*person *pp = vp.front();

        //        pp->show();             */   

        //        //vp.front()->show();

        //        it._Mynode()->_Myval->show();
        //        //it._Mynode()->_Myval.show();

        //        it++;                
        //    }

        cout<<"�������:\n";

        itw = vw.begin();

        while(itw!=vw.end())

        {
            itw._Mynode()->_Myval.show();

            itw++;
        }


        cout<<"��������:\n";
        
        ite = ve.begin();

        while(ite!=ve.end())

        {
            ite._Mynode()->_Myval.show();

            ite++;
        }



    }

    void clfact()
    {
        /*cout<<"�������� �������\n";
        
        int k = vp.size();

        if (k==0) cout<<"������� �����\n";
        else
            for(int i=0; i<k; i++) delete vp[i];
        vp.clear(); */

        //vp.clear();

        vw.clear();
        ve.clear();

    }
    
    void save()
    {
        //cout<<"��������� � ����\n";
        WritePersons(vw, ve, f1);
    }

    void load()
    {
        //cout<<"���������� �� �����\n";
        ReadPersons(vw, ve, f1);
    }

    void sort()
    {
        cout<<"�����������\n";
        int choose;
        cout<<"1) STL ����������\n";
        cout<<"2) ����������� c���������\n";

        cin>>choose;

        if(choose==1)
            Sortt(true);
        else
            Sortt(false);
    }


    void find()
    {
        cout<<"�����\n";
        int choose2;
        cout<<"1) ����� STL\n";
        cout<<"2) ����� �����������\n";

        cin>>choose2;

        if(choose2==1)
            Findd(true);
        else
            Findd(false);

    }




    void input(person* p2)
    {
        char t_str[30];
        char t_chr[10];
            
        //cin.clear();
        //while(cin.get()!='\n');

        cout<<"���: ";      
        cin>>t_str;
        p2->SetNm(t_str);
     
        cin.clear();
        while(cin.get()!='\n');

        cout<<"�������: ";  
        cin.getline(t_chr, '\n');
        p2->SetAge(atoi(t_chr));

        cout<<"���: ";      
            
        cin.getline(t_chr, '\n');
        if(*t_chr=='m'||*t_chr=='�'||*t_chr=='1'||*t_chr=='M'||*t_chr=='�')
            p2->SetSx(true);
        else
            p2->SetSx(false);            


        if(typeid(*p2)==typeid(worker))
        {
            worker* t_w = (worker*) p2;
            
            cout<<"% ������� ������� ������: ";
            cin.getline(t_chr, '\n');
            t_w->SetWqp(atoi(t_chr));

        }
    
        if(typeid(*p2)==typeid(engineer))
        {
            engineer* t_e = (engineer*) p2;

            do
            {
                cout<<"������� ��������������� �������� (1-����, 2-��, 3-��): ";
                cin.getline(t_chr, '\n');
            }
            
            while(*t_chr!='1'&&*t_chr!='2'&&*t_chr!='3');
            

            t_e->SetPl(atoi(t_chr));

            cout<<"���������� ������� � ����������: ";
            cin.getline(t_chr, '\n');
            t_e->SetPx(atoi(t_chr));
        }
        
    } 



    

//void WritePersons(vector<person*> &t_vp,fstream& t_f)
void WritePersons(list<worker> &t_vw, list<engineer> &t_ve, fstream& t_f)
{
    t_f.open("my.txt", ios::binary|ios::out); //
    t_f.seekp(0);

    //int n=t_vw.size();
    
     itw = vw.begin();
     
     while(itw != vw.end())
     {
        WriteW((itw._Mynode()->_Myval), t_f);
        itw++;                
     }


     ite = ve.begin();
     
     while(ite != ve.end())
     {
        WriteE((ite._Mynode()->_Myval), t_f);
        ite++;                
     }



   /* for(int i=0; i<n; i++)
    {
        if(typeid(*t_vp[i])==typeid(worker)) 
            WriteW(*t_vp[i], t_f);
        if(typeid(*t_vp[i])==typeid(engineer)) 
            WriteE(*t_vp[i], t_f);
    }*/

    t_f.close();
}


//void ReadPersons(vector<person*> &t_vp,fstream& t_f)
void ReadPersons(list<worker> &t_vw, list<engineer> &t_ve, fstream& t_f)
{
    int k;
    str_e en1;
    str_w wrk1;

    //cout<<t_f.tellp()<<endl;
    t_f.open("my.txt", ios::binary|ios::in|ios::out); //

    //cout<<t_f.tellp()<<endl;
    t_f.clear();

    //cout<<t_f.tellp()<<endl;
    t_f.seekp(0); //!

    //cout<<t_f.tellp()<<endl;
	t_f.read((char*)&k,sizeof(int));
    
    //cout<<t_f.tellp()<<endl;
	if(k==1) 
        t_f.read((char*)&wrk1,sizeof(wrk1));
    
    //cout<<t_f.tellp()<<endl;
	
    if(k==2) 
        t_f.read((char*)&en1,sizeof(en1));
    
    //cout<<t_f.tellp()<<endl;
	
    while(!t_f.eof())
    {
        if(k==1)
            {
                //cout<<t_f.tellp()<<endl;
                wp = new worker(wrk1.m_nm, wrk1.m_age, wrk1.m_sx, wrk1.m_wqp);
                
                //cout<<t_f.tellp()<<endl;
                t_vw.push_back(*wp);
                
            }
        
        if(k==2)
            {
                //cout<<t_f.tellp()<<endl;
                ep = new engineer(en1.m_nm, en1.m_age, en1.m_sx, en1.m_pl, en1.m_px);
                
                //cout<<t_f.tellp()<<endl;
                t_ve.push_back(*ep);
                
            }
		//cout<<t_f.tellp()<<endl;
        t_f.read((char*)&k,sizeof(int));
        
        //cout<<t_f.tellp()<<endl;
		if(k==1) 
        {
            t_f.read((char*)&wrk1,sizeof(wrk1));
            
        }
		
        //cout<<t_f.tellp()<<endl;
        if(k==2) 
        {
            t_f.read((char*)&en1,sizeof(en1));
            
        }       
    }

    t_f.close();
    
    
}



void WriteW(person& ob, fstream& t_f2)
{
    int k=1;    // �������

    char* t_chW;

    str_w s_w;
    //cout<<sizeof(s_w)<<endl;
    //w=dynamic_cast<worker*>(&ob);
    wp = (worker*) &ob;

    t_chW = wp->GetNm();

    for(int i=0; i<30; i++)
        s_w.m_nm[i] = t_chW[i];
    
    s_w.m_age=wp->GetAge();
    s_w.m_sx=wp->GetSx();
    s_w.m_wqp=wp->GetWqp();

    //cout<<sizeof(s_w)<<endl;

    //cout<<t_f2.tellp()<<endl;
    t_f2.write((char*)&k, sizeof(int));

    //cout<<t_f2.tellp()<<endl;
    t_f2.write((char*)&s_w, sizeof(s_w));
    
    //cout<<t_f2.tellp()<<endl;

}


void WriteE(person& ob, fstream& t_f2)
{
    int k=2;    // �������
    
    char* t_chE;
    
    str_e s_e;
    //e=dynamic_cast<engineer*>(&ob);
    ep = (engineer*) &ob;


    t_chE = ep->GetNm();

    for(int i=0; i<30; i++)

        s_e.m_nm[i] = t_chE[i];
    
    s_e.m_age=ep->GetAge();
    s_e.m_sx=ep->GetSx();
    s_e.m_pl=ep->GetPl();
    s_e.m_px=ep->GetPx();

    //cout<<t_f2.tellp()<<endl;
    t_f2.write((char*)&k, sizeof(int));

    //cout<<t_f2.tellp()<<endl;
    t_f2.write((char*)&s_e, sizeof(s_e));

    //cout<<t_f2.tellp()<<endl;
}

void Sortt(bool fs)
{
    if(fs)
    {
        cout<<"���������� STL ����������:\n";

        vw.sort();
        ve.sort();
        shfact();


    }
    else
    {
        cout<<"���������� ����������� ����������:\n";

       /* sort(vw.begin(), vw.end(), srtw());
        sort(ve.begin(), ve.end(), srte());*/
        
        int nw = vw.size();
        worker cwrk[100];
        itw = vw.begin();

        for (int i=0; i<nw; i++)
        {
            cwrk[i] = itw._Mynode()->_Myval;

            itw++;
        }

        vw.clear();

        bool bw=true;

        while (bw)
        {
            bw = false;

            for(int i=0; i<nw-1; i++)
            {
                if (comparre(cwrk[i],cwrk[i+1]))
                {
                    bw = true;
                    swap(cwrk[i], cwrk[i+1]);

                }
            }

        }


        for (int i=0; i<nw; i++)
            vw.push_back(cwrk[i]);
        

        int ne = ve.size();
        engineer ceng[100];
        ite = ve.begin();

        for (int i=0; i<ne; i++)
        {
            ceng[i] = ite._Mynode()->_Myval;

            ite++;
        }

        ve.clear();

        bool be=true;

        while (be)
        {
            be = false;

            for(int i=0; i<ne-1; i++)
            {
                if (comparre(ceng[i],ceng[i+1]))
                {
                    be = true;
                    swap(ceng[i], ceng[i+1]);

                }
            }

        }


        for (int i=0; i<ne; i++)
            ve.push_back(ceng[i]);

        shfact();

    }
}


void Findd(bool fs)
{
    if(fs)
    {
        cout<<"���������� STL-������:\n";

        cout<<"���: ";

        char chre [30];
        cin>>chre;

        worker t_5w = worker(chre, 0, false, 0);


        itw = find(vw.begin(), vw.end(), t_5w);
    

        if (itw==vw.end())
        {
            cout<<"����� ������� �� ������� ��������\n";
        }

        else
            itw._Mynode()->_Myval.show();


        engineer t_5e = engineer(chre, 0, false, 0, 0);

        ite = find(ve.begin(), ve.end(), t_5e);
    
        if (ite==ve.end())
        {
            cout<<"����� ��������� �� ������� ��������\n";
        }

        else
            ite._Mynode()->_Myval.show();
    }
    else
    {
        cout<<"���������� ������������ ������:\n";

        cout<<"���: ";

        char chre [30];
        cin>>chre;

        
        
        itw = vw.begin();
        while(itw!=vw.end())
        {
        
            if(strcmp(itw._Mynode()->_Myval.GetNm(), chre)==0)
            {
                itw._Mynode()->_Myval.show();
                break;
            }
        
            itw++;
        }

        itw = vw.begin();
        while(itw!=vw.end())
        {
        
            if(strcmp(itw._Mynode()->_Myval.GetNm(), chre)==0)
            {
                itw._Mynode()->_Myval.show();
                break;
            }
        
            itw++;
        }



        ite = ve.begin();
        while(ite!=ve.end())
        {
        
            if(strcmp(ite._Mynode()->_Myval.GetNm(), chre)==0)
            {
                ite._Mynode()->_Myval.show();
                break;
            }
        
            ite++;
        }


    }
}



void inquiry()
{
    cout<<"1) ������� ����� ���� �������\n";
    cout<<"2) ������� ����� ���� ���������\n";

    int chose;
    cin>>chose;

    if (chose==1)
    {
        itw = vw.begin();

        while(itw!=vw.end())
        {
            itw._Mynode()->_Myval.showname();
            itw++;
        }
    }
    else
    {
        ite = ve.begin();

        while(ite!=ve.end())
        {
            ite._Mynode()->_Myval.showname();
            ite++;
        }
}
}
