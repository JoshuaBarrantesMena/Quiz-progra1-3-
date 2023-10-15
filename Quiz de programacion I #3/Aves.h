#pragma once
#include "Vertebrados.h"

class Aves :public Vertebrados {
protected:
	string tipoPlumas;
	string tipoAlas;
public:
	Aves(char[], char[], int, char[], char[], char[], char[], bool, char[], char[]);
	Aves();
	~Aves();

	void caminar();
	void respirar();
};
