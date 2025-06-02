/*
Ejercicio de calculadora cientifica, realizado el 3 de Marzo del 2025
*/

#include <stdio.h>
#include <math.h>
// Función para convertir temperatura
void convertir_temperatura() {
   int opcion;
   double temp, resultado;
   printf("Seleccione la conversión de temperatura:\n");
   printf("1. Celsius a Fahrenheit\n");
   printf("2. Fahrenheit a Celsius\n");
   printf("Opción: ");
   scanf("%d", &opcion);
   if (opcion == 1) {
       printf("Ingrese la temperatura en Celsius: ");
       scanf("%lf", &temp);
       resultado = (temp * 9/5) + 32;
       printf("Resultado: %.2lf °F\n", resultado);
   } else if (opcion == 2) {
       printf("Ingrese la temperatura en Fahrenheit: ");
       scanf("%lf", &temp);
       resultado = (temp - 32) * 5/9;
       printf("Resultado: %.2lf °C\n", resultado);
   } else {
       printf("Opción no válida.\n");
   }
}
// Función para convertir coordenadas cartesianas a esféricas
void convertir_a_esfericas() {
   double x, y, z, r, theta, phi;
   printf("Ingrese las coordenadas cartesianas (x, y, z): ");
   scanf("%lf %lf %lf", &x, &y, &z);
   r = sqrt(x*x + y*y + z*z);
   theta = atan2(y, x);
   phi = acos(z / r);
   printf("Coordenadas esféricas:\n");
   printf("r = %.2lf, θ = %.2lf rad, φ = %.2lf rad\n", r, theta, phi);
}
// Función para convertir coordenadas cartesianas a cilíndricas
void convertir_a_cilindricas() {
   double x, y, z, r, theta;
   printf("Ingrese las coordenadas cartesianas (x, y, z): ");
   scanf("%lf %lf %lf", &x, &y, &z);
   r = sqrt(x*x + y*y);
   theta = atan2(y, x);
   printf("Coordenadas cilíndricas:\n");
   printf("r = %.2lf, θ = %.2lf rad, z = %.2lf\n", r, theta, z);
}
// Función para conversión de coordenadas
void convertir_coordenadas() {
   int opcion;
   printf("Seleccione el tipo de conversión:\n");
   printf("1. Cartesianas a Esféricas\n");
   printf("2. Cartesianas a Cilíndricas\n");
   printf("Opción: ");
   scanf("%d", &opcion);
   if (opcion == 1) {
       convertir_a_esfericas();
   } else if (opcion == 2) {
       convertir_a_cilindricas();
   } else {
       printf("Opción no válida.\n");
   }
}
int main() {
   int opcion, repetir;
   do {
       printf("\nSeleccione la operación:\n");
       printf("1. Conversión de Temperatura\n");
       printf("2. Conversión de Coordenadas\n");
       printf("Opción: ");
       scanf("%d", &opcion);
       if (opcion == 1) {
           convertir_temperatura();
       } else if (opcion == 2) {
           convertir_coordenadas();
       } else {
           printf("Opción no válida.\n");
       }
       printf("¿Desea realizar otra operación? (1 = Sí, 0 = No): ");
       scanf("%d", &repetir);
   } while (repetir == 1);
   printf("Programa finalizado.\n");
   return 0;
}
