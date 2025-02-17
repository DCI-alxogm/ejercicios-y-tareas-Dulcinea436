/*Programa 17 de Febrero: Jerarquía de operaciones con enteros*/

#include <stdio.h>

int main(){
             int a,b,c,d;
             int e1, e2, e3, e4;

              a=3;
              b=4;
              c=5;
              d=7;
              e1=(a+b)*c/d;
              e2=((a+b)*c)/d;
              e3=(a+b)*(c/d);
              e4=a+b*c/d;
              printf("e=(a+b)*c/d=%d",e1);
              printf("e=((a+b)*c)/d=%d",e2);
              printf("e=(a+b)*(c/d)=%d",e3);
              printf("e=(a+b*c/d=%d",e4);
              
}