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
int registrarEstadia (sEstadiaDiaria* registroEstadia,sPerro *listaPerros,int lenChar,int lenPerros,int ultimoID,int max);
/**
 * @fn void modificarReserva(sEstadiaDiaria*, sPerro*)
 * @brief Funcion que sirve para modificar una reserva de estadia
 *
 * @param registroEstadia Estructura que contiene la lista de datos de las estadias
 * @param listaPerros Estructura que contiene la lista de datos de los perros
 */
void modificarReserva (sEstadiaDiaria* registroEstadia, sPerro* listaPerro);



#endif /* NEXO_H_ */
