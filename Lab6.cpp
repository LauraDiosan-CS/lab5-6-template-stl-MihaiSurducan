#include <iostream>
#include "Tests.h"
#include "UI.h"
#include "Service.h"
using namespace std;

int main()
{
	int ok = 0;
	MainTests();
	Service s;
	UI ui;
	while (!ok)
	{
		ui.printMenu();
		int option = 0;
		cout << "Optiunea: ";
		cin >> option;
		if (option == 1)
			ui.addMasina(s);
		if (option == 2)
			ui.getAll(s);
		if (option == 3)
			ui.updateMasina(s);
		if (option == 4)
			ui.delMasina(s);
		if (option == 5)
			ok = 1;
	}
	return 0;
}