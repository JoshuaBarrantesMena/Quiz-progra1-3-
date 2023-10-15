#include "Vertebrados.h"

Vertebrados::Vertebrados(char pTipoCuerpo[], char pTipoRespiracion[], int pCantExtremidades, char pTipoDesplazamiento[],
	char pTipoReproduccion[], char pHabitat[], char pAlimentoFavorito[], bool pViajarEnManada) :
	ReinoAnimal(pAlimentoFavorito, pViajarEnManada) {

	tipoCuerpo = pTipoCuerpo;
	tipoRespiración = pTipoRespiracion;
	cantExtremidades = pCantExtremidades;
	tipoDesplazamiento = pTipoDesplazamiento;
	tipoReproduccion = pTipoReproduccion;
	habitat = pHabitat;
}

Vertebrados::Vertebrados() {

	alimentoFavorito = " ";
	viajaEnManada = " ";
	tipoCuerpo = " ";
	tipoRespiración = " ";
	cantExtremidades = 0;
	tipoDesplazamiento = " ";
	tipoReproduccion = " ";
	habitat = " ";
}

Vertebrados::~Vertebrados() {

}

void Vertebrados::alimentarse() {

	printf("\n");
	printf("Este vertebrado se alimenta de %s para adquirir nutrientes con su sistema digestivo.", 
		alimentoFavorito.c_str());
	printf("\n");

}

void Vertebrados::dormir() {

	printf("\n");
	printf("Este vertebrado duerme.");
	printf("\n");

}

void Vertebrados::desplazarse() {

	printf("\n");
	printf("La forma de desplazamiento de este vertebrado es %s por medio de su habitad de %s", 
		tipoDesplazamiento.c_str(), habitat.c_str());
	printf("\n");
}

void Vertebrados::adiestrarse() {

	printf("\n");
	printf("Este vertebrado se puede adiestrar dandole %s para hacerlo entrar en confianza.", 
		alimentoFavorito.c_str());
	printf("\n");
}

void Vertebrados::reproducirse() {

	printf("\n");
	printf("Este vertebrado se reproduce por medio de %s para dejar desendencia.", 
		tipoReproduccion.c_str());
	printf("\n");

}