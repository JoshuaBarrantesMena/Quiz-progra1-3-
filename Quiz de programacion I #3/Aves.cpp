#include "Aves.h"

Aves::Aves(string pTipoCuerpo, string pTipoRespiracion, int pCantExtremidades, string pTipoDesplazamiento,
	string pTipoReproduccion, string pHabitat, string pAlimentoFavorito, bool pViajarEnManada, 
	string pTipoPlumas, string pTipoAlas) {

	tipoCuerpo = pTipoCuerpo;
	tipoRespiración = pTipoRespiracion;
	cantExtremidades = pCantExtremidades;
	tipoDesplazamiento = pTipoDesplazamiento;
	tipoReproduccion = pTipoReproduccion;
	habitat = pHabitat;
	alimentoFavorito = pAlimentoFavorito;
	viajaEnManada = pViajarEnManada;
	tipoPlumas = pTipoPlumas;
	tipoAlas = pTipoAlas;
}

Aves::Aves() {

	tipoCuerpo = " ";
	tipoRespiración = " ";
	cantExtremidades = 0;
	tipoDesplazamiento = " ";
	tipoReproduccion = " ";
	habitat = " ";
	alimentoFavorito = " ";
	viajaEnManada = false;
	tipoPlumas = " ";
	tipoAlas = " ";
}

Aves::~Aves() {

}

void Aves::caminar() {

	desplazarse();
	printf("Este vertebrado puede caminar con sus s% extremidades.\n", cantExtremidades);
}

void Aves::respirar() {

	printf("Este mamifero puede respirar.\n");
}