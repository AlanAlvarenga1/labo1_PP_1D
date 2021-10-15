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
 * @brief Inicializa los due�os
 *
 * @param lista lista de due�os
 * @param max tama�o maximo de cantidad de due�os
 */
void inicializarDuenios (sDuenio* lista,int max);
/**
 * @fn void hardCodearDuenios(sDuenio*, int, int*, int*)
 * @brief Hardcodea due�os
 *
 * @param lista Lista de due�os
 * @param cantHardcodear cantidad de due�os a hardcodear
 * @param cuentaDuenios lleva la cuenta de cuantos due�os se registraron
 * @param idFinal ultimo id ingresado
 */
void hardCodearDuenios (sDuenio *lista, int cantHardcodear,int* cuentaDuenios,int* idFinal);
/**
 * @fn int buscarDuenioID(sDuenio*, char*, char*, int)
 * @brief Busca un due�o por su id
 *
 * @param lista lista de due�os
 * @param mensajeBuscarID mensaje mostrado al iniciar la busqueda
 * @param mensajeError mensaje mostrado al haber un error
 * @param max tama�o maximo de cant de due�os
 * @return retorna el i del due�o buscado
 */
int buscarDuenioID(sDuenio* lista,char* mensajeBuscarID,char* mensajeError, int max);

#endif /* ARRAYDUENIO_H_ */
