/*Segundo ejercicio sobre la calculadora cientifica que convierte de grados a coordenadas
Con argumentos de entrada pero no de salida 
Dulce González
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void convertir_temperatura(int tipo, double valor) {
    double resultado;
    if (tipo == 1) {
        // Celsius a Fahrenheit
        resultado = (valor * 9.0 / 5.0) + 32.0;
        printf("%.2lf °C = %.2lf °F\n", valor, resultado);
    } else if (tipo == 2) {
        // Fahrenheit a Celsius
        resultado = (valor - 32.0) * 5.0 / 9.0;
        printf("%.2lf °F = %.2lf °C\n", valor, resultado);
    } else {
        printf("Tipo de temperatura inválido\n");
    }
}

void convertir_a_esfericas(double x, double y, double z) {
    double r = sqrt(x*x + y*y + z*z);
    double theta = atan2(y, x);
    double phi = acos(z / r);
    printf("Cartesiano (%.2lf, %.2lf, %.2lf) -> Esférico (r=%.2lf, θ=%.2lf rad, φ=%.2lf rad)\n", x, y, z, r, theta, phi);
}

void convertir_a_cilindricas(double x, double y, double z) {
    double r = sqrt(x*x + y*y);
    double theta = atan2(y, x);
    printf("Cartesiano (%.2lf, %.2lf, %.2lf) -> Cilíndrico (r=%.2lf, θ=%.2lf rad, z=%.2lf)\n", x, y, z, r, theta, z);
}

int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("Uso: %s archivo_entrada\n", argv[0]);
        return 1;
    }

    FILE *fin = fopen(argv[1], "r");
    if (fin == NULL) {
        printf("No se pudo abrir el archivo %s\n", argv[1]);
        return 1;
    }

    int tipo_operacion;
   

    while (fscanf(fin, "%d", &tipo_operacion) != EOF) {
        if (tipo_operacion == 1) {
            int tipo_temp;
            double valor_temp;
            fscanf(fin, "%d %lf", &tipo_temp, &valor_temp);
            convertir_temperatura(tipo_temp, valor_temp);
        } else if (tipo_operacion == 2) {
            int tipo_coord;
            double x, y, z;
            fscanf(fin, "%d %lf %lf %lf", &tipo_coord, &x, &y, &z);
            if (tipo_coord == 1) {
                convertir_a_esfericas(x, y, z);
            } else if (tipo_coord == 2) {
                convertir_a_cilindricas(x, y, z);
            } else {
                printf("Tipo de coordenada inválido\n");
            }
        } else {
            printf("Tipo de operación inválido\n");
            // Puedes decidir ignorar o salir con error
        }
    }

    fclose(fin);
    return 0;
}


