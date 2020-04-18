/*
 ============================================================================
 Name        : trabajopractico1.c
 Author      : Eugenia Peronace
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "utn.h"

int main(void)
{
	setbuf(stdout,NULL);
	int A;
	int B;
	int suma;
	int resta;
	int multiplicacion;
	float division;
	int operaciones;
	int respuesta;

	//Hago un DO para que el código que se encuentra dentro se ejecute la primera vez y
	// se siga ejecutando hasta que el usuario ingrese la opción número 5 (condición que corta
	// el programa)

	do
	{	//Pido 2 números y guardo sus valores en la dirección de memoria de cada variable.
		printf("Ingrese un número: \n");
		scanf("%d",&A);

		printf("Ingrese otro número: \n");
		fflush(stdin);
		scanf("%d",&B);

		//Si se cumple la función utn_getNumero, es decir si el usuario selecciona una opción que esté dentro de mi minimo 1 y mi máximo 5, entonces mi función va
		//a devolver un 0 y si no pudo obtener un número entre 1 y 5 devolverá un número negativo. Si responde mal le damos 2 reintentos al usuario.

		respuesta = utn_getNumero(&operaciones,"Seleccione una opcion:\n1-Sumar\n2-Restar\n3-Multiplicar\n4-Dividir\n5-Salir\n","No es una opción válida\n",1,5,2);
		if(respuesta==0)
		{
			//Creo un menú de opciones haciendo un switch, para que el usuario elija la operacion a ralizar
			switch (operaciones)
			{
				case 1:
					suma = sumar(A,B);
					printf("El resultado de A+B es: %d \n",suma);
					break;

				case 2:
					resta = restar(A,B);
					printf("El resultado de A-B es %d \n",resta);
					break;

				case 3:
					multiplicacion = multiplicar(A,B);
					printf("El resultado de A*B es %d \n",multiplicacion);
					break;

				case 4:
					division = dividir(A,B);
					printf("El resultado de A/B es %.2f \n",division);
					break;
			}
		}
	}while(operaciones != 5); //Si el usuario selecciona la opción número 5, corta el programa.


return 0;

}//Fin de la función main
