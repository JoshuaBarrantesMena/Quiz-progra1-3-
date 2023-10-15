#include "Mamiferos.h"

Mamiferos::Mamiferos(char pTipoCuerpo[], char pTipoRespiracion[], int pCantExtremidades, char pTipoDesplazamiento[],
	char pTipoReproduccion[], char pHabitat[], char pAlimentoFavorito[], bool pViajarEnManada, char pTipoAlimentacion[]) :
	Vertebrados(pTipoCuerpo, pTipoRespiracion, pCantExtremidades, pTipoDesplazamiento,
		pTipoReproduccion, pHabitat, pAlimentoFavorito, pViajarEnManada) {

	tipoAlimentacion = pTipoAlimentacion;
}

Mamiferos::Mamiferos(){

	alimentoFavorito = " ";
	viajaEnManada = " ";
	tipoCuerpo = " ";
	tipoRespiración = " ";
	cantExtremidades = 0;
	tipoDesplazamiento = " ";
	tipoReproduccion = " ";
	habitat = " ";
	tipoAlimentacion = " ";
}

Mamiferos::~Mamiferos() {

}

void Mamiferos::caminar() {

	desplazarse();
	printf("\n");
	printf("Este vertebrado puede caminar con sus %d Extremidades.", cantExtremidades);
	printf("\n");
}

void Mamiferos::respirar() {

	printf("\n");
	printf("Este mamifero puede respirar.");
	printf("\n");
}