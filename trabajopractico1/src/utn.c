/*
 * utn.c
 *
 *  Created on: 18 abr. 2020
 *      Author: Eugenia Peronace
 */

#include <stdio.h>
#include <stdlib.h>

//Funciones creadas para las operaciones de la calculadora:

//1)Código de la funcion multiplicar (cada operador recibe un tipo de dato INT y la funcion devuelve un INT)
int multiplicar(int operador1,int operador2)
{
	int resultado;
	resultado=operador1 * operador2;
	return resultado;
}

//2)//1)Código de la funcion sumar (cada operador recibe un tipo de dato INT y la funcion devuelve un INT)
int sumar(int operador1,int operador2)
{
	int resultado;
	resultado=operador1 + operador2;
	return resultado;
}

//3)//1)Código de la funcion restar (cada operador recibe un tipo de dato INT y la funcion devuelve un INT)
int restar(int operador1,int operador2)
{
	int resultado;
	resultado=operador1 - operador2;
	return resultado;
}

//4)//1)Código de la funcion dividir (cada operador recibe un tipo de dato INT y la funcion devuelve un FLOAT)
 float dividir(int operador1,int operador2)
{
	float resultado;

	if(operador2 != 0)
	{
		resultado=(float)operador1 / operador2;
	}
	else
	{
		printf("Ingrese un num valido, no se puede dividir por 0 \n");
	}

	return resultado;
}

 //Funcion creada para pedir y devolver un numero entero.
 int utn_getNumero(int* pResultado,char* mensaje,char* mensajeError,int minimo,int maximo,int reintentos)
 {
 	int retorno = -1;
 	int bufferInt;

 	if(pResultado != NULL && mensaje != NULL && mensajeError != NULL && minimo <= maximo && reintentos >= 0)
 	{
 		do
 		{
 			printf("%s", mensaje);
 			scanf("%d", &bufferInt);
 			if(bufferInt >= minimo && bufferInt <= maximo)
 			{
 				*pResultado = bufferInt;
 				retorno = 0;
 				break;
 			}
 			else
 			{
 				printf("%s", mensajeError);
 				reintentos --;
 			}
 		}while(reintentos >=0);
 	}
 	return retorno;
 }
