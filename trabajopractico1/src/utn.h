/*
 * utn.h
 *
 *  Created on: 18 abr. 2020
 *      Author: Eugenia Peronace
 */

#ifndef UTN_H_
#define UTN_H_

int utn_getNumero(int* pResultado,char* mensaje,char* mensajeError,int minimo,int maximo,int reintentos);
int sumar(int operador1,int operador2);
int restar(int operador1,int operador2);
int multiplicar(int operador1,int operador2);
float dividir(int operador1,int operador2);

#endif /* UTN_H_ */
