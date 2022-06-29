/*
  Ciclo do while en C
*/

#include <stdio.h> /*Bibliotecas de funciones*/

int main() /*función main inicia la ejecución del programa*/
{
	  /* codigo */

	int contador=1; /*variable entera con un valor igual a 1*/
	do{
		   printf("\n%i\n",contador);/*impresión del valor de contador*/ 
		   contador++;/*El valor de la variable contador se incremetara 1 es decir contador+1*/
	}
	while (contador <= 10); /*Si contador es menor o igual a 10 se ejecuta el codigo*/

	return 0; /*fin de la función main cuando llegue a 10*/
}