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


typedef struct {
	int id;
	char nombre[maxChar];
	char raza[maxChar];
	int edad;
	int cantEstadias;
	int listaEstadias[10];
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
 * @fn int registrarEstadia(sPerro*, int, int, int*)
 * @brief Esta funcion permite registrar perros
 *
 * @param listaPerros Es la lista que contiene a los perros registrados
 * @param lenChar Tamaño maximo de caracteres de un char
 * @param lenPerros Tamaño maximo de perros que se pueden registrar
 * @param ultimoID Ultimo ID ingresado de un perro
 * @return Retorna -1 si la funcion no se realizo con exito. Y retorna 0 si se realizo con exito
 */
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
/**
 * @fn void printUnPerro(sPerro*, int)
 * @brief Imprime en pantalla un perro
 *
 * @param lista Lista de perros
 * @param i Posicion del perro a imprimir
 */
void ordenarPerrosPorEstadias (sPerro* lista,int max);
/**
 * @fn void printUnPerro(sPerro*, int)
 * @brief Imprime un solo perro
 *
 * @param lista Lista de perros
 * @param i posicion del perro a imprimir
 */
void printUnPerro (sPerro* lista,int i);

#endif /* ARRAY_H_ */
