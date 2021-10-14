/*
 * nexo.c
 *
 *  Created on: 11 oct. 2021
 *      Author: Alan
 */

#include "nexo.h"

int registrarEstadia (sEstadiaDiaria *registroEstadia,sPerro *listaPerros,int lenChar,int lenPerros,int ultimoID,int max) {
	int retorno=-1;
	int i=0;
	int flag=0;
	int posicionPerro;
	int seguir=1;

	while (flag==0 && i<max) {
		if (registroEstadia[i].estaVacio==VACIO) {
			flag=1;
		}
		else {
			i++;
		}
	}
	if (flag==1) {
		while (seguir==1) {
			registroEstadia[i].id=ultimoID+1;
			tomarString ("Ingrese el nombre del dueño del perro: ","ERROR. Has ingresado un caracter invalido. Intente nuevamente: ", registroEstadia[i].nombreDuenio, lenChar);
			registroEstadia[i].telefonoContacto=tomarInt ("Ingrese el numero de telefono del dueño del perro. Sin guiones: ","ERROR. Has ingresado un numero invalido. Intente nuevamente: ",10000000, 99999999);
			posicionPerro=buscarPerroID(listaPerros,"Ingrese el ID del perro que sera registrado: ","ERROR. Has ingresado un ID incorrecto. Intente nuevamente: ", lenPerros);
			registroEstadia[i].idPerro=listaPerros[posicionPerro].id;
			registroEstadia[i].fecha=tomarFecha("Ingrese el dia 1-31: ","Ingrese el mes 1-12: ","Ingrese el año 2021-2025: ","ERROR. Ingresaste un caracter invalido. Intenta nuevamente: ");

			printf ("%-10s %-25s %-25s %-25s %s","ID","Nombre del dueño","Telefono del dueño","ID Perro", "Fecha de reserva\n");
			printUnaEstadia (registroEstadia,i);

			printf ("¿Los datos cargados son correctos?. 0= SI 1= NO -1= SALIR: ");
			fflush (stdin);
			scanf ("%d",&seguir);

			while (seguir!=1 && seguir!=0 && seguir!=-1) {
				printf ("ERROR. Ingrese un caracter valido: ");
				fflush (stdin);
				scanf ("%d",&seguir);
			}

			switch (seguir) {
				case -1:
					printf ("SALIENDO.....\n\n");
					break;
				case 0:
					registroEstadia[i].estaVacio=OCUPADO;
					retorno=0;
					printf("Se registro exitosamente la estadia\n\n");
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
}


void modificarReserva (sEstadiaDiaria* registroEstadia, sPerro* listaPerro) {
	int opcion=0;
	int i;
	int posicionPerro;

	while (opcion!=4) {
		subMenuModificacionEstadia(&opcion,registroEstadia[i].id);

		switch (opcion) {
			case 1:
				i=buscarEstadiaID(registroEstadia,"Ingrese el ID de la estadia que deseas modificar: ","ERROR. Ingresaste un valor no valido. Intente nuevamente: ", maxEstadias);
				if (i==-1) {
					printf ("ERROR. No se ha encontrado algun ID a eliminar. Chequee la lista y vuelva a intentar");
				}
				else {
					printf ("ID Ingresado exitosamente\n");
				}
				break;
			case 2:
				if (i!=-1) {
					registroEstadia[i].telefonoContacto=tomarInt ("Ingrese el numero de telefono del dueño del perro. Sin guiones: ","ERROR. Has ingresado un numero invalido. Intente nuevamente: ",10000000,99999999);
					printf ("Telefono modificado exitosamente\n");
				}
				else {
					printf ("ERROR. Primero debe ingresar el ID a modificar\n");
				}
				break;
			case 3:
				if (i!=-1) {
					posicionPerro=buscarPerroID(listaPerro,"Ingresa el ID del perro que deseas registrar: ","ERROR. Has ingresado un ID invalido. Intenta nuevamente: ", maxPerros);
					registroEstadia[i].idPerro=listaPerro[posicionPerro].id;
					printf ("Perro cambiado exitosamente\n");
				}
				else {
					printf ("ERROR. Primero debe ingresar el ID a modificar\n");
				}
				break;
			case 4:
				printf ("ABANDONANDO PROGRAMA....\n\n");

		}
	}
}
