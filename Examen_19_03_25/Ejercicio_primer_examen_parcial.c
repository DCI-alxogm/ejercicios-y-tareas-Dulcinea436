/*
Primer examen parcial del 19 de marzo del 2025
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main() {
   int opcion;
   float base, altura, area;
   int numero, suma, digito;
   char letra;

           printf("Seleccione una opcion: \n");
           printf("1. Calcular el area de un rectangulo\n");
           printf("2. Convertir grados Celsius a Fahrenheit\n");
           printf("3. Verificar si un numero es multiplo de otro\n");
           printf("4. Sumar los digitos de un numero de dos cifras\n");
           scanf("%d", &opcion);

   switch (opcion) {

       case 1:
           printf("Ingrese la base y la altura del rectangulo: ");
           scanf("%f %f", &base, &altura);
           area = base * altura;
           printf("El area del rectangulo es: %.2f\n", area);
           break;

       case 2:
           printf("Ingrese la temperatura en grados Celsius: ");
           scanf("%f", &base);  // Uso de "base" para Celsius
           float fahrenheit = (base * 9 / 5) + 32;
           printf("La temperatura en Fahrenheit es: %.2f\n", fahrenheit);
           break;

       case 3:
           printf("Ingrese dos numeros: ");
           scanf("%d %d", &numero, &digito);
           if (digito != 0 && numero % digito == 0) {
               printf("%d es multiplo de %d.\n", numero, digito);
           } else if (digito == 0) {
               printf("No se puede dividir por cero.\n");
           } else {
               printf("%d no es multiplo de %d.\n", numero, digito);
           }
           break;

       case 4:
           printf("Ingrese un numero de dos cifras: ");
           scanf("%d", &numero);
           if (numero >= 10 && numero <= 99) {
               suma = (numero / 10) + (numero % 10);
               printf("La suma de los digitos es: %d\n", suma);
           } else {
               printf("El numero no es de dos cifras.\n");
           }
           break;
       default:
           printf("Opcion no valida\n");
           break;
   }
   exit (0);
}