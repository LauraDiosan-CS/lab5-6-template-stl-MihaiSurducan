#include "Repository.h"
#include <string>

using namespace std;


Repository::Repository()
{

}

/*Adaugare element*/
void Repository::addElem(Masina m)
{
	elem.push_back(m);
}

/*Modificare elem*/
void Repository::updateElem(Masina m, const char* newNumePosesor, const char* newNrInmatriculare, const char* newStatus)
{
	list<Masina>::iterator it;
	it = find(elem.begin(), elem.end(), m);
	if (it != elem.end()) {
		(*it).setNrInmatriculare(newNrInmatriculare);
		(*it).setNumePosesor(newNumePosesor);
		(*it).setStatus(newStatus);
	}

}

//returneaza pozitia la care se gaseste studentul s, sau -1, daca acesta nu apare
int Repository::findElem(Masina m)
{
	list<Masina>::iterator it;
	it = find(elem.begin(), elem.end(), m);
	if (it != elem.end()) {
		return distance(elem.begin(), it);
	}
	return -1;
}

//sterge elementul s din repository, returneaza 0 la succes, -1 altfel
int Repository::delElem(Masina m)
{
	list<Masina>::iterator it;
	it = find(elem.begin(), elem.end(), m);
	if (it != elem.end()) {
		elem.erase(it);
		return 0;
	}
	return -1;

}

list<Masina> Repository::getAll()
{
	return elem;
}

int Repository::size()
{
	return elem.size();
}

Repository::~Repository()
{

}

