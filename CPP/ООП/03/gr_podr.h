// ѕќƒ–ј«ƒ≈Ћ≈Ќ»≈ (јЅ—“–ј “Ќџ…)
#pragma once
#include "item.h"
#include "gr_TObject.h"
#include <string>
#include <iostream>


using namespace std;


class gr_podr:public gr_TObject		// ѕќƒ–ј«ƒ≈Ћ≈Ќ»≈ потомок от ќЅЏ≈ “ј
{

	public:
			item* fO_lifo;	// указатель на начальный адрес списка элементов группы, 
							// поле будет только у объектов gr_*, примен¤тьс¤ дл¤ cls_*.
			gr_podr();
			virtual ~gr_podr();
			virtual void insert(gr_TObject* gr_o2, item* it2);
			virtual void show() const;

};