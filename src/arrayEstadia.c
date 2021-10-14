/*
 * arrayEstadia.c
 *
 *  Created on: 11 oct. 2021
 *      Author: Alan
 */

#include "arrayEstadia.h"

void inicializarGuarderia (sEstadiaDiaria* lista,int max) {
	int i;

	for (i=0;i<max;i++) {
		lista[i].estaVacio=VACIO;
	}
}

int bajaEstadia (sEstadiaDiaria* lista,int max) {
	int retorno=-1;
	int i;
	int seguir=1;

	while (seguir==1) {
		i=buscarEstadiaID(lista,"Ingrese el ID que desea eliminar: ","ERROR. Ingresaste un valor no valido. Intente nuevamente: ",max);

		if (i==-1) {
			printf ("ERROR. No se ha encontrado algun ID a eliminar. Chequee la lista y vuelva a intentar");
			return retorno;
		}
		else {
			printUnaEstadia (lista,i);
			printf ("Desea eliminar esta estadia? 0= SI 1= NO -1= SALIR: ");
			fflush (stdin);
			scanf ("%d",&seguir);

			while (seguir!=-1 && seguir!=0 && seguir!=1) {
				printf ("ERROR. Ingrese un caracter valido: ");
				fflush (stdin);
				scanf ("%d",&seguir);
			}

			switch (seguir) {
				case -1:
					printf ("SALIENDO.....\n\n");
					break;
				case 0:
					lista[i].estaVacio=VACIO;
					retorno=0;
					printf("Se elimino exitosamente la estadia\n\n");
					break;
				case 1:
					printf ("Vaciando los datos cargados.....\n\n");
					break;
			}
		}
	}
	return retorno;
}

void ordenarEstadias(sEstadiaDiaria* lista, int max) {
	int i;
	int limit;
	int flagSwap;
	sEstadiaDiaria aux;

	limit=max-1;
		do {
			flagSwap=0;
			for (i=0;i<limit;i++) {
				if (lista[i].fecha.anio>lista[i+1].fecha.anio) {
					aux=lista[i];
					lista[i]=lista[i+1];
					lista[i+1]=aux;
					flagSwap=1;
				}
				else if ((lista[i].fecha.anio==lista[i+1].fecha.anio) && (lista[i].fecha.mes>lista[i+1].fecha.mes)) {
					aux=lista[i];
					lista[i]=lista[i+1];
					lista[i+1]=aux;
					flagSwap=1;
				}
				else if ((lista[i].fecha.anio==lista[i+1].fecha.anio) && (lista[i].fecha.mes==lista[i+1].fecha.mes) && (lista[i].fecha.dia>lista[i+1].fecha.dia)) {
					aux=lista[i];
					lista[i]=lista[i+1];
					lista[i+1]=aux;
					flagSwap=1;
				}
				else if ((lista[i].fecha.anio==lista[i+1].fecha.anio) && (lista[i].fecha.mes==lista[i+1].fecha.mes) && (lista[i].fecha.dia==lista[i+1].fecha.dia) && (strcmp (lista[i].nombreDuenio,lista[i+1].nombreDuenio)==1)) {
					aux=lista[i];
					lista[i]=lista[i+1];
					lista[i+1]=aux;
					flagSwap=1;
				}
			}
			limit--;
		}while (flagSwap);
}

void listarEstadias(sEstadiaDiaria* lista, int max) {
	int i;

	printf ("%-10s %-25s %-25s %-25s %s","ID","Nombre del dueño","Telefono del dueño","ID Perro", "Fecha de reserva\n");
	for (i=0;i<max;i++) {
		if (lista[i].estaVacio==OCUPADO) {
			printUnaEstadia (lista, i);
		}
	}
}

int buscarEstadiaID(sEstadiaDiaria* lista,char* mensajeBuscarID,char* mensajeError, int max) {
	int i;
	int id;
	int retorno = -1;

	while (retorno==-1) {
		id=tomarInt(mensajeBuscarID,mensajeError,100000,100500);

		for(i=0; i<max; i++) {
			if(lista[i].estaVacio == OCUPADO && lista[i].id == id) {
				retorno = i;
				break;
			}
		}
		if (retorno==-1) {
				printf ("ERROR. El ID que has ingresado no fue registrado. Intente nuevamente: ");
		}
	}

	return retorno;
}

void printUnaEstadia (sEstadiaDiaria* registroEstadia,int i) {
	printf ("%-10d %-25s %-25d %-25d",registroEstadia[i].id,registroEstadia[i].nombreDuenio,registroEstadia[i].telefonoContacto,registroEstadia[i].idPerro);
	mostrarFecha(registroEstadia[i].fecha);
}

sCalendario tomarFecha(char* mensajeDia,char* mensajeMes,char* mensajeAnio,char* mensajeError) {
	sCalendario fechas;

	fechas.anio= tomarInt (mensajeAnio,mensajeError,2021, 2025);
	fechas.mes= tomarInt (mensajeMes,mensajeError,1, 12);
	fechas.dia= tomarInt (mensajeDia,mensajeError,1, 31);
	if (fechas.mes==4 || fechas.mes==6 || fechas.mes==9 || fechas.mes==11) {
		while (fechas.dia>30) {
			printf ("ERROR. El mes ingresado no puede tener 31 dias. Intente ingresar nuevamente el dia\n");
			fechas.dia= tomarInt (mensajeDia,mensajeError,1, 31);
		}
	}
	if (fechas.mes==2) {
		while (fechas.dia>28) {
			printf ("ERROR. El mes ingresado no puede tener 28 dias. Intente ingresar nuevamente el dia\n");
			fechas.dia= tomarInt (mensajeDia,mensajeError,1, 31);
		}
	}



	return fechas;
}
void mostrarFecha(sCalendario fecha)
{
	printf("%d/%d/%d\n", fecha.dia, fecha.mes, fecha.anio);
}
