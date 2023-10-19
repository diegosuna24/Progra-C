#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void multiplicarPorDos(int *ap);
void sumarAElementos(int *p, int valor, int tamano);
int arreglo[7];
int *ap = arreglo;

int main() {
    srand(time(NULL));

    // parte 1
    printf("PARTE 1\n");
    int x = 5;
    int* ap = &x;
    printf("El valor de x: %d\n", x);
    printf("El valor al que apunta ptr: %d\n", *ap);
    printf("\n\n\n\n");


    // parte 2
    printf("PARTE 2\n");
    multiplicarPorDos(ap);
    printf("El valor de la multiplcacion es: %d\n", x);
    printf("\n\n\n\n");

    // parte 3
    printf("PARTE 3\n");

    for (int i=0;i<7;i++){
        int num;
        do {
            num = 1 + rand() % 50; 
        } while (repetido(arreglo, i, num)); 
        arreglo[i] = num; 
    }
    for (int i=0;i<7;i++){
    }
    printf("\n\n\n\n");


    // parte 4
    printf("PARTE 4\n");

    int arreglo2[] = {1, 2, 3, 4, 5, 6, 7};
    int tamano = sizeof(arreglo2);

    // Declarar un puntero y asignarlo al arreglo
    int *ptr = arreglo;

    // Llamada a la función para sumar un valor a cada elemento del arreglo
    sumarAElementos(ptr, 5, tamano);



    return 0;
}


void multiplicarPorDos(int *ap) {
    *ap = *ap * 2;
}

int repetido(int *ar, int n, int num) {
    for (int i=0;i<n;i++) {
        if (ar[i] == num) {
            return 1; 
        }
    }
    return 0; 
}

void sumarAElementos(int *p, int valor, int tamano){
    for (int i=0;i<tamano; i++){
        *(p + i) += valor;

}}




