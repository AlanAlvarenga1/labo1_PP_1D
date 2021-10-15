/*
 * duenio.h
 *
 *  Created on: 15 oct. 2021
 *      Author: Alan
 */

#ifndef ARRAYDUENIO_H_
#define ARRAYDUENIO_H_

#include "input.h"

typedef struct {
	int id;
	char nombre[maxChar];
	int telefono;
	int estaVacio;
}sDuenio;

/**
 * @fn void inicializarDuenios(sDuenio*, int)
 * @brief Inicializa los dueños
 *
 * @param lista lista de dueños
 * @param max tamaño maximo de cantidad de dueños
 */
void inicializarDuenios (sDuenio* lista,int max);
/**
 * @fn void hardCodearDuenios(sDuenio*, int, int*, int*)
 * @brief Hardcodea dueños
 *
 * @param lista Lista de dueños
 * @param cantHardcodear cantidad de dueños a hardcodear
 * @param cuentaDuenios lleva la cuenta de cuantos dueños se registraron
 * @param idFinal ultimo id ingresado
 */
void hardCodearDuenios (sDuenio *lista, int cantHardcodear,int* cuentaDuenios,int* idFinal);
/**
 * @fn int buscarDuenioID(sDuenio*, char*, char*, int)
 * @brief Busca un dueño por su id
 *
 * @param lista lista de dueños
 * @param mensajeBuscarID mensaje mostrado al iniciar la busqueda
 * @param mensajeError mensaje mostrado al haber un error
 * @param max tamaño maximo de cant de dueños
 * @return retorna el i del dueño buscado
 */
int buscarDuenioID(sDuenio* lista,char* mensajeBuscarID,char* mensajeError, int max);

#endif /* ARRAYDUENIO_H_ */
