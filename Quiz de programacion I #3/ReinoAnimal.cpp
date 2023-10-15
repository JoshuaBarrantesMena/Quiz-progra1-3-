#include "ReinoAnimal.h"

ReinoAnimal::ReinoAnimal(char pAlimentoFavorito[], bool pViajaEnManada) {

	alimentoFavorito = pAlimentoFavorito;
	viajaEnManada = pViajaEnManada;
}

ReinoAnimal::ReinoAnimal() {

	alimentoFavorito = " ";
	viajaEnManada = false;
}

ReinoAnimal::~ReinoAnimal() {

}