/*
 * array.c
 *
 *  Created on: 11 oct. 2021
 *      Author: Alan
 */

#include "arrayPerro.h"

void inicializarPerros (sPerro* lista,int max) {
	int i;

	for (i=0;i<max;i++) {
		lista[i].estaVacio=VACIO;
	}
}

void hardCodearPerros (sPerro *lista, int cantHardcodear,int* cuentaPerros,int* sumaEdades,int* idFinal) {
	int i;
	int id[] = {7000,7001,7002};
	char nombre[][21]= {"Lobo","Sheila","Reina"};
	char raza[][21]= {"Sharpei","Golden","Galgo"};
	int edad[]= {2,12,13};
	int cantPerros=0;
	int sumaEdadesPerros=0;

	for (i=0;i<cantHardcodear;i++) {
		lista[i].id=id[i];
		strcpy(lista[i].nombre,nombre[i]);
		strcpy(lista[i].raza,raza[i]);
		lista[i].edad=edad[i];
		lista[i].estaVacio=OCUPADO;

		cantPerros++;
		sumaEdadesPerros=sumaEdadesPerros+lista[i].edad;
	}

	*cuentaPerros=cantPerros;
	*sumaEdades=sumaEdadesPerros;
	*idFinal=id[i];
}

void listarPerros (sPerro* lista, int max) {
	int i;

	printf ("%-10s %-25s %-25s %s","ID","Nombre","Raza","Edad\n\n");
	for (i=0;i<max;i++) {
		if (lista[i].estaVacio==OCUPADO) {
			printf("%-10d %-25s %-25s %d\n",lista[i].id,lista[i].nombre,lista[i].raza,lista[i].edad);
		}
	}
}

int buscarPerroID(sPerro* lista,char* mensajeBuscarID,char* mensajeError, int max) {
	int i;
	int id;
	int retorno = -1;

	while (retorno==-1) {
		id=tomarInt(mensajeBuscarID,mensajeError,7000,7500);

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
