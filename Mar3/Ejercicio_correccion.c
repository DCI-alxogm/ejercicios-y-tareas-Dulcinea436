/* 
Ejercicio corregido el 3 de Marzo del 2025
*/

#include <stdio.h>
#include <string.h>

int main (){
              int numero,residuo;
              char opc[2];


             leernumero:
                         printf("Introduce el numero a revisar");
                         scanf("%i",&numero);
                         residuo=numero%2;
                         if(residuo==0){
                         printf("el numero %i es par\n",numero);
                          }else{
                         printf("el numero %i es impar\n",numero);
                         }
                         printf("¿Quieres revisar otro numero?\n");
                         scanf("%s",&opc);

                         if (strcmp(opc,"si")==0){
                                goto leernumero;
                         }else if (strcmp(opc, "no")==1){
                                printf("hasta la proxima\n");
                         }else{
                                printf("solo acepto si o no");
                         }

}


