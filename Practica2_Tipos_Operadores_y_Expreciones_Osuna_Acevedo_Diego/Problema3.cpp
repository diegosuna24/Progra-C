#include<stdio.h>

int almacen [10];
int cont, espacio, cantidad, operacion;

int main(){
    do{
        printf("Elige un espacio del 0 al 9\n");
        scanf("%d",&espacio);
        printf("Quieres agragar o quitar? \n  Agregar==1\n  Quitar==0\n");
        scanf("%d",&operacion);
         printf("que cantidad? ");
        scanf("%d",&cantidad);
        if(operacion==1){
            if(almacen[espacio]+cantidad>10){
            printf("Este espacio esta lleno\n");
        }
        else{
            almacen[espacio]=almacen[espacio]+cantidad;
        }
        }
        else{
            if(almacen[espacio]-cantidad<0){
                printf("No es posible quitar tanto\n");
            }
            else{
                almacen[espacio]=almacen[espacio]-cantidad;
            }
        }
        printf("Quieres continuar?\n si==0 \n no==1");
        cont=scanf("%d",&cont);

    }while(cont==0);





}