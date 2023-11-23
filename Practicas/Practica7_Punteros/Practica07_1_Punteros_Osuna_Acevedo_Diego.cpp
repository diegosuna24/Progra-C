/*
Practica07_1_Punteros_Osuna_Acevedo_Diego.cpp
Diego Osuna Acevedo
8/11/2023
Argumentos en la linea de comandos, Ordenacion de palabras, Matriz multidimencional
*/

#include <stdio.h>
#include <stdlib.h>

/*
Función: suma
Descripción: Se toman 2 argumentos desde la linea de comandos y se relizan diferentes operaciones.
Parámetros:
- num1: El primer número entero a sumar.
- num2: El segundo número entero a sumar.

*/
int main(int argc, char *argv[]) {

    printf("numeros de argumentos %d\n", argc);
  

    // Convertir los argumentos de cadena a enteros
    int num1 = atoi(argv[1]);
    int num2 = atoi(argv[2]);

    // Operaciones 
    printf("La suma de los numeros es: %d\n", num1 + num2);
    printf("La resta del segundonumero menos el primero es: %d\n", num2 - num1);
    printf("El producto de los numeros es: %d\n", num1 * num2);
    printf("La division de los numeros es: %d\n", num1 / num2);

    return 0;
}
