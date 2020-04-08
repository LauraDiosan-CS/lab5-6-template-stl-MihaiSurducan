#pragma once
#include "Masina.h"
#include "Repository.h"
#include "Service.h"

class UI {
private:
	Service s;
public:
	UI();
	void printMenu();
	void addMasina(Service& s);
	void getAll(Service& s);
	void delMasina(Service& s);
	void updateMasina(Service& s);
	~UI();
};