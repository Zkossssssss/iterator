#include <iostream>
#include "dinermenu.h"
#include "pancakehousemenu.h"
#include "waitress.h"

int main() {
	std::cout << __cplusplus << std::endl;

	DinerMenu* dinerMenu = new DinerMenu();
	Waitress* waitress = new Waitress(dinerMenu);
	waitress->printMenu();
}
