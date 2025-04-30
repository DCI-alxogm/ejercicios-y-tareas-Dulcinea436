/*
Programa realizado el 30 de Abril del 2025
*/

#include <stdio.h>
int main() {

   int filas, columnas;
   float delta;

   // Solicitar datos al usuario
   printf("Ingrese el numero de filas: ");
   scanf("%d", &filas);
   printf("Ingrese el numero de columnas: ");
   scanf("%d", &columnas);
   printf("Ingrese la distancia entre puntos (delta): ");
   scanf("%f", &delta);
   printf("\nCoordenadas generadas:\n");

   // Generar y mostrar la reticula
   for (int i = 0; i < filas; i++) {
       for (int j = 0; j < columnas; j++) {
           float x = j * delta;
           float y = i * delta;
           printf("(%.2f, %.2f)\n", x, y);
       }
   }
   return 0;
}