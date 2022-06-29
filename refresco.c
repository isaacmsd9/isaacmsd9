/* Programa que muestra el total de ventas de variosproductos de una empresa de refrescos */

#include <stdio.h>
int main()
{

long int ventas_cola, ventas_naranja, ventas_limon;
float precio_cola, precio_naranja, precio_limon;
float total_cola, total_naranja, total_limon;

/* Lectura de datos: ventas y precio de cada producto */

printf ("\nDatos de la cola:\n\n");
printf ("\tVentas: ");
scanf ("%ld", &ventas_cola);
printf ("\tPrecio: ");
scanf ("%f", &precio_cola);
printf ("\nDatos de la naranja:\n\n");
printf ("\tVentas: ");
scanf ("%ld", &ventas_naranja);
printf ("\tPrecio: ");
scanf ("%f", &precio_naranja);
printf ("\nDatos del limon:\n\n");
printf ("\tVentas: ");
scanf ("%ld", &ventas_limon);
printf ("\tPrecio: ");
scanf ("%f", &precio_limon);

/* Proceso */

total_cola = ventas_cola*precio_cola;
total_naranja = ventas_naranja*precio_naranja;
total_limon = ventas_limon*precio_limon;

/* Salida tabulada */

printf ("\n\tProducto | Ventas |  Precio Total\n");
printf ("----------------------------------------------\n");
printf ("\nCola    %7ld  | %4.2f  | $%9.2f\n",ventas_cola, precio_cola, total_cola);
printf ("Naranja %7ld  | %4.2f  | $%9.2f\n",ventas_naranja, precio_naranja, total_naranja);
printf ("Limon   %7ld  | %4.2f  | $%9.2f\n",ventas_limon, precio_limon, total_limon);
printf ("\n----------------------------------------------\n");
printf (" \nTOTAL $%9.2f\n",total_cola+total_naranja+total_limon);

return 0;
}