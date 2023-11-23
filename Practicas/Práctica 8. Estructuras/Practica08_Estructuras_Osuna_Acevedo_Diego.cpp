/*
Nombre del archivo: Practica08_Estructuras_Osuna_Acevedo_Diego.cpp
Diego Osuna Acevedo
22/11/2023
Descripción: simular un sistema de gestión de inventario en C
utilizando estructuras (structs) donde los usuarios pueden agregar y retirar elementos
del inventario.
*/
#include <stdio.h>
#include<stdio.h>
#include<stdlib.h>
#include <time.h>
#include"Diegolib.h"
#include <string.h>

typedef struct Producto{
    char nombre [20];
    int precio;
    int cantidad;
    int numproduct;

}TProducto;

TProducto vect [100];

const int max =50;
int n=0;


int menu();
void eleccion(int op);
void agregar();
void mostrar();
void editar();
int busqueda(int x);
void valortotal();
void ordenar();
void ordenarprecio(TProducto arr[], int n);
void ordenarcantidad(TProducto arr[], int n);
void intercambiar(struct Producto*a, struct Producto*b);


int main(){
    int op;
    srand(time(0));

    do{
        op=menu();
        eleccion(op);
    } while(op!=0);
    return 0;
}

int menu(){
    int op;
    char matri[10];
    do{
        printf("\nMENU\n");	
        printf("Elige una opcion valida\n");
        printf("1 == Agregar elementos al inventario\n");
        printf("2 == Retirar o agregar elementos del inventario\n");
        printf("3 == Mostrar invetario;\n");
        printf("4 == Calcular valor total\n");
        printf("5 == Ordenar\n");
        printf("0 == Salir\n");
       
        do{
        scanf("%s",matri);
        op=valinum(matri);
        }while(op==-1);
    }while(rangonum(0,5,op)!=1);
    return op;
}

void eleccion(int op){
    switch(op){
        case 1:
        agregar();
        break;

        case 2:  
        editar();
        break;

        case 3 :
        mostrar();
        break;

        case 4 :
        valortotal();
        break;

        case 5:
        ordenar();
        break;
    }
}

void agregar (){

     char aux[25];
     int cant;

        do{
            printf("Nombre del producto\n");
            fflush(stdin);
            fgets(aux,15,stdin);
        }while(carvalido(aux)!=1);
        for (int i=0; aux[i]!='\0'; i++){
            aux[i]=toupper(aux[i]);
        }
        for(int i=0;i<=15;i++){
                if(aux[i]=='\n')
                {
                    aux[i]='\0';
                }
            }
    strcpy(vect[n].nombre, aux);

    do{
        do{
            printf("cantidad de unidades\n");
            scanf("%s",aux);
            cant=valinum(aux);
        }while(cant==-1);
        if(cant>100){
            printf("el numero maximo es 100");
        }
    }while(cant>100);
    vect[n].cantidad=cant;


    do{
        printf("precio\n");
        scanf("%s",aux);
        cant=valinum(aux);
    }while(cant==-1);
    vect[n].precio=cant;
    vect[n].numproduct=n+1;
    n++;
}
/*
Función: mostrar
Descripción: Imprime todos los valores de la estructura en forma de tabla

*/
void mostrar(){
    printf("%-10s %-15s %-10s %-5s \n","NumProduct","Producto","Cantidad","Precio");
    for (int i=0;i<n;i++){
        printf("%-10d %-15s %-10d %-5d\n",vect[i].numproduct,vect[i].nombre,vect[i].cantidad,vect[i].precio);
    }
}
/*
Función: editar
Descripción: Primero pregunta que producto es el que se quiere editar y se se encuentra 
pregunta el dato que de quiere modificar y lo sustituye.



*/
void editar(){
    char aux[25];
     int cant;
     int pos;
    mostrar();
        do{
            printf("Elige un numero de producto para editar\n");
            scanf("%s",aux);
            cant=valinum(aux);
            pos = busqueda(cant);
        }while(cant==-1|| pos<0 );

    do{
            printf("1 == EDITAR CANTIDAD\n");
            printf("2 == PRECIO\n");
            scanf("%s",aux);
            cant=valinum(aux);
        }while(cant==-1 || rangonum(1,2,cant)!=1 );

        if(cant==1){
            do{
            printf("1 == QUITAR\n");
            printf("2 == AGRAGAR\n");
            scanf("%s",aux);
            cant=valinum(aux);
        }while(cant==-1 || rangonum(1,2,cant)!=1 );
        if(cant==1){
            do{
            printf("cuanto quieres QUITAR\n");
            scanf("%s",aux);
            cant=valinum(aux);
        }while(cant==-1 );
        if(vect[pos].cantidad-cant<0){
            printf("Exede el minimo");
            return;
        }
        else
        {
        vect[pos].cantidad=vect[pos].cantidad-cant;
        }
        }
        else
        {
            do{
            printf("cuanto quieres Agregar\n");
            scanf("%s",aux);
            cant=valinum(aux);
        }while(cant==-1 );
        if(vect[pos].cantidad+cant>100){
            printf("Exede el maximo");
            return;
        }
        }
        }
        else
        {
            do{
            printf("CUAL ES EL NUEVO PRECIO?");
            scanf("%s",aux);
            cant=valinum(aux);
        }while(cant==-1);
        vect[pos].precio=cant;
        }
}


/*
Función: busqueda
Descripción: busqueda secuancial en el campo llave
Parámetros:
- x: Es el valor que se busca.
*/

int busqueda(int x){
    for(int i=0;i<=n;i++){
        if(vect[i].numproduct==x){
            return i;
        }
    }
    return -1;
}

/*
Función: valor total
Descripción: En cada uno de los elementos se multiplica el precio del producto por la cantidad y se suma
*/
void valortotal() {
    int valtotal = 0;  

    for (int i=0; i<n; i++) {
        valtotal = valtotal + (vect[i].precio * vect[i].cantidad);
    }

    printf("El valor de todo el inventario es %d\n", valtotal);
}

/*
Función: ordenar
Descripción: pregunta como se quiere ordenar la estructura y manda llamar la unfuin de ordenacion dependiendo de la eleccion

*/
void ordenar(){
     char aux[10];
     int cant;
     do{
            printf("1 == Ordenar por precio\n");
            printf("2 == Ordenar por cantidad\n");
            scanf("%s",aux);
            cant=valinum(aux);
        }while(cant==-1 || rangonum(1,2,cant)!=1 );

        if(cant==1){
            ordenarprecio(vect, n);
            mostrar();
        }
        else
        {
            ordenarcantidad(vect,n);
            mostrar();
        }
 
}

/*
Función: intercambiar
Descripción: Intercambia dos elementos de tipo TProducto.
Parámetros:
- a:Puntero a la primera estructura TProducto.
- b:Puntero a la segunda estructura TProducto.
*/
void intercambiar(struct Producto*a, struct Producto*b) {
    struct Producto temp = *a;
    *a = *b;
    *b = temp;
}
/*
Función: ordenarprecio
Descripción: Ordena  TProducto por el campo del precio utilizando el metodo de la burbuja.
Parámetros:
- arr: El array de productos que se va a ordenar.
- n: La cantidad de elementos en la estructura.
*/
void ordenarprecio(TProducto arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j].precio > arr[j + 1].precio) {
                intercambiar(&arr[j], &arr[j + 1]);
            }
        }
    }
}
/*
Función: ordenarcantidad
Descripción: Ordena  TProducto por el campo de cantidad utilizando el metodo de la burbuja.
Parámetros:
- arr: El array de productos que se va a ordenar.
- n: La cantidad de elementos en la estructura.
*/
void ordenarcantidad(TProducto arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j].cantidad > arr[j + 1].cantidad) {
                intercambiar(&arr[j], &arr[j + 1]);
            }
        }
    }
}




