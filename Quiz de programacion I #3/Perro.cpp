#include "Perro.h"

Perro::Perro(char pTipoCuerpo[], char pTipoRespiracion[], int pCantExtremidades, char pTipoDesplazamiento[],
	char pTipoReproduccion[], char pHabitat[], char pAlimentoFavorito[], bool pViajarEnManada, 
	char pTipoAlimentacion[], char pFuerzaLadrido[], char pRazaPerro[]) :
	Mamiferos(pTipoCuerpo, pTipoRespiracion, pCantExtremidades, pTipoDesplazamiento, pTipoReproduccion,
	pHabitat, pAlimentoFavorito, pViajarEnManada, pTipoAlimentacion) {

	fuerzaLadrido = pFuerzaLadrido;
	razaPerro = pRazaPerro;
}

Perro::~Perro() {

}

void Perro::ladrar() {
	printf("\n");
	printf("Este perro es un %s, y tiene una fuerza de ladrido %s", razaPerro.c_str(), fuerzaLadrido.c_str());
	printf("\n");
}