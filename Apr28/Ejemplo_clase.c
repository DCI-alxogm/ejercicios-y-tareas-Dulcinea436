/* 
Ejercicio de clase realizado el 28 de Abril del 2025
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
   int n_filas = 3, m_cols = 3;
   int i, j;
   float array_2d[3][3]; // Declaración del arreglo
   for (i = 0; i < n_filas; i++) {
       for (j = 0; j < m_cols; j++) {
           scanf("%f", &array_2d[i][j]);
       }
   }
   for (i = 0; i < n_filas; i++) {
       for (j = 0; j < m_cols; j++) {
           printf("%f\t", array_2d[i][j]);
       }
       printf("\n");
   }
   return 0;
}