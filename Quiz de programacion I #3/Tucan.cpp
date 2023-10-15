#include "Tucan.h"

Tucan::Tucan(char pTipoCuerpo[], char pTipoRespiracion[], int pCantExtremidades, char pTipoDesplazamiento[],
	char pTipoReproduccion[], char pHabitat[], char pAlimentoFavorito[], bool pViajarEnManada,
	char pTipoPlumas[], char pTipoAlas[], char pColorPico[], char pTipoPico[]) :
	Aves(pTipoCuerpo, pTipoRespiracion, pCantExtremidades, pTipoDesplazamiento, pTipoReproduccion, 
		pHabitat, pAlimentoFavorito, pViajarEnManada, pTipoPlumas, pTipoAlas) {

	colorPico = pColorPico;
	tipoPico = pTipoPico;
}

Tucan::~Tucan() {

}

void Tucan::picotear() {

	printf("\n");
	printf("El tucan puede picotear facilmente la madera gracias a que es %s ademas de ser llamativo por su color %s", 
		tipoPico.c_str(), colorPico.c_str());
	printf("\n");
}