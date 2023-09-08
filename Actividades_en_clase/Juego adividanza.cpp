#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int num,intentos, num2, bandera;

int main(){

    numsecreto:
    srand(time(NULL));
    num=rand() % 100 + 1;

    inicio: 
        printf("Adivida un numero entre 1 y 100\n ");

    adivinanza:
        printf("Elige un numero:\t");
        scanf("%d",&num2);
        intentos++;

    if (num==num2)
    {
        printf("Ganaste despues de %d intentid",intentos);
    }
    else
    {
        if(num>num2)
        {
            printf("Muy bajo, itenta denuevo");
            goto adivinanza;
        }
        else
        {
            printf("Muy bajo, intenta denuevo");
            goto adivinanza;
        }

    }
    reinicio:
    printf("Quieres jugar denuevo?  1=SI  2=No\t");
    scanf("%d",&bandera);
    if(bandera==1){
        goto inicio;
    }
    if(num==2)
    {
        printf("Juego termidado");
    }
    else
    {
        goto reinicio;
    }

    }
