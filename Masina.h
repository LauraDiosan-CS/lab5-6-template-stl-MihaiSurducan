#pragma once
#include <iostream>

using namespace std;

class Masina {
private:
	char* numePosesor;
	char* nrInmatriculare;
	char* status;

public:
	Masina();
	Masina(const char*, const char*, const char*);
	Masina(const Masina&);
	Masina& operator=(const Masina&);
	char* getNumePosesor();
	char* getNrInmatriculare();
	char* getStatus();
	void setNumePosesor(const char*);
	void setNrInmatriculare(const char*);
	void setStatus(const char*);
	bool operator==(const Masina&);
	friend ostream& operator<<(ostream& os, const Masina& m);
	~Masina();
};
