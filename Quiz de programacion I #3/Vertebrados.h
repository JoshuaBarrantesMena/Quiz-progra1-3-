#pragma once
#include "ReinoAnimal.h"

class Vertebrados:public ReinoAnimal {
protected:
	string tipoCuerpo;
	string tipoRespiraci�n;
	int cantExtremidades;
	string tipoDesplazamiento;
	string tipoReproduccion;
	string habitat;
public:
	Vertebrados(char[], char[], int, char[], char[], char[], char[], bool);
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