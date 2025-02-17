/*Programa 17 de Febrero: Tarea valores desde la terminal*/

#include <stdio.h>

int main(){
             int a,b,c,d;
             int e1, e2, e3, e4;

             printf("introduce el valor de a:");
             scanf("%d", &a);

             printf("introduce el valor de b:");
             scanf("%d", &b);

             printf("introduce el valor de c:");
             scanf("%d", &c);

             printf("introduce el valor de d:");
             scanf("%d", &d);

              e1=(a+b)*c/d;
              e2=((a+b)*c)/d;
              e3=(a+b)*(c/d);
              e4=a+b*c/d;

              printf("e=(a+b)*c/d=%d\n",e1);
              printf("e=((a+b)*c)/d=%d\n",e2);
              printf("e=(a+b)*(c/d)=%d\n",e3);
              printf("e=(a+b*c/d=%d\n",e4);
              
              return 0;

}