#pragma once
#include "Repository.h"
#include "Masina.h"
#include <list>
using namespace std;

class Service
{
private:
	Repository repo;
public:
	Service();
	Service(const Repository&);
	int addMasina(Masina&);
	int delMasina(Masina&);
	Masina updateMasina(Masina, const char*, const char*, const char*);
	list<Masina> getAll();
	bool findMasina(Masina);
	~Service();
};

