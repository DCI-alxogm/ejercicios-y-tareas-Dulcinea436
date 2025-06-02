/*Tercer ejercicio sobre la calculadora cientifica que convierte de grados a coordenadas
Con argumentos de salida pero sin entrada 
Dulce González
*/

#include <stdio.h>
#include <math.h>

void convertir_temperatura(FILE *fout) {
    int opcion;
    double temp, resultado;
    printf("Seleccione la conversión de temperatura:\n");
    printf("1. Celsius a Fahrenheit\n");
    printf("2. Fahrenheit a Celsius\n");
    printf("Opción: ");
    scanf("%d", &opcion);

    if (opcion == 1) {
        printf("Ingrese la temperatura en Celsius: ");
        scanf("%lf", &temp);
        resultado = (temp * 9.0 / 5.0) + 32.0;
        printf("Resultado: %.2lf °F\n", resultado);
        fprintf(fout, "Celsius a Fahrenheit: %.2lf °C = %.2lf °F\n", temp, resultado);
    } else if (opcion == 2) {
        printf("Ingrese la temperatura en Fahrenheit: ");
        scanf("%lf", &temp);
        resultado = (temp - 32.0) * 5.0 / 9.0;
        printf("Resultado: %.2lf °C\n", resultado);
        fprintf(fout, "Fahrenheit a Celsius: %.2lf °F = %.2lf °C\n", temp, resultado);
    } else {
        printf("Opción no válida.\n");
        fprintf(fout, "Opción de temperatura inválida.\n");
    }
}

void convertir_a_esfericas(FILE *fout) {
    double x, y, z, r, theta, phi;
    printf("Ingrese las coordenadas cartesianas (x y z): ");
    scanf("%lf %lf %lf", &x, &y, &z);
    r = sqrt(x*x + y*y + z*z);
    theta = atan2(y, x);
    phi = acos(z / r);

    printf("Coordenadas esféricas:\n");
    printf("r = %.2lf, θ = %.2lf rad, φ = %.2lf rad\n", r, theta, phi);
    fprintf(fout, "Cartesiano (%.2lf, %.2lf, %.2lf) -> Esférico (r=%.2lf, θ=%.2lf rad, φ=%.2lf rad)\n", x, y, z, r, theta, phi);
}

void convertir_a_cilindricas(FILE *fout) {
    double x, y, z, r, theta;
    printf("Ingrese las coordenadas cartesianas (x y z): ");
    scanf("%lf %lf %lf", &x, &y, &z);
    r = sqrt(x*x + y*y);
    theta = atan2(y, x);

    printf("Coordenadas cilíndricas:\n");
    printf("r = %.2lf, θ = %.2lf rad, z = %.2lf\n", r, theta, z);
    fprintf(fout, "Cartesiano (%.2lf, %.2lf, %.2lf) -> Cilíndrico (r=%.2lf, θ=%.2lf rad, z=%.2lf)\n", x, y, z, r, theta, z);
}

void convertir_coordenadas(FILE *fout) {
    int opcion;
    printf("Seleccione el tipo de conversión:\n");
    printf("1. Cartesianas a Esféricas\n");
    printf("2. Cartesianas a Cilíndricas\n");
    printf("Opción: ");
    scanf("%d", &opcion);

    if (opcion == 1) {
        convertir_a_esfericas(fout);
    } else if (opcion == 2) {
        convertir_a_cilindricas(fout);
    } else {
        printf("Opción no válida.\n");
        fprintf(fout, "Opción de coordenadas inválida.\n");
    }
}

int main() {
    int opcion, repetir;
    FILE *fout = fopen("salida.txt", "w");  // Archivo para salida

    if (fout == NULL) {
        printf("Error al crear el archivo de salida.\n");
        return 1;
    }

    do {
        printf("\nSeleccione la operación:\n");
        printf("1. Conversión de Temperatura\n");
        printf("2. Conversión de Coordenadas\n");
        printf("Opción: ");
        scanf("%d", &opcion);

        if (opcion == 1) {
            convertir_temperatura(fout);
        } else if (opcion == 2) {
            convertir_coordenadas(fout);
        } else {
            printf("Opción no válida.\n");
            fprintf(fout, "Opción inválida en menú principal.\n");
        }

        printf("¿Desea realizar otra operación? (1 = Sí, 0 = No): ");
        scanf("%d", &repetir);
    } while (repetir == 1);

    fclose(fout);
    printf("Resultados guardados en 'salida.txt'.\n");
    return 0;
}

