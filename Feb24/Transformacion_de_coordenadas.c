/* 
Creado el 24 de Febrero del 2025
*/

#include <stdio.h>
#include <math.h>

int main(){

          float x,y,z; //coordenadas cartesianas de entrada
          float r,thetha,phi; //coordenadas esfericas de salida 
          float rc,thetha_c,zc; //coordenadas cilindricas de salida

         x=1;
         y=1;
         z=1;

         printf(" Introduce los valores de las variables x,y,z que quieres convertir\n");
         scanf("%f %f %f",&x,&y,&z);
     
         // Realizo operaciones de transformacion de coordenadas
         //Coordenadas esfericas
         r = sqrt(x*x+y*y+z*z);
         thetha = atan(y/x);
        phi = acos(z/sqrt(x*x+y*y+z*z));

         //Coordenadas cilindricas
         rc = sqrt(x*x+y*y);
         thetha_c = atan(y/x);
         zc = z;

        //SALIDA
        printf(" Las coordenadas esfericas son r= %f , theta= %f , phi= %f \n",r,thetha,phi);
        printf(" Las coordenadas cilindricas son r= %f , theta= %f , z= %f \n",rc,thetha_c,zc);
        exit(0);
}

