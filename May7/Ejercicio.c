/*
Ejercicio creado el 5 de Mayo del 2025
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main() {

   FILE *entrada, *salida;
   int n;
   float lim_inf, lim_sup, paso;
   // Abrir archivo de entrada
   entrada = fopen("entrada.txt", "r");
   if (entrada == NULL) {
       printf("No se pudo abrir el archivo de entrada.\n");
       return 1;
   }
   // Leer datos
   fscanf(entrada, "%d", &n);
   fscanf(entrada, "%f", &lim_inf);
   fscanf(entrada, "%f", &lim_sup);
   fclose(entrada);
   // Declarar arreglos dinamicos
   float *x = (float *)malloc(n * sizeof(float));
   float *fx = (float *)malloc(n * sizeof(float));
   if (x == NULL || fx == NULL) {
       printf("Error al asignar memoria.\n");
       return 1;
   }
   // Calcular paso
   paso = (lim_sup - lim_inf) / (n - 1);
   // Llenar arreglos
   for (int i = 0; i < n; i++) {
       x[i] = lim_inf + i * paso;
       fx[i] = pow(x[i], 2) + 1;
   }
   // Escribir resultados en archivo
   salida = fopen("parabola.txt", "w");
   if (salida == NULL) {
       printf("No se pudo crear el archivo de salida.\n");
       return 1;
   }
   for (int i = 0; i < n; i++) {
       fprintf(salida, "x = %.2f, f(x) = %.2f\n", x[i], fx[i]);
   }
   fclose(salida);
   free(x);
   free(fx);
   printf("Evaluacion completada con arreglos. Resultados en parabola.txt\n");
   return 0;
}