/*
Creado el 26 de Febrero del 2025
Imprimir los números para saber si este es par o impar
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){
            int numero, residuo;
            char opcion;
do{
            printf("Ingrese un numero: ");
            scanf("%d", &numero);

            residuo=numero % 2;
  
            printf("El residuo de %d %% 2 es: %d\n", numero, residuo);

            if (residuo == 0) {
               printf("El numero es par\n");
            } else {
               printf("El numero es impar\n");
            }

do {

               printf("¿Quieres agregar otro numero? (s/n) o escribe 'a' si aun no sabes hacerlo: ");
               scanf("%c", &opcion);

              if(opcion == 'a' || opcion = 0 'A') {
              printf ("No ha llegado a ese nivel del curso, no puede avanzar mas,\n");
}    
    
}   
         while (opcion == 'a' || opcion == 'A');

} 
           while(opcion == "s" || opcion == "n");
              printf("Programa terminado.\n");
}
              
return (0);

}                         