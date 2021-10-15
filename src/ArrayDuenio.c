/*
 * duenio.c
 *
 *  Created on: 15 oct. 2021
 *      Author: Alan
 */

#include "ArrayDuenio.h"

void inicializarDuenios (sDuenio* lista,int max) {
	int i;

	for (i=0;i<max;i++) {
		lista[i].estaVacio=VACIO;
	}
}

void hardCodearDuenios (sDuenio *lista, int cantHardcodear,int* cuentaDuenios,int* idFinal) {
	int i;
	int id[] = {30000,30001,30002,30003,30004};
	char nombre[][41]= {"Marcos","Pablo","Juan","Lucas","Federico"};
	int telefono[]= {44103546,78921361,12378945,74195286,98653274};
	int cantDuenios=0;

	for (i=0;i<cantHardcodear;i++) {
		lista[i].id=id[i];
		strcpy(lista[i].nombre,nombre[i]);
		lista[i].telefono=telefono[i];
		lista[i].estaVacio=OCUPADO;

		cantDuenios++;
	}

	*cuentaDuenios=cantDuenios;
	*idFinal=id[i];
}

int buscarDuenioID(sDuenio* lista,char* mensajeBuscarID,char* mensajeError, int max) {
	int i;
	int id;
	int retorno = -1;

	while (retorno==-1) {
		id=tomarInt(mensajeBuscarID,mensajeError,30000,35000);

		for(i=0; i<max; i++) {
			if(lista[i].estaVacio == OCUPADO && lista[i].id == id) {
				retorno = i;
				break;
			}
		}
		if (retorno==-1) {
				printf ("ERROR. El ID que has ingresado no fue registrado. Intente nuevamente.\n");
		}
	}

	return retorno;
}
