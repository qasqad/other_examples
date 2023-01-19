#pragma once
#include "engineer.h"
#include <string>
#include <iostream>

using namespace std;

class srte
{
public:
    bool operator () (engineer& e1) 
    {
        if (strcmp(e1.GetNm(), e2.GetNm())<0)
            return true;
        else
            return false;
    }
};