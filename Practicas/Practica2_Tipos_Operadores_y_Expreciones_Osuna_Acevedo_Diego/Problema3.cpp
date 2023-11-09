//Problema 3 Taller2
//08/09/2023
//El objetivo de este ejercicio es simular un sistema básico de gestión de inventario en
//C, donde los usuarios pueden agregar y retirar elementos del inventario.
//TAller2_actividad3
#include<stdio.h>

//declarar el arreglo
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
        //elegimos si queremos agregar o quitar 
        if(operacion==1){
            //Nos aseguramos que exista suficente espacio
            if(almacen[espacio]+cantidad>10){
            printf("Este espacio esta lleno\n");
        }
        else{
            //Agregamos la cantidad al arreglo
            almacen[espacio]=almacen[espacio]+cantidad;
        }
        }
        else{
            //nos aseguremos que tengamos suficientes cosas en el espacio
            if(almacen[espacio]-cantidad<0){
                printf("No es posible quitar tanto\n");
            }
            else{
                //Eliminamo la cantidad deseada
                almacen[espacio]=almacen[espacio]-cantidad;
            }
        }
        //Preguntamos si continuar o no
        printf("Quieres continuar?\n si==0 \n no==1");
        cont=scanf("%d",&cont);

    }while(cont==0);





}