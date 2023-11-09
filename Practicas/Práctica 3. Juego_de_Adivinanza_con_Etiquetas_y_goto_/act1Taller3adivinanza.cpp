//Practica 3 Juego de Adivinanza con etiquetas y 'goto'
//Diego Osuna Acevedo
//13 septiembre 2023
//Juego de adivinanza utilizando etiquetas y intruccion'goto'
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int num,intentos, num2, bandera;

int main(){

    inicio: 
        printf("Adivida un numero entre 0 y 100\n");

    numsecreto:
        srand(time(NULL));
        num=rand() % 100 + 1;
        intentos=0;

    adivinanza:
        printf("Elige un numero:\t");
        scanf("%d",&num2);
        intentos++;

    if (num==num2)
    {
        printf("Ganaste despues de %d intentos\n",intentos);
    }
    else
    {
        if(num>num2)
        {
            printf("Muy bajo, itenta denuevo\n");
            goto adivinanza;
        }
        else
        {
            printf("Muy alto, intenta denuevo\n");
            goto adivinanza;
        }

    }
    reinicio:
    printf("Quieres jugar denuevo?  1=SI  2=No\t");
    scanf("%d",&bandera);
    if(bandera==1){
        goto numsecreto;
    }
    else
    {
        if(bandera==2)
        {
            printf("Juego termidado");
            return 0;
        }
        else
        {
            printf("Respuesta no valida");
            goto reinicio;
        }
        }
    }