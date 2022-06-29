#include <stdio.h>
/*Programa que calcula el cambio en una maquina expendedora*/

int main()
{
  float euros_a_devolver, falta_por_devolver;
  int monedas_50c, monedas_20c, monedas_10c, monedas_5c;
  
  /* Lectura de datos: euros_a_devolver */
  printf ("\nEuros a devolver: ");
  scanf ("%f", &euros_a_devolver);
  
  /* Proceso */
  falta_por_devolver=euros_a_devolver;
  monedas_50c=falta_por_devolver/0.5;
  falta_por_devolver=falta_por_devolver-0.5*monedas_50c;
  monedas_20c=falta_por_devolver/0.2;
  falta_por_devolver=falta_por_devolver-0.2*monedas_20c;
  monedas_10c=falta_por_devolver/0.1;
  falta_por_devolver=falta_por_devolver-0.1*monedas_10c;
  monedas_5c=falta_por_devolver/0.05;
  
  /* Salida */
  printf ("\nLa cantidad de %f euros se devolvera asi:\n\n",
  euros_a_devolver);
  printf ("- %d monedas de 50 centimos\n", monedas_50c);
  printf ("- %d monedas de 20 centimos\n", monedas_20c);
  printf ("- %d monedas de 10 centimos\n", monedas_10c);
  printf ("- %d monedas de 5 centimos\n", monedas_5c);

  return 0;
}