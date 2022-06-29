/*
    Instrucción Swith en C
*/

#include <stdio.h> /*Bibliotecas de funciones*/

int main() /*función main inicia la ejecución del programa*/
{
	int casos;
	printf("\nIntroduce un numero :");
	scanf("%d",&casos);

	switch(casos)
	{
		case 1:
		printf("\nElegiste el primer caso\n");
		break;

		case 2:
		printf("\nElegiste el segundo caso\n");
		break;

		case 3:
		printf("\nElegiste el tercer caso\n");
		break;

		case 4:
		printf("\nElegiste el cuarto caso\n");
		break;

		case 5:
		printf("\nElegiste el quinto caso\n");
		break;

		default:
		printf("\nNo encontramos tu caso\n");
		break;
	}	

	return 0; /*fin de la función main cuando llegue a 10*/
}