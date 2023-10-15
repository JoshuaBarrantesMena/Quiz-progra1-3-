#pragma once
#include "Mamiferos.h"

class Perro: public Mamiferos {
private:
	string fuerzaLadrido;
	string razaPerro;
public:
	Perro(char[], char[], int, char[], char[], char[], char[], bool, char[], char[], char[]);
	~Perro();

	void ladrar();
};
