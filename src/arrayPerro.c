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
		lista[i].cantEstadias=0;
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

/*int registrarUnPerro (sPerro *listaPerros,int lenChar,int lenPerros,int ultimoID) {
	int retorno=-1;
	int i=0;
	int flag=0;
	int seguir=1;

	while (flag==0 && i<lenPerros) {
		if (listaPerros[i].estaVacio==VACIO) {
			flag=1;
		}
		else {
			i++;
		}
	}
	if (flag==1) {
		while (seguir==1) {
			listaPerros[i].id=ultimoID+1;
			tomarString ("Ingrese el nombre del dueño del perro: ","ERROR. Has ingresado un caracter invalido. Intente nuevamente: ", listaPerros[i].nombre, lenChar);
			tomarString ("Ingrese el nombre de la raza del perro: ","ERROR. Has ingresado un caracter invalido. Intente nuevamente: ", listaPerros[i].raza, lenChar);
			listaPerros[i].edad=tomarInt ("Ingrese la edad del perro: ","ERROR. Has ingresado un numero invalido. Intente nuevamente: ",0, 20);

			printf ("%-10s %-25s %-25s %s","ID","Nombre del perro","Raza del perro","Edad del perro\n");
			printUnPerro (listaPerros,i);

			seguir=tomarInt ("¿Los datos cargados son correctos?. 0=SI 1=NO -1=SALIR: ","ERROR. Ingrese un caracter valido: ",-1, 1);

			switch (seguir) {
				case -1:
					printf ("SALIENDO.....\n\n");
					break;
				case 0:
					listaPerros[i].estaVacio=OCUPADO;
					retorno=0;
					printf("Se registro exitosamente el perro\n\n");
					break;
				case 1:
					printf ("Vaciando los datos cargados.....\n\n");
					break;
			}
		}
	}
	else {
		printf ("ERROR. No hay espacios disponibles");
	}
	return retorno;
}*/


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

void ordenarPerrosPorEstadias (sPerro* lista, int max) {
	int i;
	int limit;
	int flagSwap;
	sPerro aux;

	limit=max-1;
		do {
			flagSwap=0;
			for (i=0;i<limit;i++) {
				if (lista[i].cantEstadias<lista[i+1].cantEstadias) {
					aux=lista[i];
					lista[i]=lista[i+1];
					lista[i+1]=aux;
					flagSwap=1;
				}
			}
			limit--;
		}while (flagSwap);
}

void printUnPerro (sPerro* lista,int i) {
	printf ("%-10d %-25s %-25s %-25d %d\n",lista[i].id,lista[i].nombre,lista[i].raza,lista[i].edad,lista[i].cantEstadias);
}
