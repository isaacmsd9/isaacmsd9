/*
  Toma de Decisiones if
  operadores de Igualdad                     | Operadores de Relación
    ==  x es igual que y                           > x es mayor que y  
   !=  x es diferente que y                       < x es menor que y
                                                   >= x es mayor o igual que y
                                                   <= x es menor o igual que y
*/

#include <stdio.h> /*Bibliotecas de funciones*/

int main() /*función main inicia la ejecución del programa*/

{
	int edad;

	printf("\nIngresa tu edad:");
	scanf("%d",&edad);
	
	if (edad >= 18) /* condición */
	{
		printf("\nEres mayor de edad\n");/* codigo */
	}
	else if (edad == 17) /* condición */
	{
		printf("\nCasi eres mayor de edad\n");/* codigo */
	}
	else{
		printf("\nEres menor de edad\n");/* codigo */
	}
	return 0;
} /*fin de la función main*/