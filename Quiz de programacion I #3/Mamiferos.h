#pragma once
#include "Vertebrados.h"

class Mamiferos:public Vertebrados{
protected:
	string tipoAlimentacion;
public:
	Mamiferos(string, string, int, string, string, string, string, bool, string);
	Mamiferos();
	~Mamiferos();

	void caminar();
	void respirar();
};