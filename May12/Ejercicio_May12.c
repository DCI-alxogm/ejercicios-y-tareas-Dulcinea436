/*
Ejercicio realizado el 12 de Mayo del 2025
*/

#include <stdio.h>

int main (){ 
             char fname[100];
             FILE *fp;
             int i, j=0;
             int num_max=10;

            for (i=0; i<num_max; i++){
            //Creacion del nombre del archivo a crear y escribir en el 
            sprintf(fname, "salida_t%d%d. txt", j,i); //como printf pero guarda el string en la variable, en lugar de imprimirlo ...
            printf("%s\n", fname);
             fp=fopen(fname,"w"); // se abre el archivo para escritura
             fprintf(fp, "//abri y cerre archivo");// se cierra el archivo de escritura 
             fclose(fp);
             }


return(0);
}
