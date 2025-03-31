/*
Segundo ejercicio del 31 de Marzo del 2025
*/

#include <stdio.h>
#include <stdlib.h>

int main () 
{

     int inicio, fin, incremento;
     
     printf("Ingrese el valor inicial: ");
     scanf("%d", &inicio);
     printf("Ingrese el valor final: ");
     scanf("%d", &fin);
     printf("Ingrese el valor del incremento: ");
     scanf("%d", &incremento);

     if(incremento <= 0) {
       printf("El incremento debe ser positivo.\n");
       return 1;
}

for(int x = inicio; x <= fin; x +=incremento) {
     printf("x: %d, x^2: %d\n", x, x * x);
}

exit (0);
}