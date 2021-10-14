/*
 ============================================================================
 Name        : Parcial.c
 Author      : Alan
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#include "arrayPerro.h"
#include "nexo.h"
#include "arrayEstadia.h"
#include "menu.h"

int main(void) {
	setbuf(stdout, NULL);

	int opcion=0;
	int cantPerros=0;
	int sumaEdadPerros=0;
	float promedioEdadPerros;
	int cantEstadias=0;
	int ultimoIDPerro=6999;
	int ultimoIDEstadia=99999;
	sPerro perrosGuarderia[maxPerros];
	sEstadiaDiaria datosGuarderia[maxEstadias];

	inicializarPerros (perrosGuarderia,500);
	hardCodearPerros (perrosGuarderia, 3,&cantPerros,&sumaEdadPerros,&ultimoIDPerro);
	inicializarGuarderia (datosGuarderia,500);
	promedioEdadPerros=sumaEdadPerros/cantPerros;

	while (opcion!=7) {
		mostrarMenu (&opcion);

		switch (opcion) {
			case 1:
				if (cantPerros>0) {
					if (registrarEstadia (datosGuarderia,perrosGuarderia,maxChar,maxPerros,ultimoIDEstadia,maxEstadias)==0) {
						ultimoIDEstadia++;
						cantEstadias++;
					}
					else {
						printf ("ERROR. No se ha podido realizar el alta de la estadia. Intente nuevamente\n\n");
					}
				}
				else {
					printf ("ERROR. Es necesario registrar al menos a un perro.\n\n");
				}
				break;
			case 2:
				if (cantEstadias>0) {
					modificarReserva (datosGuarderia, perrosGuarderia);
				}
				else {
					printf("ERROR. No hay ninguna estadia registrada. Utilice el primer paso primero\n\n");
				}
				break;
			case 3:
				if (cantEstadias>0) {
					if (bajaEstadia (datosGuarderia,maxEstadias)==0) {
						cantEstadias--;
					}
					else {
						printf ("ERROR. No se ha podido realizar la baja de la estadia. Intente nuevamente\n\n");
					}
				}
				else {
					printf ("ERROR. No hay ninguna estadia registrada. Utilice el primer paso primero");
				}
				break;
			case 4:
				if (cantEstadias>0) {
					ordenarEstadias (datosGuarderia,maxEstadias);
					listarEstadias (datosGuarderia,maxEstadias);
				}
				else {
					printf("ERROR. No hay ninguna estadia registrada. Utilice el primer paso primero\n\n");
				}
				break;
			case 5:
				if (cantPerros>0) {
					listarPerros (perrosGuarderia,maxPerros);
				}
				break;
			case 6:
				if (cantPerros>0) {
					printf ("El promedio de edad de los perros cargados es de %f años",promedioEdadPerros);
				}
		}
	}
}
