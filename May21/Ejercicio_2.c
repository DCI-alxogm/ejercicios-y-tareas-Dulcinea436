/*
Este es el segundo ejemplo de la clase del 21 de Mayo
*/

#include <stdio.h>
int main() {
    int var = 20;
    int *ip = NULL;
 
    printf("La dirección inicial almacenada en el apuntador es %p\n", ip);
 
    ip = &var;
 
    printf("La dirección de la variable var es: %p\n", &var);
    printf("Dirección guardada en el apuntador ip: %p\n", ip);
    printf("El valor escrito en la dirección %p es: %d\n", ip, *ip);
    return 0;
}
