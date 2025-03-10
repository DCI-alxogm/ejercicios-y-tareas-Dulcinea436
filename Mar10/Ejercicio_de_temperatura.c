/*
Ejercicio del 10 de Marzo del 2025
*/

#include <stdio.h>
#include <math.h>

      //Funcion que convierte Clesius a Kelvin
      double celsiusAKelvin(double celsius) {
 
       return celsius + 273.15;
   }
  
      //Funcion que convierte Kelvin a Celsius
      double kelvinACelsius(double kelvin) {

       return kelvin - 273.15;
}

        int main() {

       int opcion;
       double temperatura, resultado;

       printf("Conversor de Temperatura\n");
       printf("1. Celsius a Kelvin\n");
       printf("2. Kelvin a Celsius\n");
       printf("Seleccione una opcion (1 o 2): ");
       scanf("%d", &opcion);

       switch(opcion) {

           case 1:

                printf("Ingrese la temperatura en Celsius: ");

                scanf("%lf", &temperatura);

                resultado = celsiusAKelvin(temperatura);

                printf("La temperatura en Kelvin es: %.2lf K\n", resultado);

                break;

           case 2:

                printf("Ingrese la temperatura en Kelvin: ");

                scanf("%lf", &temperatura);

                resultado = kelvinACelsius(temperatura);

                printf("La temperatura en Celsius es: %2lf °C\n", resultado);

                break;

           default:

                printf("Opcion no valida. Intente de nuevo.\n");

    }

    return 0;

}

 