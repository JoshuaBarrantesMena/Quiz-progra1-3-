#pragma once
#include <iostream>

using namespace std;

class ReinoAnimal {
protected:
	string alimentoFavorito;
	bool viajaEnManada;
public:
	ReinoAnimal(char[], bool);
	ReinoAnimal();
	~ReinoAnimal();
	virtual void adiestrarse() = 0;
	virtual void reproducirse() = 0;
};
