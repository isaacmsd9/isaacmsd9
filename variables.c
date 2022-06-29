#include <stdio.h> /*Bibliotecas de funciones*/

int main() /*función main inicia la ejecución del programa*/
{
	/* codigo */

	char C = 'y'; /*variable caracter, tamaño requerido en la memoria 1 byte rango= 0...255*/         
	printf("\n%c\n",C); /*impresión del caracter*/

	int a = 20; /*variable entero, tamaño requerido en la memoria 2 bytes, rango= -32768...32767*/
	printf("\n%d\n",a); /*impresión de un número entero*/

	short e = -1; /*variable entero corto, tamaño requerido en la memoria 2 bytes, rango= -128...127*/
	printf("\n%d\n", e); /*impresión de un entero corto*/

	unsigned int u = 25; /*variable que no contiene signo -, se puede combinar con otro tipo de datos, tamaño requerido en la memoria 2 bytes, rango= 0...65535*/
	printf("\n%d\n", u); /*Para este caso es la impresión de un numero entero positivo*/

	signed int o = 97; /*variable entera que contiene signo -, se puede combinar con otro tipo de datos, tamaño requerido en la memoria 2 bytes, rango= 0...65535*/
	printf("\n%d\n", o); /*Para este caso es la impresión de un numero entero positivo*/

	long l = 5932; /*variable entero largo, tamaño requerido en la memoria 4 bytes, rango= -2147483648...2147483647*/
	printf("\n%ld\n",l); /*impresión de un número entero largo, para imprimir támbien se puede utilizar %li*/

	float f = 72.534; /*variable decimal, tamaño requerido en la memoria 4 bytes, rango= amplio*/
	printf( "\n%.3f\n",f); /*impresión de un número decimal, si no pones %.4f imprimira mas decimales, si  ultimo número es mayor a 5 redondea*/

    double d = 12323.877658; /*variable doble de punto flotante, tamaño requerido en la memoria 8 bytes, rango= doble de float*/
	printf( "\n%.6f\n",d); /*impresión de un número decimal, se puede declarar támbien con %.6lf , si no pones %.4f imprimira mas decimales, si  ultimo número es mayor a 5 redondea*/

	return 0; /*Termaina el programa*/
}