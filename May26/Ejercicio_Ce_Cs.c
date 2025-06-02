/*Cuarto ejercicio sobre la calculadora cientifica que convierte de grados y coordenadas
Con argumentos de entrada y de salida
Dulce González
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void convertir_temperatura(FILE *fin, FILE *fout) {
    int opcion;
    double temp, resultado;

    if (fscanf(fin, "%d", &opcion) != 1) {
        fprintf(stderr, "Error leyendo opción de temperatura\n");
        return;
    }

    if (opcion == 1) {
        if (fscanf(fin, "%lf", &temp) != 1) {
            fprintf(stderr, "Error leyendo temperatura Celsius\n");
            return;
        }
        resultado = (temp * 9.0 / 5.0) + 32.0;
        fprintf(fout, "Celsius a Fahrenheit: %.2lf °C = %.2lf °F\n", temp, resultado);
    } else if (opcion == 2) {
        if (fscanf(fin, "%lf", &temp) != 1) {
            fprintf(stderr, "Error leyendo temperatura Fahrenheit\n");
            return;
        }
        resultado = (temp - 32.0) * 5.0 / 9.0;
        fprintf(fout, "Fahrenheit a Celsius: %.2lf °F = %.2lf °C\n", temp, resultado);
    } else {
        fprintf(fout, "Opción de temperatura inválida.\n");
    }
}

void convertir_a_esfericas(FILE *fin, FILE *fout) {
    double x, y, z, r, theta, phi;

    if (fscanf(fin, "%lf %lf %lf", &x, &y, &z) != 3) {
        fprintf(stderr, "Error leyendo coordenadas cartesianas\n");
        return;
    }

    r = sqrt(x*x + y*y + z*z);
    theta = atan2(y, x);
    phi = acos(z / r);

    fprintf(fout, "Cartesiano (%.2lf, %.2lf, %.2lf) -> Esférico (r=%.2lf, θ=%.2lf rad, φ=%.2lf rad)\n", x, y, z, r, theta, phi);
}

void convertir_a_cilindricas(FILE *fin, FILE *fout) {
    double x, y, z, r, theta;

    if (fscanf(fin, "%lf %lf %lf", &x, &y, &z) != 3) {
        fprintf(stderr, "Error leyendo coordenadas cartesianas\n");
        return;
    }

    r = sqrt(x*x + y*y);
    theta = atan2(y, x);

    fprintf(fout, "Cartesiano (%.2lf, %.2lf, %.2lf) -> Cilíndrico (r=%.2lf, θ=%.2lf rad, z=%.2lf)\n", x, y, z, r, theta, z);
}

void convertir_coordenadas(FILE *fin, FILE *fout) {
    int opcion;

    if (fscanf(fin, "%d", &opcion) != 1) {
        fprintf(stderr, "Error leyendo opción de coordenadas\n");
        return;
    }

    if (opcion == 1) {
        convertir_a_esfericas(fin, fout);
    } else if (opcion == 2) {
        convertir_a_cilindricas(fin, fout);
    } else {
        fprintf(fout, "Opción de coordenadas inválida.\n");
    }
}

int main(int argc, char *argv[]) {
    if (argc != 3) {
        printf("Uso: %s archivo_entrada archivo_salida\n", argv[0]);
        return 1;
    }

    FILE *fin = fopen(argv[1], "r");
    if (fin == NULL) {
        perror("Error al abrir archivo de entrada");
        return 1;
    }

    FILE *fout = fopen(argv[2], "w");
    if (fout == NULL) {
        perror("Error al abrir archivo de salida");
        fclose(fin);
        return 1;
    }

    int opcion_principal;
    if (fscanf(fin, "%d", &opcion_principal) != 1) {
        fprintf(stderr, "Error leyendo opción principal\n");
        fclose(fin);
        fclose(fout);
        return 1;
    }

    if (opcion_principal == 1) {
        convertir_temperatura(fin, fout);
    } else if (opcion_principal == 2) {
        convertir_coordenadas(fin, fout);
    } else {
        fprintf(fout, "Opción principal inválida.\n");
    }

    fclose(fin);
    fclose(fout);

    printf("Operación finalizada, resultados guardados en %s\n", argv[2]);
    return 0;
}

