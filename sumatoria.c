#include <stdio.h>
int main()
{
	
    int N=1,i=1,opc;
    float suma;

    do
    {
    	printf("\n Indica el limite superior de la sumatoria:");
    	scanf("%i",&N);

    	for (int i = 1; i <= N; ++i)
    	{
    		suma = (i*(i+1)/2);
    	}
    	printf("\nLa sumatoria es: %f\n",suma);
    	printf("\nDesea realizar otra operacion 1-> SI 0-> NO:");
    	scanf("%d",&opc);
    } while (opc != 0);

	return 0;
}