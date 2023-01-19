#include "gr_TObject.h"
#include "item.h"
#include "gr_podr.h"
#include "gr_org.h"
#include "gr_tseh.h"
#include "gr_nve.h"
#include "cls_person.h"
#include "cls_employer.h"
#include "cls_worker.h"
#include "cls_engineer.h"
#include "typeinfo.h"
#include <windows.h>
#include <iostream>

using namespace std;

int iter2=0;


void z1(gr_TObject* obj, int* pr)                        // функция для итератора
{
  
  string m_pfnm[] = {"машиностроение", "строительство", "добыча полезных ископаемых", "металлургия", "приборостроение"};
  //cls_worker* wrk;
  //cls_engineer* eng;

  if (typeid(*obj)==typeid(cls_worker))
  {
    /*cout<<"объект "<<obj<<" - рабочий\n";*/

      cls_worker* wrk = (cls_worker*) obj;

      if (wrk->getpfnm()==m_pfnm[*pr-1])
      {
          cout<<wrk->getnm()<<endl;
      }

  }
  else
  {
    /*cout<<"объект "<<obj<<" - инженер\n";*/
  
    cls_engineer* eng = (cls_engineer*) obj;

      if (eng->getpfnm()==m_pfnm[*pr-1])
      {
          cout<<eng->getnm()<<endl;
      }

  }
}

int z2_t(int org_n)
{
    switch(org_n)
    {
    case 1:
        {
            return 2;
            break;
        }
    case 2:
        {
            return 4;
            break;
        }
    case 3:
        {
            return 1;
            break;
        }
    }
}

void z2(gr_TObject* obj, int* pr)
{
    if (typeid(*obj)==typeid(cls_engineer))
    {
        iter2++;
    }
}

void main()
{

	/*план
		организовать insert объектов со связков item`ов из пула массива item
		реализовать корректое заполнение объектов с человеко-понятными полями
		реализовать итераторы
		реализовать деструкторы
	*/

	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	
	/* создадим массивы item и массивы объектов и
		затем через метод gr_org::insert() закрепим за организацией:
			1 организация:
						1 цех(4 рабочих),							-4
						2 направления (по 2 инженеров в каждом)				-4
			2 организация:
						3 цеха(по 2 рабочих в каждом),				-6
						4 напраления (по 3 инженеров в каждом)				-12
			3 организация:
						3 цеха (по 4 рабочих в каждом),				-12
						1 направление (2 инженеров в каждом)				-2
	*/

	// item
		item 
	 		// it_tseh[7],								// 7 цехов	
			// it_nve[7],								// 7 направлений
			// it_wrk[1*4+3*2+3*4],						// 22 рабочих
			// it_eng[2*2+4*3+1*2];						// 18 инженеров
		it_m[7*2+(1*4+3*2+3*4)+(2*2+4*3+1*2)];			// единый пул item`ов; 54 эл-в, хранящихся статично (нет соответствия индекса item-массива и объектов)

	// объекты
		gr_org org_org[3];			// массив объектов организация
		gr_tseh tseh_tseh[7];		// массив объектов цех (рабочие)
		gr_nve nve_nve[7];			// массив объектов направление (инженеры)

		cls_worker wrk_wrk[22];		// массив объектов рабочий
		cls_engineer en_en[18];		// массив объектов инженер

	//////////////////////////////////////////////// связка item и объектов

	//
	//	// цеха и направления
	//			for(int i=0; i<7; i++)
	//				{
	//					it_tseh[i].next=NULL;
	//					it_tseh[i].TObj=&tseh_tseh[i];

	//					it_nve[i].next=NULL;
	//					it_nve[i].TObj=&nve_nve[i];
	//				}

	//	// рабочие
	//			for(int i=0; i<22; i++)
	//				{
	//					it_wrk[i].next=NULL;
	//					it_wrk[i].TObj=&wrk_wrk[i];
	//				}
	//	// инженеры
	//			for(int i=0; i<18; i++)
	//				{
	//					it_eng[i].next=NULL;
	//					it_eng[i].TObj=&en_en[i];
	//				}

	//////////////////////////////////////////////// связка item и объектов

	

	// вставить через организацию как цеха и направления, так и рабочих и инженеров
	// для этого необходимо вручную задать необходимое максимальное количество для каждого из цехов и направлений.
	

	/* создадим массивы item и массивы объектов и
		затем через метод gr_org::insert() закрепим за организацией:
			1 организация:
						1 цех(4 рабочих),							-4
						2 направления (по 2 инженеров в каждом)				-4
			2 организация:
						3 цеха(по 2 рабочих в каждом),				-6
						4 напраления (по 3 инженеров в каждом)				-12
			3 организация:
						3 цеха (по 4 рабочих в каждом),				-12
						1 направление (2 инженеров в каждом)				-2
	*/

		// добавили в (1) организацию 1 цех, 2 направления
			org_org[0].insert(&tseh_tseh[0], it_m);		
			org_org[0].insert(&nve_nve[0], it_m);
			org_org[0].insert(&nve_nve[1], it_m);
		
		// добавили в (2) организацию 3 цеха, 4 направления
			org_org[1].insert(&tseh_tseh[1], it_m);
			org_org[1].insert(&tseh_tseh[2], it_m);
			org_org[1].insert(&tseh_tseh[3], it_m);
			org_org[1].insert(&nve_nve[2], it_m);			
			org_org[1].insert(&nve_nve[3], it_m);
			org_org[1].insert(&nve_nve[4], it_m);
			org_org[1].insert(&nve_nve[5], it_m);
		
		// добавили в (3) оргаинзацию 3 цеха, 1 напраление
			org_org[2].insert(&tseh_tseh[4], it_m);
			org_org[2].insert(&tseh_tseh[5], it_m);
			org_org[2].insert(&tseh_tseh[6], it_m);
			org_org[2].insert(&nve_nve[6], it_m);


		// цеха - рабочие:
			//	1 цех - 4 рабочих
			//	3 цеха - по 2 рабочих
			//	3 цеха - по 4 рабочих
			for (int i=0; i<4; i++)							tseh_tseh[0].insert(&wrk_wrk[i], it_m);
			for (int i=4; i<(4+2); i++)						tseh_tseh[1].insert(&wrk_wrk[i], it_m);
			for (int i=(4+2); i<(4+2*2); i++)				tseh_tseh[2].insert(&wrk_wrk[i], it_m);
			for (int i=(4+2*2); i<(4+2*3); i++)				tseh_tseh[3].insert(&wrk_wrk[i], it_m);
			for (int i=(4+2*3); i<(4+2*3+4); i++)			tseh_tseh[4].insert(&wrk_wrk[i], it_m);
			for (int i=(4+2*3+4); i<(4+2*3+4*2); i++)		tseh_tseh[5].insert(&wrk_wrk[i], it_m);
			for (int i=(4+2*3+4*2); i<(4+2*3+4*3); i++)		tseh_tseh[6].insert(&wrk_wrk[i], it_m);

		// направления - инженеры:
			// 2 направления - по 2 инженеров
			// 4 направления - по 3 инженеров
			// 1 направление - по 2 инженеров
			for (int i=0; i<2; i++)							nve_nve[0].insert(&en_en[i], it_m);
			for (int i=(2); i<(2*2); i++)					nve_nve[1].insert(&en_en[i], it_m);
			for (int i=(2*2); i<(2*2+3); i++)				nve_nve[2].insert(&en_en[i], it_m);
			for (int i=(2*2+3); i<(2*2+3*2); i++)			nve_nve[3].insert(&en_en[i], it_m);
			for (int i=(2*2+3*2); i<(2*2+3*3); i++)			nve_nve[4].insert(&en_en[i], it_m);
			for (int i=(2*2+3*3); i<(2*2+3*4); i++)			nve_nve[5].insert(&en_en[i], it_m);
			for (int i=(2*2+3*4); i<(2*2+3*4+2); i++)		nve_nve[6].insert(&en_en[i], it_m);

	// 1) имена служащих (и рабочих и инженеров) заданной профессии=области (cls_employer::pfnm)
	// 2) количество инженеров в заданом направлении

   
    in1:

    int act;
    
    cout<<"Выберите действие:\n";
    cout<<"\t0) Выход из программы;\n";
    cout<<"\t1) Показ всех элементов (все организации);\n";
    cout<<"\t2) Показ конкретной организации;\n";
    cout<<"\t3) 1-й запрос: имена служащих (и рабочих и инженеров) заданной области;\n";
    cout<<"\t4) 2-й запрос: количество инженеров в заданом направлении;";
    cout<<"\nВыбран пункт № ";

    while(!(cin>>act)||(act<0)||(act>4))
    {
        cin.clear();
        while(cin.get()!='\n');
        cout<<"\t\tВведите номер корректно: ";
    }

    switch(act)
    {
        case 0:
            {
                //cout<<"Производим выход из программы (дестукторы)\n";

                //cout<<"Деструкторы\n";
                for(int i=0; i<3; i++)
                    org_org[i].~gr_org();

                exit(0);

                //cout<<"exit(0)\n";

                break;
            }


        case 1:
            {
                //cout<<"Покаваем в цикле org_org[i].show() и переходим к выбору пунктов\n";
                for(int i=0; i<3; i++) 
                    //cout<<"Печать org_org["<<i<<"].show()\n";
                    org_org[i].show();    
                goto in1;                
                
                break;
            }

        case 2:
            {
                //cout<<"Выдаем запрос на вывод конкретной организации и выводим ее через org_org[k].show()\n и задаем вопрос о повторе вывода. Иначе - переход к главному меню\n";

                int i56;
                
                cout<<"Вводите номер организации (1-3): ";
                while(!(cin>>i56)||(i56<1)||(i56>3))
                {
                        cin.clear();
                        while(cin.get()!='\n');
                        cout<<"\t\tВведите номер корректно: ";
                }

                in2:

                //cout<<"Печать org_org["<<i56<<"].show()\n";

                org_org[i56-1].show();

                cout<<"Еще номер (Н/N - выход в гл. меню): ";//из N(78)/n(110)/H(205)/н(237)
                
                char c56;
                cin>>c56;
                while(!((c56==(char) 49)||(c56==(char) 50)||(c56==(char) 51)||(c56==(char) 78)||(c56==(char) 110)||(c56==(char) 205)||(c56==(char) 237)))
                {
                    cin.clear();
                    while(cin.get()!='\n');
                    cout<<"\t\tВведите операцию корректно: ";
                    cin>>c56;
                }

                switch(c56)
                {
                    case (char) 49:
                        {
                            i56 = 1;
                            goto in2;
                            break;
                        }

                    case (char) 50:
                        {
                            i56 = 2;
                            goto in2;
                            break;
                        }

                    case (char) 51:
                        {
                            i56 = 3;
                            goto in2;
                            break;
                        }

                    case (char) 78:
                        {
                            goto in1;
                            break;
                        }

                    case (char) 110:
                        {
                            goto in1;
                            break;
                        }

                    case (char) 205:
                        {
                            goto in1;
                            break;
                        }

                    case (char) 237:
                        {
                            goto in1;
                            break;
                        }

                }

                break;
            }

        case 3:
            {
                //cout<<"Запрос на выбор организации, выполнение первого итератора, запрос на повтор текущего пункта. Иначе - гл. меню\n";
                int i57;
                
                cout<<"Вводите номер организации (1-3): ";
                while(!(cin>>i57)||(i57<1)||(i57>3))
                {
                        cin.clear();
                        while(cin.get()!='\n');
                        cout<<"\t\tВведите номер корректно: ";
                }

                in3:

                cout<<"Введите номер используемых профессий (1-5): \n";

                string m_pfnm[] = {"машиностроение", "строительство", "добыча полезных ископаемых", "металлургия", "приборостроение"};

                for(int i=0; i<5; i++)
                    cout<<i+1<<")\t"<<m_pfnm[i]<<endl;

                int prof;

                    while(!(cin>>prof))
                   
                    {
                        cin.clear();
                        while(cin.get()!='\n');
                        cout<<"\t\tВведите корректное число: ";
                    }


	            cout<<m_pfnm[prof-1]<<" - выбранная область\n\nРезультаты поиска:\n";
                              

                //cout<<"Печать org_org["<<i57<<"].iter(z1, "<<prof<<")\n";

                fp iter_1 = z1;

                org_org[i57-1].iter(z1, &prof);

                cout<<"Еще номер организации (Н/N - выход в гл. меню): ";//из N(78)/n(110)/H(205)/н(237)
                
                char c57;
                cin>>c57;
                while(!((c57==(char) 49)||(c57==(char) 50)||(c57==(char) 51)||(c57==(char) 78)||(c57==(char) 110)||(c57==(char) 205)||(c57==(char) 237)))
                {
                    cin.clear();
                    while(cin.get()!='\n');
                    cout<<"\t\tВведите операцию корректно: ";
                    cin>>c57;
                }

                switch(c57)
                {
                    case (char) 49:
                        {
                            i57 = 1;
                            goto in3;
                            break;
                        }

                    case (char) 50:
                        {
                            i57 = 2;
                            goto in3;
                            break;
                        }

                    case (char) 51:
                        {
                            i57 = 3;
                            goto in3;
                            break;
                        }

                    case (char) 78:
                        {
                            goto in1;
                            break;
                        }

                    case (char) 110:
                        {
                            goto in1;
                            break;
                        }

                    case (char) 205:
                        {
                            goto in1;
                            break;
                        }

                    case (char) 237:
                        {
                            goto in1;
                            break;
                        }

                }
                break;
            }


        case 4:
            {
                //cout<<"Запрос на выбор организации, выполнение второго итератора, запрос на повтор текущего пункта. Иначе - гл. меню\n";
               
                int i58;
                
                cout<<"Вводите номер организации (1-3): ";
                while(!(cin>>i58)||(i58<1)||(i58>3))
                {
                        cin.clear();
                        while(cin.get()!='\n');
                        cout<<"\t\tВведите номер корректно: ";
                }

                in4:

                cout<<"Введите номер направления в "<<i58<<"-й организации из доступных (1-"<<z2_t(i58)<<"): ";

                int prof2;

                while(!(cin>>prof2)||(prof2<1)||(prof2>z2_t(i58)))
                   
                    {
                        cin.clear();
                        while(cin.get()!='\n');
                        cout<<"\t\tВведите корректное число: ";
                    }


	            cout<<prof2<<" - выбранное направление в "<<i58<<"-й организации\n\nРезультаты поиска:\n";
                              

                //cout<<"Печать org_org["<<i58<<"].iter(z1, "<<prof2<<")\n";

                fp iter_1 = z2;
                
                int cntit2=1;
                
                item* t_it2 = org_org[i58-1].fO_lifo;

                while(prof2!=cntit2)
                {
                    t_it2=t_it2->next;
                    cntit2++;
                }

                if (typeid(*(t_it2->TObj))==typeid(gr_nve))
                {
                    gr_nve* nve_it2 = (gr_nve*) t_it2->TObj;

                    nve_it2->iter(z2, &prof2);

                }

                cout<<iter2<<" инженера в заданном направлении\n";
                iter2=0;



                cout<<"Еще номер организации (Н/N - выход в гл. меню): ";//из N(78)/n(110)/H(205)/н(237)
                
                char c58;
                cin>>c58;
                while(!((c58==(char) 49)||(c58==(char) 50)||(c58==(char) 51)||(c58==(char) 78)||(c58==(char) 110)||(c58==(char) 205)||(c58==(char) 237)))
                {
                    cin.clear();
                    while(cin.get()!='\n');
                    cout<<"\t\tВведите операцию корректно: ";
                    cin>>c58;
                }

                switch(c58)
                {
                    case (char) 49:
                        {
                            i58 = 1;
                            goto in4;
                            break;
                        }

                    case (char) 50:
                        {
                            i58 = 2;
                            goto in4;
                            break;
                        }

                    case (char) 51:
                        {
                            i58 = 3;
                            goto in4;
                            break;
                        }

                    case (char) 78:
                        {
                            goto in1;
                            break;
                        }

                    case (char) 110:
                        {
                            goto in1;
                            break;
                        }

                    case (char) 205:
                        {
                            goto in1;
                            break;
                        }

                    case (char) 237:
                        {
                            goto in1;
                            break;
                        }

                }
                
                break;
            }
    }


	system("pause");
}