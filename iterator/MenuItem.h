#pragma once
using namespace std;
#include <string>

#include "object.h"

class MenuItem : public Object {
private:
    string name;
    string description;
    bool vegetarian;
    double price;
public:
    MenuItem(string, string, bool, double);
    string getName();
    string getDescription();
    double getPrice();
    bool isVegetarian();
};
