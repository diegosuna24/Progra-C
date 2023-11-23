#include <string>
#include <stdio.h>

int sumaArreglo(int *arr, int tamano);


int main(){

    printf("Elige un ejercicio\n");
    int ejercicio;
    scanf("%d", &ejercicio);
    int arreglo[10];
    switch(ejercicio){

        case 1://suma de elementos de un arreglo
            for(int i = 0; i <10; i++){
                printf("Da el numero %d\n  ", i+1);
                scanf("%d", &arreglo[i]);
            } 
            printf("La suma es %d  ",sumaArreglo(arreglo,10));
            break;

        case 2:
        
            break;
        case 3:
            break;
        case 4:
            break;
        case 5:
            break;

}
}

int sumaArreglo(int *arr, int tamano) {
    int suma = 0;
    for (int i = 0; i < tamano; i++) {
        suma += *(arr + i);
    }
    return suma;
}