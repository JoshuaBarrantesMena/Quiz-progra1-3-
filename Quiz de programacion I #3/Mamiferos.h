#pragma once
#include "Vertebrados.h"

class Mamiferos:public Vertebrados{
protected:
	string tipoAlimentacion;
public:
	Mamiferos(char[], char[], int, char[], char[], char[], char[], bool, char[]);
	Mamiferos();
	~Mamiferos();

	void caminar();
	void respirar();
};