//Problema 2 Taller2
//08/09/2023
//Crear un programa que tome una calificación numérica y la convierta en una
//calificación en letra utilizando operadores ternarios.
//TAller2_actividad2
#include <stdio.h>
int cal;


int main(){
 printf("Da tu calificacion del 0 al 100;  ");
        scanf("%d",&cal);                            //Pedir calificacion

        
        if(cal>=90&&cal<=100){
            printf("Tu calificacion es:  A"); }   // Si la calificacion de encuantra entre 90 y 80 la calificacion es B
         if(cal<90 && cal>=80){
            printf("Tu calificacion es:  B");}
         if(cal<80 && cal>=79){
            printf("Tu calificacion es:  C");}
         if(cal<70 && cal>=60){
            printf("Tu calificacion es:  D");}
         if(cal<60&&cal>=0){
            printf("Tu calificacion es:  F");}
            else
            {
               printf("Error");                       //si la calificacion no se encuantra en el rango de 0 a 100 hay un error
            }
}