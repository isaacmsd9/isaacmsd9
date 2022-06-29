/*
    Directivas del Preprocesador
*/

#include <stdio.h> /*Bibliotecas de funciones*/ /* #include "nombre del archivo"*/

#define CUBO(a) a*a*a
#define PI 3.141516
int main(int argc, char const *argv[]) /*función main inicia la ejecución del programa*/
{
	int suma;
	suma= PI+3;
	printf("\n%i\n",suma );             /* codigo */
	
    int a = 3;
    printf("\nEl cubo de la variable es: %i\n", CUBO(a));

	return 0; /*fin de la función main*/
}