/*
Practica07_3_Punteros_Osuna_Acevedo_Diego
Diego Osuna Acevedo
8/11/2023
Argumentos en la linea de comandos, Ordenacion de palabras, Matriz multidimencional
*/
#include <stdio.h>

void PosicionMayor(int *matriz, int *filaPos, int *columnaPos);

int main() {
    int matriz[3][3] = {{12, 4, 44}, {11, 33, 8}, {9, 24, 22}};
    int suma = 0;
    int fMax, cMax;

    // Suma de la matriz
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            suma += *(*(matriz + i) + j);
        }
    }

    // Encontrar la posición del mayor elemento
   PosicionMayor(&matriz[0][0], &fMax, &cMax);

    printf("La suma de todos los elementos es: %d\n", suma);
    printf("La posicion del mayor elemento es: Fila %d, Columna %d\n", fMax + 1, cMax + 1);

    return 0;
}

// Función para encontrar la posición del mayor elemento en la matriz
void PosicionMayor(int *matriz, int *filaPos, int *columnaPos) {
    int max = *matriz;
    int filaMax = 0;
    int columnaMax = 0;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (*(matriz + i * 3 + j) > max) {
                max = *(matriz + i * 3 + j);
                filaMax = i;
                columnaMax = j;
            }
        }
    }

    *filaPos = filaMax;
    *columnaPos = columnaMax;
}