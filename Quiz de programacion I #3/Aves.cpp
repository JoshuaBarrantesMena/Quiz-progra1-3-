#include "Aves.h"

Aves::Aves(char pTipoCuerpo[], char pTipoRespiracion[], int pCantExtremidades, char pTipoDesplazamiento[],
	char pTipoReproduccion[], char pHabitat[], char pAlimentoFavorito[], bool pViajarEnManada,
	char pTipoPlumas[], char pTipoAlas[]) :
	Vertebrados(pTipoCuerpo, pTipoRespiracion, pCantExtremidades, pTipoDesplazamiento, 
		pTipoReproduccion, pHabitat, pAlimentoFavorito, pViajarEnManada) {

	tipoPlumas = pTipoPlumas;
	tipoAlas = pTipoAlas;
}

Aves::Aves(){

	alimentoFavorito = " ";
	viajaEnManada = " ";
	tipoCuerpo = " ";
	tipoRespiración = " ";
	cantExtremidades = 0;
	tipoDesplazamiento = " ";
	tipoReproduccion = " ";
	habitat = " ";
	tipoPlumas = " ";
	tipoAlas = " ";
}

Aves::~Aves() {

}

void Aves::caminar() {

	desplazarse();
	printf("\n");
	printf("Aunque puede volar, este vertebrado puede caminar con sus %d extremidades.", cantExtremidades);
	printf("\n");
}

void Aves::respirar() {

	printf("\n");
	printf("Este mamifero puede respirar.");
	printf("\n");
}