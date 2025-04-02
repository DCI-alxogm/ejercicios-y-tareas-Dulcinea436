/*
Tarea 2, del 2 de Abril del 2025
*/

#include <stdio.h>

int esPrimo(int num) {
   if (num < 2) return 0;
   for (int i = 2; i * i <= num; i++) {
       if (num % i == 0) return 0;
   }
   return 1;
}
int main() {
   int inicio, fin;
   int intervaloValido; 
   do {
       intervaloValido = 1; 
       // Solicitar al usuario el intervalo
       printf("Ingrese el inicio del intervalo: ");
       scanf("%d", &inicio);
       printf("Ingrese el fin del intervalo: ");
       scanf("%d", &fin);
       if (inicio > fin) {
           printf("Error: El inicio debe ser menor o igual al fin.\n");
           intervaloValido = 0; 
           continue;
       }
       int contador = 0;
       int primos[100]; 
       
       for (int i = inicio; i <= fin; i++) {
           if (esPrimo(i)) {
               if (contador < 100) {
                   primos[contador++] = i;
               } else {
                   printf("Error: El intervalo contiene más de 100 números primos. Intente de nuevo.\n");
                   intervaloValido = 0; 
                   break;
               }
           }
       }
       if (intervaloValido == 0) continue; 
       
       printf("Numeros primos en el intervalo [%d, %d]:\n", inicio, fin);
       for (int i = 0; i < contador; i++) {
           printf("%d ", primos[i]);
           if ((i + 1) % 20 == 0) printf("\n");
       }
       printf("\n");
   } while (intervaloValido == 0); // Repetir mientras el intervalo sea inválido
   return 0;
}