/* 
Ejemplo con la instrucción de While
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{

    float temp_C,temp_K;
    float inicial=100, final=200,delta;
    int n=10;
    
    delta=(final-inicial)/n;
    temp_C=inicial;
    
    while(temp_C<=final){
        temp_K=temp_C+273.15;
        printf("%f %f",temp_C, temp_K);
        temp_C=temp_C+delta;
        
    }
    exit(0);
}
