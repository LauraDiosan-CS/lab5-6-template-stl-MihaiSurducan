#include "UI.h"

#include <iostream>
using namespace std;

//constructor
UI::UI()
{
	this->s;
}

//afisare meniu 
void UI::printMenu()
{
	cout << "1. Adaugare " << endl;
	cout << "2. Afisare " << endl;
	cout << "3. Update " << endl;
	cout << "4. Stergere " << endl;
	cout << "5. Exit " << endl;
}

/*Adaugare Masina*/
void UI::addMasina(Service& s) {
	char nume[20], numar[20], status[8];
	cout << "Numele posesorului: ";
	cin >> nume;
	cout << "Numarul de inmatriculare: ";
	cin >> numar;
	cout << "Status: ";
	cin >> status;
	Masina m(nume, numar, status);
	if (strcmp(status, "liber") == 0 or strcmp(status, "ocupat") == 0)
	{
		int rez = s.addMasina(m);
		if (rez == 0)
			cout << "Masina nu poate fi adaugata!" << endl;
		else
			cout << "Masina a fost adaugata cu succes!" << endl;
	}
	else
		cout << "Status trebuie sa fie 'liber' or 'ocupat'" << endl;
}

/*Afisarea tuturor Masinilor*/
void UI::getAll(Service& serv) {
	list<Masina> masina = serv.getAll();
	for (Masina m : masina)
		cout << m;
}

/*Stergerea unei Masini*/
void UI::delMasina(Service& serv) {
	cout << "Introduceti datele masini pe care vreti sa o stergeti!" << endl;
	char nume[20], numar[20], status[8];
	cout << "Numele posesorului: ";
	cin >> nume;
	cout << "Numarul de inmatriculare: ";
	cin >> numar;
	cout << "Status: ";
	cin >> status;
	Masina m(nume, numar, status);
	int rez = serv.delMasina(m);
	if (rez == 0) cout << "Masina a fost stersa cu succes!" << endl;
	else cout << "Masina NU a fost stersa!" << endl;
}

/*Modificarea unei Masini*/
void UI::updateMasina(Service& serv) {
	cout << "Introduceti datele masini pe care vreti sa o modificati!" << endl;
	char nume[20], numar[20], status[8];
	cout << "Numele posesorului: ";
	cin >> nume;
	cout << "Numarul de inmatriculare: ";
	cin >> numar;
	cout << "Status: ";
	cin >> status;
	Masina m(nume, numar, status);
	if (serv.findMasina(m))
	{
		char newNume[20], newNr[20], newStatus[10];
		cout << "Noul Nume al Posesorului : ";
		cin >> newNume;
		cout << "Noul Numarul de Inmatriculare: ";
		cin >> newNr;
		cout << "Noul Status: ";
		cin >> newStatus;
		serv.updateMasina(m, newNume, newNr, newStatus);
		cout << "Masina a fost modificata" << endl;
	}
	cout << "Masina nu a fost modificata" << endl;
}

//destructor
UI::~UI()
{

}