/*
Primer ejercicio del 31 de Marzo del 2025
*/

#include <stdio.h>
#include <stdlib.h>

int main () 
{
     int numero;

     do {
        printf("Ingrese un numero positivo:");
        scanf("%d", &numero);

        if(numero <= 0) {
           printf("Numeo invalido. Intenta de nuevo por favor, tu puedes.\n");
           }
      } while (numero <= 0);

      printf("Numero valido ingresado: %d\n", numero);

      printf("¿Deseas ingresar otro numero? (s/n): ");
      scanf("%c", &opcion); 

    } while (opcion == 's' || opcion == 'S');

      printf("Saliendo del programa.\n");
      
     exit(0);
}
