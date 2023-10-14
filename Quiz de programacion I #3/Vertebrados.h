#pragma once
#include "ReinoAnimal.h"

class Vertebrados:public ReinoAnimal {
protected:
	string tipoCuerpo;
	string tipoRespiración;
	int cantExtremidades;
	string tipoDesplazamiento;
	string tipoReproduccion;
	string habitat;
public:
	Vertebrados(string, string, int, string, string, string, string, bool);
	Vertebrados();
	~Vertebrados();
	void alimentarse();
	void dormir();
	void desplazarse();

	void adiestrarse();
	void reproducirse();

	virtual void caminar() = 0;
	virtual void respirar() = 0;
};