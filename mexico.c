#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL,"Spanish");
	printf("Gracias a locale.h puedo poner palabras acentuadas como... México :')");
	return 0;
}