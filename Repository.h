#pragma once
#include "Masina.h"
#include <list>
using namespace std;

class Repository
{
private:
	list<Masina> elem;
public:
	Repository();
	int addElem(Masina);
	void updateElem(Masina, const char*, const char*, const char*);
	int findElem(Masina);
	int delElem(Masina);
	list<Masina> getAll();
	bool findMasina(Masina);
	int size();
	~Repository();
};


