/*
 * menu.c
 *
 *  Created on: 11 oct. 2021
 *      Author: Alan
 */

#include "menu.h"

void mostrarMenu (int* opciones) {

	printf ("\n\n-------------------MENU-------------------\n\n"
			"1) Reservar estadia\n"
			"2) Modificar estadia\n"
			"3) Cancelar estadia\n"
			"4) Listar estadia\n"
			"5) Listar perros\n"
			"6) Promediar edad de los perros\n"
			"7) Listar el perro con mas estadias\n"
			"8) Listado de perros con sus estadias\n"
			"9) Salir del programa\n\n");

			*opciones= tomarInt ("Ingrese la opcion que deseas utilizar: ","ERROR. Has ingresado una opcion incorrecta. 1-7: ",1, 9);
}

void subMenuModificacionEstadia(int* opciones,int id) {

	printf ("\n\n-------------------MODIFICACION-------------------\n\n");
	if (id!=-1) {
		printf ("ID ACTUAL: %d\n", id);
	}
	printf ("1) Ingrese el ID de la reserva que desea modificar\n"
			"2) Modificar el telefono de contacto\n"
			"3) Modificar el perro que esta en la reserva\n"
			"4) Salir del programa\n\n");

			*opciones= tomarInt ("Ingrese la opcion que deseas utilizar: ","ERROR. Has ingresado una opcion incorrecta. 1-4: ",1, 4);
}
