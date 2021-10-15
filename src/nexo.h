/*
 * nexo.h
 *
 *  Created on: 11 oct. 2021
 *      Author: Alan
 */

#ifndef NEXO_H_
#define NEXO_H_

#include "arrayPerro.h"
#include "arrayEstadia.h"
#include "arrayDuenio.h"
#include "input.h"

/**
 * @fn int registrarEstadia(sEstadiaDiaria*, sPerro*, int, int, int, int)
 * @brief Registra cada estadia solicitada
 *
 * @param registroEstadia Estructura que contiene la lista de datos de las estadias
 * @param listaPerros Estructura que contiene la lista de datos de los perros
 * @param lenChar Tamaño maximo de los strings
 * @param lenPerros Cantidad maxima de perros
 * @param ultimoID Ultimo ID de estadia utilizada
 * @param max Cantidad maxima de estadias
 * @return Retorna si se hizo correctamente la carga
 */
int registrarEstadia (sEstadiaDiaria *registroEstadia,sPerro *listaPerros,sDuenio *listaDuenios,int lenChar,int lenPerros,int lenDuenios,int ultimoID,int max);
/**
 * @fn int bajaEstadia(sEstadiaDiaria*, int)
 * @brief Baja logicamente una estadia ya ocupada
 *
 * @param lista Estructura de estadia
 * @param max  Numero maximo de arrays en la estructura de estadias
 * @return retorna si se realizo exitosamente la funcion 0=SI -1=NO
 */
int bajaEstadia (sEstadiaDiaria* listaEstadias,sPerro* listaPerros,int max);
/**
 * @fn void modificarReserva(sEstadiaDiaria*, sPerro*)
 * @brief Funcion que sirve para modificar una reserva de estadia
 *
 * @param registroEstadia Estructura que contiene la lista de datos de las estadias
 * @param listaPerros Estructura que contiene la lista de datos de los perros
 */
void modificarReserva (sEstadiaDiaria* registroEstadia, sPerro* listaPerro, sDuenio* listaDuenios,int lenEstadias, int lenDuenios);
/**
 * @fn void listadoPerrosConEstadias(sEstadiaDiaria*, sPerro*, int, int)
 * @brief Muestra la lista de perros y sus respectivas reservas
 *
 * @param listaGuarderia Lista de datos de la guarderia
 * @param listaPerros Lista de perros
 * @param lenPerro Tamaño maximo de cantidad de perros
 * @param lenGuarderia Tamaño maximo de cantidad de guarderias
 */
void listadoPerrosConEstadias(sEstadiaDiaria *listaGuarderia,sPerro *listaPerros,int lenPerro, int lenGuarderia);



#endif /* NEXO_H_ */
