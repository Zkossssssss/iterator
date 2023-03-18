#include "pancakehousemenuiterator.h"

Pancakehousemenuiterator::Pancakehousemenuiterator(list<MenuItem*> items) {
	position = 0;
	this->items = items;
}

void* Pancakehousemenuiterator::_next() {
	list<MenuItem*>::iterator it = items.begin();
	std::advance(it, position);
	void* object = static_cast<void*>(*it);
	position = position + 1;
	return object;
}

bool Pancakehousemenuiterator::hasNext() {
	if (position >= items.size()) {
		return false;
	}
	else {
		return true;
	}
}
