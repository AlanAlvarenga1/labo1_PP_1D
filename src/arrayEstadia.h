/*
 * arrayEstadia.h
 *
 *  Created on: 11 oct. 2021
 *      Author: Alan
 */

#ifndef ARRAYESTADIA_H_
#define ARRAYESTADIA_H_
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#include "menu.h"
#include "input.h"

typedef struct {
	int dia;
	int mes;
	int anio;
}sCalendario;

typedef struct {
	int id;
	int idDuenio;
	int telefonoDuenio;
	char nombreDuenio[maxCharDuenios];
	int iDuenio;
	int idPerro;
	int iPerro;
	sCalendario fecha;
	int estaVacio;
}sEstadiaDiaria;
/**
 * @fn void inicializarGuarderia(sEstadiaDiaria*, int)
 * @brief Deja a los espacios de la estructura de estadia en vacio
 *
 * @param lista Estructura de estadia
 * @param max Numero maximo de arrays en la estructura de estadias
 */
void inicializarGuarderia (sEstadiaDiaria* lista,int max);
/**
 * @fn void ordenarEstadias(sEstadiaDiaria*, int)
 * @brief Ordena por fecha o por nombre la lista de las estadias
 *
 * @param lista Estructura de estadia
 * @param max  Numero maximo de arrays en la estructura de estadias
 */
void ordenarEstadias(sEstadiaDiaria* lista, int max);
/**
 * @fn void listarEstadias(sEstadiaDiaria*, int)
 * @brief Muestra la lista de las estadias registradas
 *
 * @param lista Estructura de estadia
 * @param max  Numero maximo de arrays en la estructura de estadias
 */
void listarEstadias(sEstadiaDiaria* lista, int max);
/**
 * @fn int buscarEstadiaID(sEstadiaDiaria*, char*, char*, int)
 * @brief Busca el ID de una estadia registrada
 *
 * @param lista Estructura de estadia
 * @param mensajeBuscarID Mensaje mostrado al momento de buscar un ID
 * @param mensajeError Mensaje mostrado al momento en el que ocurre un error en la busqueda de un ID
 * @param max  Numero maximo de arrays en la estructura de estadias
 * @return
 */
int buscarEstadiaID(sEstadiaDiaria* lista,char* mensajeBuscarID,char* mensajeError, int max);
/**
 * @fn void printUnaEstadia(sEstadiaDiaria*, int)
 * @brief Imprime una sola estadia segun la posicion indicada
 *
 * @param lista Estructura de estadia
 * @param i Indica la posicion de la estadia que se quiere imprimir
 */
void printUnaEstadia (sEstadiaDiaria* lista, int i);
/**
 * @fn sCalendario tomarFecha(char*, char*, char*, char*)
 * @brief Toma las fechas de la estructura de fechas
 *
 * @param mensajeDia Mensaje mostrado al pedir el dia
 * @param mensajeMes Mensaje mostrado al pedir el mes
 * @param mensajeAnio Mensaje mostrado al pedir el año
 * @param mensajeError Mensaje mostrado al momento en el que ocurre un error
 * @return retorna todos los datos recaudados a la estructura principal
 */
sCalendario tomarFecha(char* mensajeDia,char* mensajeMes,char* mensajeAnio,char* mensajeError);
/**
 * @fn void mostrarFecha(sCalendario)
 * @brief Muestra las fechas de la estructura de calendario
 *
 * @param fecha Es la estructura calendario perteneciente a la estructura principal
 */
void mostrarFecha(sCalendario fecha);


#endif /* ARRAYESTADIA_H_ */
