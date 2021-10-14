/*
 * input.c
 *
 *  Created on: 11 oct. 2021
 *      Author: Alan
 */

#include "input.h"

int tomarInt (char* mensajeInicio,char* mensajeError,int min, int max) {
	int numero;
	int checkVar;

	if (mensajeInicio!=NULL && mensajeError!=NULL) {
		printf ("%s",mensajeInicio);
		fflush (stdin);
		checkVar=scanf("%d",&numero);

		while (checkVar==0 || (numero<min || numero>max)) {
			printf ("%s",mensajeError);
			fflush (stdin);
			checkVar=scanf("%d",&numero);
		}
	}
	return numero;
}

void tomarString (char* mensajeInicio,char* mensajeError, char* string, int tamChar) {
    int tam;
    int i;

    if (mensajeInicio!=NULL && mensajeError!=NULL) {
		printf ("%s",mensajeInicio);
		fflush (stdin);
		fgets (string, tamChar,stdin);
		tam=strlen (string);
		string[tam-1] = 32;

		for (i=0;i<tam-1;i++) {
			while (isalpha(string[i])==0) {
				printf ("%s",mensajeError);
				fflush (stdin);
				fgets (string, tamChar,stdin);
				tam=strlen (string);
				string[tam-1] = 32;

				i=0;
			}
		}
    }
}

float tomarFloat (char* mensajeInicio,char* mensajeError,int min, int max) {
	float numero;
	float checkVar;

	if (mensajeInicio!=NULL && mensajeError!=NULL) {
		printf ("%s",mensajeInicio);
		fflush (stdin);
		checkVar=scanf("%f",&numero);

		while (checkVar==0 || (numero<min || numero>max)) {
			printf ("%s",mensajeError);
			fflush (stdin);
			checkVar=scanf("%f",&numero);
		}
	}
	return numero;
}
