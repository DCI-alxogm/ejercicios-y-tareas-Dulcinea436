/*
Segundo ejercicio del examen del 19 de Marzo del 2025
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
   int opcion;
   float celsius, fahrenheit;
   int a, b, c;

           printf("Seleccione una opcion: \n");
           printf("1. Convertir grados Celsius a Fahrenheit\n");
           printf("2. Verificar si a es multiplo de b\n");
           printf("3. Verificar si a, b y c son multiplos entre si\n");
           scanf("%d", &opcion);

   switch (opcion) {

       case 1:
           printf("Ingrese la temperatura en grados Celsius: ");
           scanf("%f", &celsius);
           fahrenheit = (celsius * 9 / 5) + 32;
           printf("La temperatura en Fahrenheit es: %.2f\n", fahrenheit);
           break;

       case 2:
           printf("Ingrese dos numeros (a y b): ");
           scanf("%d %d", &a, &b);
           if (b != 0 && a % b == 0) {
               printf("%d es multiplo de %d.\n", a, b);
           } else if (b == 0) {
               printf("No se puede dividir por cero.\n");
           } else {
               printf("%d no es multiplo de %d.\n", a, b);
           }
           break;

       case 3:
           printf("Ingrese tres numeros (a, b y c): ");
           scanf("%d %d %d", &a, &b, &c); 
           if (b != 0 && c != 0) {
               if (a % b == 0 && a % c == 0) {
                   printf("%d es multiplo de %d y %d.\n", a, b, c);
               } else {
                   printf("%d no es multiplo de %d y %d.\n", a, b, c);
               }
           } else {
               printf("No se puede dividir por cero.\n");
           }
           break;
       default:
           printf("Opcion no valida\n");
           break;
   }
   exit(0);
}