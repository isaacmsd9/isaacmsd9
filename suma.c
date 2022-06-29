/* Programa: Suma, resta, multiplicación y división de dos números enteros y decimales*/

#include <stdio.h> /*Bibliotecas de funciones*/

int main() /*función main inicia la ejecución del programa*/
{
   /* variable float=decimal*/ float n1, n2, producto, suma, resta, division; /* declaración de las variables n1, n2, producto, suma, resta y división como un decimal*/

    printf( "\nIntroduzca primer numero:"); /*impresión en pantalla de n1*/
    scanf( "%f", &n1 );

    printf( "\nIntroduzca segundo numero:"); /*impresión en pantalla de n2*/
    scanf( "%f", &n2 );

    suma = n1 + n2; /*suma de la variable n1 con la variable n2*/
    resta = n1 - n2; /*resta de la variable n1 con la variable n2*/
    producto = n1 * n2; /*multiplicación de la variable n1 con la variable n2*/
    division = n1 / n2; /*división de la variable n1 con la variable n2*/

    printf( "\nLa suma es: %.2f\n",suma); /*impresión en pantalla del resultado de la suma*/
    printf( "\nLa resta es: %.2f\n",resta); /*impresión en pantalla del resultado de la resta*/
    printf( "\nLa multiplicacion es: %.2f\n",producto); /*impresión en pantalla del resultado de la multiplicación*/
    printf( "\nLa division es: %.2f\n",division); /*impresión en pantalla del resultado de la división*/

    return 0; /*fin de la función main*/
}