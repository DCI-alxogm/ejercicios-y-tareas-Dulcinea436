/* Creado y mejorado para el 28 de Abril del 2025*/

#include <stdio.h>
 
int main() {
    float peso[4] = {50.0, 49.6, 49.8, 49.9};
    float elasticidad[4] = {11.5, 18.2, 24.5, 31.2};
    int n = 4;
    
    float sum_x = 0, sum_y = 0, sum_xy = 0, sum_x2 = 0;
    for (int i = 0; i < n; i++) {
        sum_x += peso[i];
        sum_y += elasticidad[i];
        sum_xy += peso[i] * elasticidad[i];
        sum_x2 += peso[i] * peso[i];
    }
    
    float pendiente = (n * sum_xy - sum_x * sum_y) / (n * sum_x2 - sum_x * sum_x);
    float intercepto = (sum_y - pendiente * sum_x) / n;
    
    printf("La ecuacion de la recta es: y = %.4fx + %.4f\n", pendiente, intercepto);
    printf("Gracias por ejecutarme, ten un lindo dia\n");
    
    return 0;
}
