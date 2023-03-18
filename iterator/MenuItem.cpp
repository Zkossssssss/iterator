#include "MenuItem.h"
MenuItem::MenuItem(string n, string d, bool v, double p) {
	this->name = n;
	this->description = d;
	this->vegetarian = v;
	this->price = p;
}

string MenuItem::getName() {
	return name;
}
string MenuItem::getDescription() {
	return description;
}
bool MenuItem::isVegetarian() {
	return vegetarian;
}
double MenuItem::getPrice() {
	return price;
}