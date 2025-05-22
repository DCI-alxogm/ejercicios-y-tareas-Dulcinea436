/*
Este es el primer ejercicio de la clase del 21 de Mayo
*/

#include <stdio.h>
int main() {
    int var = 20;
    int *ptr = NULL;
 
    if(ptr) {
        printf("La dirección de la variable var es: %p\n", &var);
        printf("Dirección guardada en el apuntador ptr: %p\n", ptr);
        printf("El valor escrito en la dirección %p es: %d\n", ptr, *ptr);
    } else {
        printf("No se ha asignado dirección al apuntador\n");
    }
 
    ptr = &var;
    printf("Después de hacer ptr=&var\n");
 
    if(ptr) {
        printf("\t La dirección de la variable var es: %p\n", &var);
        printf("\t Dirección guardada en el apuntador ptr: %p\n", ptr);
        printf("\t El valor escrito en la dirección %p es: %d\n", ptr, *ptr);
    } else {
        printf("\t No se ha asignado dirección al apuntador\n");
    }
 
    return 0;
}  
