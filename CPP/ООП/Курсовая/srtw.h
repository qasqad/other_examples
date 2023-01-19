#pragma once
#include "worker.h"
#include <string>
#include <iostream>

using namespace std;

class srtw
{
public:
    bool operator () (worker& w1, worker& w2) 
    {
        if (strcmp(w1.GetNm(), w2.GetNm())<0)
            return true;
        else
            return false;
    }
};