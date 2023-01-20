// ОБЪЕКТ (АБСТРАКТНЫЙ)
#pragma once

#include <string>
#include <iostream>
using namespace std;



class gr_TObject
{
    

	public:
	    
        
        
        string obj_name;				// имя объекта
		gr_TObject();
		virtual ~gr_TObject();
		virtual void show() const;


};