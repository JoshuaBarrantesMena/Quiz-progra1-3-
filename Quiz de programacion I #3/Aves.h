#pragma once
#include "Vertebrados.h"

class Aves :public Vertebrados {
protected:
	string tipoPlumas;
	string tipoAlas;
public:
	Aves(string, string, int, string, string, string, string, bool, string, string);
	Aves();
	~Aves();

	void caminar();
	void respirar();
};
