/*
Febrero 12, 2025
Dulce Gonzalez 
Primer programa, mostrando estructura, definicion de variable, imprimir y leer valores de variables en la pantalla.
*/

#include <stdlib.h> //Libreria estandar de C.
#include <stdio.h> //Libreria para interacion con la pantalla.

int main( ){
     char nombre[10];
     int edad;
     float temperatura;
     //Cuerpo del programa;
     printf ("Cual es tu nombre? \n");
     scanf("%s", nombre);
     printf("Hola, %s este es el segundo programa del curso PB2025\n",nombre); //el caracter "\n" indica un salto de linea.

     printf ("Introduce tu edad \n");
      scanf ("%i", &edad); // %i indica el tipo de variable (entero en este caso).
      printf ("¿Que temperatura marco el termometro la ultima vez que fuiste al supermercado? \n");
      scamf("%f", &temperatura);

      printf("Tu edad es: %i\n", edad);
      peintf("Tu ultimo registro de temperatura fue: %f\n", temperatura);
      exit(0);
}s


