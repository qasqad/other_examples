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


void z1(gr_TObject* obj, int* pr)                        // ������� ��� ���������
{
  
  string m_pfnm[] = {"��������������", "�������������", "������ �������� ����������", "�����������", "���������������"};
  //cls_worker* wrk;
  //cls_engineer* eng;

  if (typeid(*obj)==typeid(cls_worker))
  {
    /*cout<<"������ "<<obj<<" - �������\n";*/

      cls_worker* wrk = (cls_worker*) obj;

      if (wrk->getpfnm()==m_pfnm[*pr-1])
      {
          cout<<wrk->getnm()<<endl;
      }

  }
  else
  {
    /*cout<<"������ "<<obj<<" - �������\n";*/
  
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

	/*����
		������������ insert �������� �� ������� item`�� �� ���� ������� item
		����������� ��������� ���������� �������� � ��������-��������� ������
		����������� ���������
		����������� �����������
	*/

	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	
	/* �������� ������� item � ������� �������� �
		����� ����� ����� gr_org::insert() �������� �� ������������:
			1 �����������:
						1 ���(4 �������),							-4
						2 ����������� (�� 2 ��������� � ������)				-4
			2 �����������:
						3 ����(�� 2 ������� � ������),				-6
						4 ���������� (�� 3 ��������� � ������)				-12
			3 �����������:
						3 ���� (�� 4 ������� � ������),				-12
						1 ����������� (2 ��������� � ������)				-2
	*/

	// item
		item 
	 		// it_tseh[7],								// 7 �����	
			// it_nve[7],								// 7 �����������
			// it_wrk[1*4+3*2+3*4],						// 22 �������
			// it_eng[2*2+4*3+1*2];						// 18 ���������
		it_m[7*2+(1*4+3*2+3*4)+(2*2+4*3+1*2)];			// ������ ��� item`��; 54 ��-�, ���������� �������� (��� ������������ ������� item-������� � ��������)

	// �������
		gr_org org_org[3];			// ������ �������� �����������
		gr_tseh tseh_tseh[7];		// ������ �������� ��� (�������)
		gr_nve nve_nve[7];			// ������ �������� ����������� (��������)

		cls_worker wrk_wrk[22];		// ������ �������� �������
		cls_engineer en_en[18];		// ������ �������� �������

	//////////////////////////////////////////////// ������ item � ��������

	//
	//	// ���� � �����������
	//			for(int i=0; i<7; i++)
	//				{
	//					it_tseh[i].next=NULL;
	//					it_tseh[i].TObj=&tseh_tseh[i];

	//					it_nve[i].next=NULL;
	//					it_nve[i].TObj=&nve_nve[i];
	//				}

	//	// �������
	//			for(int i=0; i<22; i++)
	//				{
	//					it_wrk[i].next=NULL;
	//					it_wrk[i].TObj=&wrk_wrk[i];
	//				}
	//	// ��������
	//			for(int i=0; i<18; i++)
	//				{
	//					it_eng[i].next=NULL;
	//					it_eng[i].TObj=&en_en[i];
	//				}

	//////////////////////////////////////////////// ������ item � ��������

	

	// �������� ����� ����������� ��� ���� � �����������, ��� � ������� � ���������
	// ��� ����� ���������� ������� ������ ����������� ������������ ���������� ��� ������� �� ����� � �����������.
	

	/* �������� ������� item � ������� �������� �
		����� ����� ����� gr_org::insert() �������� �� ������������:
			1 �����������:
						1 ���(4 �������),							-4
						2 ����������� (�� 2 ��������� � ������)				-4
			2 �����������:
						3 ����(�� 2 ������� � ������),				-6
						4 ���������� (�� 3 ��������� � ������)				-12
			3 �����������:
						3 ���� (�� 4 ������� � ������),				-12
						1 ����������� (2 ��������� � ������)				-2
	*/

		// �������� � (1) ����������� 1 ���, 2 �����������
			org_org[0].insert(&tseh_tseh[0], it_m);		
			org_org[0].insert(&nve_nve[0], it_m);
			org_org[0].insert(&nve_nve[1], it_m);
		
		// �������� � (2) ����������� 3 ����, 4 �����������
			org_org[1].insert(&tseh_tseh[1], it_m);
			org_org[1].insert(&tseh_tseh[2], it_m);
			org_org[1].insert(&tseh_tseh[3], it_m);
			org_org[1].insert(&nve_nve[2], it_m);			
			org_org[1].insert(&nve_nve[3], it_m);
			org_org[1].insert(&nve_nve[4], it_m);
			org_org[1].insert(&nve_nve[5], it_m);
		
		// �������� � (3) ����������� 3 ����, 1 ����������
			org_org[2].insert(&tseh_tseh[4], it_m);
			org_org[2].insert(&tseh_tseh[5], it_m);
			org_org[2].insert(&tseh_tseh[6], it_m);
			org_org[2].insert(&nve_nve[6], it_m);


		// ���� - �������:
			//	1 ��� - 4 �������
			//	3 ���� - �� 2 �������
			//	3 ���� - �� 4 �������
			for (int i=0; i<4; i++)							tseh_tseh[0].insert(&wrk_wrk[i], it_m);
			for (int i=4; i<(4+2); i++)						tseh_tseh[1].insert(&wrk_wrk[i], it_m);
			for (int i=(4+2); i<(4+2*2); i++)				tseh_tseh[2].insert(&wrk_wrk[i], it_m);
			for (int i=(4+2*2); i<(4+2*3); i++)				tseh_tseh[3].insert(&wrk_wrk[i], it_m);
			for (int i=(4+2*3); i<(4+2*3+4); i++)			tseh_tseh[4].insert(&wrk_wrk[i], it_m);
			for (int i=(4+2*3+4); i<(4+2*3+4*2); i++)		tseh_tseh[5].insert(&wrk_wrk[i], it_m);
			for (int i=(4+2*3+4*2); i<(4+2*3+4*3); i++)		tseh_tseh[6].insert(&wrk_wrk[i], it_m);

		// ����������� - ��������:
			// 2 ����������� - �� 2 ���������
			// 4 ����������� - �� 3 ���������
			// 1 ����������� - �� 2 ���������
			for (int i=0; i<2; i++)							nve_nve[0].insert(&en_en[i], it_m);
			for (int i=(2); i<(2*2); i++)					nve_nve[1].insert(&en_en[i], it_m);
			for (int i=(2*2); i<(2*2+3); i++)				nve_nve[2].insert(&en_en[i], it_m);
			for (int i=(2*2+3); i<(2*2+3*2); i++)			nve_nve[3].insert(&en_en[i], it_m);
			for (int i=(2*2+3*2); i<(2*2+3*3); i++)			nve_nve[4].insert(&en_en[i], it_m);
			for (int i=(2*2+3*3); i<(2*2+3*4); i++)			nve_nve[5].insert(&en_en[i], it_m);
			for (int i=(2*2+3*4); i<(2*2+3*4+2); i++)		nve_nve[6].insert(&en_en[i], it_m);

	// 1) ����� �������� (� ������� � ���������) �������� ���������=������� (cls_employer::pfnm)
	// 2) ���������� ��������� � ������� �����������

   
    in1:

    int act;
    
    cout<<"�������� ��������:\n";
    cout<<"\t0) ����� �� ���������;\n";
    cout<<"\t1) ����� ���� ��������� (��� �����������);\n";
    cout<<"\t2) ����� ���������� �����������;\n";
    cout<<"\t3) 1-� ������: ����� �������� (� ������� � ���������) �������� �������;\n";
    cout<<"\t4) 2-� ������: ���������� ��������� � ������� �����������;";
    cout<<"\n������ ����� � ";

    while(!(cin>>act)||(act<0)||(act>4))
    {
        cin.clear();
        while(cin.get()!='\n');
        cout<<"\t\t������� ����� ���������: ";
    }

    switch(act)
    {
        case 0:
            {
                //cout<<"���������� ����� �� ��������� (����������)\n";

                //cout<<"�����������\n";
                for(int i=0; i<3; i++)
                    org_org[i].~gr_org();

                exit(0);

                //cout<<"exit(0)\n";

                break;
            }


        case 1:
            {
                //cout<<"�������� � ����� org_org[i].show() � ��������� � ������ �������\n";
                for(int i=0; i<3; i++) 
                    //cout<<"������ org_org["<<i<<"].show()\n";
                    org_org[i].show();    
                goto in1;                
                
                break;
            }

        case 2:
            {
                //cout<<"������ ������ �� ����� ���������� ����������� � ������� �� ����� org_org[k].show()\n � ������ ������ � ������� ������. ����� - ������� � �������� ����\n";

                int i56;
                
                cout<<"������� ����� ����������� (1-3): ";
                while(!(cin>>i56)||(i56<1)||(i56>3))
                {
                        cin.clear();
                        while(cin.get()!='\n');
                        cout<<"\t\t������� ����� ���������: ";
                }

                in2:

                //cout<<"������ org_org["<<i56<<"].show()\n";

                org_org[i56-1].show();

                cout<<"��� ����� (�/N - ����� � ��. ����): ";//�� N(78)/n(110)/H(205)/�(237)
                
                char c56;
                cin>>c56;
                while(!((c56==(char) 49)||(c56==(char) 50)||(c56==(char) 51)||(c56==(char) 78)||(c56==(char) 110)||(c56==(char) 205)||(c56==(char) 237)))
                {
                    cin.clear();
                    while(cin.get()!='\n');
                    cout<<"\t\t������� �������� ���������: ";
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
                //cout<<"������ �� ����� �����������, ���������� ������� ���������, ������ �� ������ �������� ������. ����� - ��. ����\n";
                int i57;
                
                cout<<"������� ����� ����������� (1-3): ";
                while(!(cin>>i57)||(i57<1)||(i57>3))
                {
                        cin.clear();
                        while(cin.get()!='\n');
                        cout<<"\t\t������� ����� ���������: ";
                }

                in3:

                cout<<"������� ����� ������������ ��������� (1-5): \n";

                string m_pfnm[] = {"��������������", "�������������", "������ �������� ����������", "�����������", "���������������"};

                for(int i=0; i<5; i++)
                    cout<<i+1<<")\t"<<m_pfnm[i]<<endl;

                int prof;

                    while(!(cin>>prof))
                   
                    {
                        cin.clear();
                        while(cin.get()!='\n');
                        cout<<"\t\t������� ���������� �����: ";
                    }


	            cout<<m_pfnm[prof-1]<<" - ��������� �������\n\n���������� ������:\n";
                              

                //cout<<"������ org_org["<<i57<<"].iter(z1, "<<prof<<")\n";

                fp iter_1 = z1;

                org_org[i57-1].iter(z1, &prof);

                cout<<"��� ����� ����������� (�/N - ����� � ��. ����): ";//�� N(78)/n(110)/H(205)/�(237)
                
                char c57;
                cin>>c57;
                while(!((c57==(char) 49)||(c57==(char) 50)||(c57==(char) 51)||(c57==(char) 78)||(c57==(char) 110)||(c57==(char) 205)||(c57==(char) 237)))
                {
                    cin.clear();
                    while(cin.get()!='\n');
                    cout<<"\t\t������� �������� ���������: ";
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
                //cout<<"������ �� ����� �����������, ���������� ������� ���������, ������ �� ������ �������� ������. ����� - ��. ����\n";
               
                int i58;
                
                cout<<"������� ����� ����������� (1-3): ";
                while(!(cin>>i58)||(i58<1)||(i58>3))
                {
                        cin.clear();
                        while(cin.get()!='\n');
                        cout<<"\t\t������� ����� ���������: ";
                }

                in4:

                cout<<"������� ����� ����������� � "<<i58<<"-� ����������� �� ��������� (1-"<<z2_t(i58)<<"): ";

                int prof2;

                while(!(cin>>prof2)||(prof2<1)||(prof2>z2_t(i58)))
                   
                    {
                        cin.clear();
                        while(cin.get()!='\n');
                        cout<<"\t\t������� ���������� �����: ";
                    }


	            cout<<prof2<<" - ��������� ����������� � "<<i58<<"-� �����������\n\n���������� ������:\n";
                              

                //cout<<"������ org_org["<<i58<<"].iter(z1, "<<prof2<<")\n";

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

                cout<<iter2<<" �������� � �������� �����������\n";
                iter2=0;



                cout<<"��� ����� ����������� (�/N - ����� � ��. ����): ";//�� N(78)/n(110)/H(205)/�(237)
                
                char c58;
                cin>>c58;
                while(!((c58==(char) 49)||(c58==(char) 50)||(c58==(char) 51)||(c58==(char) 78)||(c58==(char) 110)||(c58==(char) 205)||(c58==(char) 237)))
                {
                    cin.clear();
                    while(cin.get()!='\n');
                    cout<<"\t\t������� �������� ���������: ";
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