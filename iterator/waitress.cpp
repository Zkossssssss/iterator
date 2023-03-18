#include <iostream>
#include "waitress.h"
using namespace std;

Waitress::Waitress(DinerMenu* dinerMenu) {
    this->dinerMenu = dinerMenu;
}

void Waitress::printMenu() {
    Iterator* dinerIterator = dinerMenu->createIterator();

    cout << "MENU\n----\nBREAKFAST" << endl;

    cout << "\nLUNCH" << endl;
    printMenu(dinerIterator);
}

void Waitress::printMenu(Iterator* iterator) {
    while (iterator->hasNext()) {
        MenuItem* menuItem = (MenuItem*)iterator->next();
        cout << menuItem->getName().c_str() << ", " << endl;
        cout << menuItem->getPrice() << " -- " << endl;
        cout << menuItem->getDescription().c_str() << endl;
    }
}

void Waitress::printVegetarianMenu() {
    printVegetarianMenu(dinerMenu->createIterator());
}

bool Waitress::isItemVegetarian(string name) {
    Iterator* dinnerIterator = dinerMenu->createIterator();
    if (isVegetarian(name, dinnerIterator)) {
        return true;
    }
    return false;
}


void Waitress::printVegetarianMenu(Iterator* iterator) {
    while (iterator->hasNext()) {
        MenuItem* menuItem = (MenuItem*)iterator->next();
        if (menuItem->isVegetarian()) {
            cout << menuItem->getName().c_str() << endl;
            cout << "\t\t" << menuItem->getPrice() << endl;
            cout << "\t" << menuItem->getDescription().c_str() << endl;
        }
    }
}

bool Waitress::isVegetarian(string name, Iterator* iterator) {
    while (iterator->hasNext()) {
        MenuItem* menuItem = (MenuItem*)iterator->next();
        if (menuItem->getName() == name) {
            if (menuItem->isVegetarian()) {
                return true;
            }
        }
    }
    return false;
}

