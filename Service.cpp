#include "Service.h"

Service::Service()
{
}

Service::Service(const Repository& r)
{
	repo = r;
}

/*Adaugare unui element de tip Masina*/
int Service::addMasina(Masina& m)
{
	return repo.addElem(m);
}

/*Stergerea unui element de tip Masina*/
int Service::delMasina(Masina& m)
{
	return repo.delElem(m);
}

/*Modificarea unui element*/
Masina Service::updateMasina(Masina m, const char* newNumePosesor, const char* newNrInmatriculare, const char* newStatus)
{
	repo.updateElem(m, newNumePosesor, newNrInmatriculare, newStatus);
	return m;
}

/*Returnarea tuturor elementelor*/
list<Masina> Service::getAll()
{
	return repo.getAll();
}

bool Service::findMasina(Masina m)
{
	return repo.findMasina(m);
}

Service::~Service()
{
}
