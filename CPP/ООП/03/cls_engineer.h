// �������
#pragma once
#include <string>
#include <iostream>
#include "cls_employer.h"
using namespace std;


class cls_engineer:public cls_employer
{
	protected:	
			int	pl;		// ������� ��������������� �������� (1-����, 2-��, 3-��)
			int	px;		// ���������� ������� � ����������
	public:
			cls_engineer();
			virtual ~cls_engineer();
			void show() const;

};