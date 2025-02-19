/*
19 de Febero del 2025
*/

#include <stdio.h> 
#include <stdlib.h>

int main(){
     float TC, TK; 
     printf("Introduce el valor de la temperatura en Celsius a convertir:\n");
     scanf("%f", &TC);
     TK= TC + 273.15;
     printf ("La temperatura en Kelvin es : %f \n",TK);
     return 0;
}