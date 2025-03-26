/*
Creado el 26 de Marzo del 2025
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
   float temp_C, temp_K, final, delta;
   int n, i;
   char repetir = 's'; // Inicializamos en 's' para que entre al while la primera vez
   while (repetir == 's' || repetir == 'S') {
       // Solicitar valores al usuario
       printf("Ingrese la temperatura inicial en Celsius: ");
       scanf("%f", &temp_C);
       printf("Ingrese la temperatura final en Celsius: ");
       scanf("%f", &final);
       printf("Ingrese el numero de pasos: ");
       scanf("%d", &n);
       delta = (final - temp_C) / n;
       for (i = 0; i < n; i++) {
           temp_K = temp_C + 273.15;
           printf("Temp_C: %.2f | Temp_K: %.2f\n", temp_C, temp_K);
           temp_C += delta;
       }
       // Preguntar si desea repetir
       printf("¿Desea ejecutar nuevamente el programa? (s/n): ");
       scanf(" %c", &repetir); // Espacio antes de %c para evitar problemas con el buffer
   }
   exit (0);
}