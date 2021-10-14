/*
 * menu.h
 *
 *  Created on: 11 oct. 2021
 *      Author: Alan
 */

#ifndef MENU_H_
#define MENU_H_
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#include "input.h"

/**
 * @fn void mostrarMenu(int*)
 * @brief Muestra el menu principal
 *
 * @param opciones Toma la opcion solicitada y la devuelve al main
 */
void mostrarMenu (int* opciones);
/**
 * @fn void subMenuModificacionEstadia(int*, int)
 * @brief Muestra el submenu de la opcion 2
 *
 * @param opciones Toma la opcion solicitada y la devuelve al main
 * @param id Muestra el ID que sera modificado
 */
void subMenuModificacionEstadia(int* opciones,int id);


#endif /* MENU_H_ */
