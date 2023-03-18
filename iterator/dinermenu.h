#ifndef DINERMENU_H
#define DINERMENU_H

#include "vector"
#include "menu.h"
#include "menuitem.h"
#include "dinermenuiterator.h"
#include <iostream>
using namespace std;

class DinerMenu : public Menu {
public:
    static const int MAX_ITEMS = 6;
    int numberOfItems = 0;
    MenuItem* menuItems[MAX_ITEMS];
    DinerMenu();
    void addItem(string name, string description, bool vegetarian, double price);
    MenuItem** getMenuItems();
    Iterator* createIterator();
};

#endif // DINERMENU_H
