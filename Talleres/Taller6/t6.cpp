#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void multiplicarPorDos(int *ap);
void sumarAElementos(int *p,int valor,int tamano);
int repetido(int *ar,int n,int num);

int arreglo[7];
int *ap=arreglo;

int main(){
    srand(time(NULL));

    // parte 1
    printf("PARTE 1\n");
    int x=5;
    int* ap1=&x; 
    printf("El valor de x: %d\n",x);
    printf("El valor al que apunta ap1: %d\n",*ap1);
    printf("\n\n\n\n");

    // parte 2
    printf("PARTE 2\n");
    multiplicarPorDos(ap1); 
    printf("El valor de la multiplicacion es: %d\n",x);
    printf("\n\n\n\n");

    // parte 3
    printf("PARTE 3\n");
    for (int i=0;i<7;i++){
        int num;
        do {
            num=1+rand()% 50;
        } while(repetido(arreglo,i,num));
        arreglo[i]=num;
        printf("%d ",arreglo[i]);
    }
    printf("\n\n\n\n");

    // parte 4
    printf("PARTE 4\n");
    int arreglo2[]={1,2,3,4,5,6,7};
    int tamano=6;
    int *ptr=arreglo2;
    sumarAElementos(ptr,24,tamano);
    printf("\n");
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

void sumarAElementos(int *p, int valor, int tamano) {
    for (int i=0; i<tamano; i++) {
        *(p + i) += valor;
        printf("%d ", *(p + i));
    }
}