#pragma once
#include "dinermenu.h"

class Waitress {
private:
    DinerMenu *dinerMenu;
public:
    Waitress(DinerMenu*);
    void printMenu();
    void printMenu(Iterator* iterator);
    void printVegetarianMenu();
    bool isItemVegetarian(string name);
    void printVegetarianMenu(Iterator* iterator);
    bool isVegetarian(string name, Iterator* iterator);
};
