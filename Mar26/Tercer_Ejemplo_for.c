/*
Creado el 26 de Marzo del 2025
*/

#include <stdio.h>

int main()
{

     float temp_C, temp_K;
     float Temp_C=100, final=200,delta;
     int n=10,i;

    delta=(final-Temp_C)/n;
    for(i=0; i<n; i++){
           temp_K=temp_C+273.15;
           printf("%f %f\n", temp_C,temp_K);
           temp_C=temp_C+delta;

}

return(0);
}