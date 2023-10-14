#include "Vertebrados.h"

Vertebrados::Vertebrados(string pTipoCuerpo, string pTipoRespiracion, int pCantExtremidades, string pTipoDesplazamiento, 
	string pTipoReproduccion, string pHabitat, string pAlimentoFavorito, bool pViajarEnManada) {

	tipoCuerpo = pTipoCuerpo;
	tipoRespiración = pTipoRespiracion;
	cantExtremidades = pCantExtremidades;
	tipoDesplazamiento = pTipoDesplazamiento;
	tipoReproduccion = pTipoReproduccion;
	habitat = pHabitat;
	alimentoFavorito = pAlimentoFavorito;
	viajaEnManada = pViajarEnManada;
}

Vertebrados::Vertebrados() {

	tipoCuerpo = " ";
	tipoRespiración = " ";
	cantExtremidades = 0;
	tipoDesplazamiento = " ";
	tipoReproduccion = " ";
	habitat = " ";
	alimentoFavorito = " ";
	viajaEnManada = false;
}

Vertebrados::~Vertebrados() {

}

void Vertebrados::alimentarse() {

	printf("Este vertebrado se alimenta de s% para adquirir nutrientes con su sistema digestivo.\n", alimentoFavorito);

}

void Vertebrados::dormir() {

	printf("Este vertebrado duerme.\n");

}

void Vertebrados::desplazarse() {

	printf("La forma de desplazamiento de este vertebrado es s% por medio de su habitad de s%.\n", tipoDesplazamiento, habitat);

}

void Vertebrados::adiestrarse() {

	printf("Este vertebrado se puede adiestrar dandole s% para hacerlo entrar en confianza.\n", alimentoFavorito);

}

void Vertebrados::reproducirse() {

	printf("Este vertebrado se reproduce por medio de s% para dejar desendencia.\n");

}