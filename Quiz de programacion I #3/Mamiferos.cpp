#include "Mamiferos.h"

Mamiferos::Mamiferos(string pTipoCuerpo, string pTipoRespiracion, int pCantExtremidades, string pTipoDesplazamiento,
	string pTipoReproduccion, string pHabitat, string pAlimentoFavorito, bool pViajarEnManada, string pTipoAlimentacion) {

	tipoCuerpo = pTipoCuerpo;
	tipoRespiraci�n = pTipoRespiracion;
	cantExtremidades = pCantExtremidades;
	tipoDesplazamiento = pTipoDesplazamiento;
	tipoReproduccion = pTipoReproduccion;
	habitat = pHabitat;
	alimentoFavorito = pAlimentoFavorito;
	viajaEnManada = pViajarEnManada;
	tipoAlimentacion = pTipoAlimentacion;
}

Mamiferos::Mamiferos() {

	tipoCuerpo = " ";
	tipoRespiraci�n = " ";
	cantExtremidades = 0;
	tipoDesplazamiento = " ";
	tipoReproduccion = " ";
	habitat = " ";
	alimentoFavorito = " ";
	viajaEnManada = false;
	tipoAlimentacion = " ";
}

Mamiferos::~Mamiferos() {

}

void Mamiferos::caminar() {

	desplazarse();
	printf("Este vertebrado puede caminar con sus s% Extremidades.\n", cantExtremidades);
}

void Mamiferos::respirar() {

	printf("Este mamifero puede respirar.\n");
}