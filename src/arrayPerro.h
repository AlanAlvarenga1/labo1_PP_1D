/*
 * array.h
 *
 *  Created on: 11 oct. 2021
 *      Author: Alan
 */

#ifndef ARRAY_H_
#define ARRAY_H_
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "input.h"

#define maxChar 21
#define maxPerros 500

#define VACIO 0
#define OCUPADO 1

typedef struct {
	int id;
	char nombre[maxChar];
	char raza[maxChar];
	int edad;
	int estaVacio;
}sPerro;

/**
 * @fn void inicializarPerros(sPerro*, int)
 * @brief Deja a los espacios de la estructura de estadia en vacio
 *
 * @param lista Estructura de perros
 * @param max Numero maximo de arrays en la estructura de perros
 */
void inicializarPerros (sPerro* lista,int max);
/**
 * @fn void hardCodearPerros(sPerro*, int, int*, int*, int*)
 * @brief Hardcodea una lista de perros ya definidas
 *
 * @param lista Estructura de perros
 * @param cantHardcodear Cantidad de perros a hardcodear
 * @param cuentaPerros Lleva la cuenta de los perros registrados
 * @param sumaEdades Suma las edades de los perros registrados
 * @param idFinal Toma el ultimo ID ingresado
 */
void hardCodearPerros (sPerro* lista, int cantHardcodear,int* cuentaPerros,int* sumaEdades,int* idFinal);
/**
 * @fn void listarPerros(sPerro*, int)
 * @brief Muestra la lista de perros registrados
 *
 * @param lista Estructura de perros
 * @param max Numero maximo de arrays en la estructura de perros
 */
void listarPerros (sPerro* lista, int max);
/**
 * @fn int buscarPerroID(sPerro*, char*, char*, int)
 * @brief
 *
 * @param lista Estructura de perros
 * @param mensajeBuscarID Mensaje mostrado al momento de buscar un ID
 * @param mensajeError Mensaje mostrado al momento que haya un error
 * @param max Numero maximo de arrays en la estructura de perros
 * @return
 */
int buscarPerroID(sPerro* lista,char* mensajeBuscarID,char* mensajeError, int max);

#endif /* ARRAY_H_ */
