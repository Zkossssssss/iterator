#pragma once
#include <list>
#include "iterator.h"
#include "MenuItem.h"

class Pancakehousemenuiterator : public Iterator {
private:
	list<MenuItem*> items;
	int position;
public:
	Pancakehousemenuiterator(list<MenuItem*> items);
	void* _next();
	bool hasNext();
};


