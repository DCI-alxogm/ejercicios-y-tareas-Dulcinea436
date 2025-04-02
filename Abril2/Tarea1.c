/*
Tarea 1, del 2 de Abril del 2025
*/

#include <stdio.h>

#include <math.h>

int main() {

    double x_inicio, x_fin, paso, x;

    printf("Ingrese el valor inicial de x: ");

    scanf("%lf", &x_inicio);

    printf("Ingrese el valor final de x: ");

    scanf("%lf", &x_fin);

    printf("Ingrese el espaciamiento: ");

    scanf("%lf", &paso);

    printf("\n%-10s %-10s %-10s %-10s %-10s\n", "x", "exp(x)", "log(x)", "sin(x)", "cos(x)", "sqrt(x)");

    printf("\n");

    // Inicializar x

    x = x_inicio;


    do {

        if (x > 0) {

            printf("%-10.2lf %-10.2lf %-10.2lf %-10.2lf %-10.2lf\n", 

                   x, exp(x), log(x), sin(x), cos(x), sqrt(x));

        } else {

            printf("%-10.2lf %-10.2lf %-10s %-10.2lf %-10.2lf %-10s\n", 

                   x, exp(x), "N/A", sin(x), cos(x), "N/A");

        }

        x += paso;

    } while (x <= x_fin);

    return 0;

} 