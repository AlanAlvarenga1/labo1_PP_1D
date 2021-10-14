/*
 * input.h
 *
 *  Created on: 11 oct. 2021
 *      Author: Alan
 */

#ifndef INPUT_H_
#define INPUT_H_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#include "arrayPerro.h"
#include "arrayEstadia.h"

/**
 * @fn int tomarInt(char*, char*, int, int)
 * @brief Funcion que sirve para tomar un entero
 *
 * @param mensajeInicio Mensaje mostrado al inicio de la funcion
 * @param mensajeError Mensaje mostrado al momento en el que haya un error
 * @param min Numero minimo solicitado
 * @param max Numero maximo solicitado
 * @return Devuelve el numero ingresado
 */
int tomarInt (char* mensajeInicio,char* mensajeError,int min, int max);

/**
 * @fn void tomarString(char*, char*, char*, int)
 * @brief Funcion que sirve para tomar un string
 *
 * @param mensajeInicio Mensaje mostrado al inicio de la funcion
 * @param mensajeError Mensaje mostrado al momento en el que haya un error
 * @param string String que sera devuelto
 * @param tamChar Tamaño maximo del string
 */
void tomarString (char* mensajeInicio,char* mensajeError, char* string, int tamChar);
/**
 * @fn float tomarFloat(char*, char*, int, int)
 * @brief Funcion que sirve para tomar un flotante
 *
 * @param mensajeInicio Mensaje mostrado al inicio de la funcion
 * @param mensajeError Mensaje mostrado al momento en el que haya un error
 * @param min Numero minimo solicitado
 * @param max Numero maximo solicitado
 * @return Devuelve el numero ingresado
 */
float tomarFloat (char* mensajeInicio,char* mensajeError,int min, int max);

#endif /* INPUT_H_ */
