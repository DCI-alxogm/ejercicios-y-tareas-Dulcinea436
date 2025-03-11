/*
Tarea realizada el 10 de Marzo 
*/

#include <stdio.h>
#include <math.h>
int main() {
   int opcion, sistema;
   double x, y, z, r, theta, phi;
   printf("Selecciona la transformación de coordenadas:\n");
   printf("1. Cartesianas a Esféricas\n");
   printf("2. Esféricas a Cartesianas\n");
   printf("3. Cartesianas a Cilíndricas\n");
   printf("4. Cilíndricas a Cartesianas\n");
   printf("Opción: ");
   scanf("%d", &opcion);
   printf("¿Deseas trabajar en grados (1) o radianes (2)?: ");
   scanf("%d", &sistema);
   switch (opcion) {
       case 1: // Cartesianas a Esféricas
           printf("Introduce x, y, z: ");
           scanf("%lf %lf %lf", &x, &y, &z);
           r = sqrt(x * x + y * y + z * z);
           theta = atan2(y, x); // Ángulo en el plano XY
           phi = acos(z / r);   // Ángulo con el eje Z
           if (sistema == 1) {  // Conversión a grados si es necesario
               theta = theta * 180 / M_PI;
               phi = phi * 180 / M_PI;
           }
           printf("Coordenadas Esféricas: r = %.2lf, theta = %.2lf, phi = %.2lf\n", r, theta, phi);
           break;
       case 2: // Esféricas a Cartesianas
           printf("Introduce r, theta, phi: ");
           scanf("%lf %lf %lf", &r, &theta, &phi);
           if (sistema == 1) {  // Conversión a radianes si es necesario
               theta = theta * M_PI / 180;
               phi = phi * M_PI / 180;
           }
           x = r * sin(phi) * cos(theta);
           y = r * sin(phi) * sin(theta);
           z = r * cos(phi);
           printf("Coordenadas Cartesianas: x = %.2lf, y = %.2lf, z = %.2lf\n", x, y, z);
           break;
       case 3: // Cartesianas a Cilíndricas
           printf("Introduce x, y, z: ");
           scanf("%lf %lf %lf", &x, &y, &z);
           r = sqrt(x * x + y * y);
           theta = atan2(y, x); // Ángulo en el plano XY
           if (sistema == 1) {  // Conversión a grados si es necesario
               theta = theta * 180 / M_PI;
           }
           printf("Coordenadas Cilíndricas: r = %.2lf, theta = %.2lf, z = %.2lf\n", r, theta, z);
           break;
       case 4: // Cilíndricas a Cartesianas
           printf("Introduce r, theta, z: ");
           scanf("%lf %lf %lf", &r, &theta, &z);
           if (sistema == 1) {  // Conversión a radianes si es necesario
               theta = theta * M_PI / 180;
           }
           x = r * cos(theta);
           y = r * sin(theta);
           printf("Coordenadas Cartesianas: x = %.2lf, y = %.2lf, z = %.2lf\n", x, y, z);
           break;
       default:
           printf("Opción no válida.\n");
   }
   return 0;
}
