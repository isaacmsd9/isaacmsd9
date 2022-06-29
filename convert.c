/*
   Ciclo For en C
*/  

#include<stdio.h> /*Bibliotecas de funciones*/

int main() /*función main inicia la ejecución del programa*/
{
	/* codigo */

	int contador; /*variable de tipo entero*/ 
	for (int contador = 1/*valor de contador*/; contador <= 10/*hasta donde se ejecutara el bucle*/; contador++/*suma 1 a contador*/)
	                                                                {
	                    printf("\n%d\n", contador);/*impresión de la variable contador*/     /* codigo de for */
	                                                                }                                                                

	return 0; /*fin de la función main cuando llegue a 10*/
}