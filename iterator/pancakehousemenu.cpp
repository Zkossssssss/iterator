#include "pancakehousemenu.h"

PancakeHouseMenu::PancakeHouseMenu() {
    addItem("K&B's Pancake Breakfast",
        "Pancakes with scrambled eggs, and toast",
        true,
        2.99);

    addItem("Regular Pancake Breakfast",
        "Pancakes with fried eggs, sausage",
        false,
        2.99);

    addItem("Blueberry Pancakes",
        "Pancakes made with fresh blueberries",
        true,
        3.49);

    addItem("Waffles",
        "Waffles, with your choice of blueberries or strawberries",
        true,
        3.59);
}

void PancakeHouseMenu::addItem(string n, string d, bool v, double p) {
    MenuItem *menuItem = new MenuItem(n, d, v, p);
    menuItems.push_back(menuItem);
}

list<MenuItem*> PancakeHouseMenu::getMenuItems() {
    return menuItems;
}

string PancakeHouseMenu::toString() {
    return "Objectville Pancake House Menu";
}
