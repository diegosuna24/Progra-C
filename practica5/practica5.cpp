#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int generarNumeroLoteria();
void iniciarCarrera();
static int numeroGanador=44;


int main(){
    srand(time(NULL));
    printf("EJERCICIO\n");
    int op;
    scanf("%d",&op);
    switch(op){
        case 1:
        if(generarNumeroLoteria()==numeroGanador){ 
            printf("¡Felicidades, ganaste la lotería!");
        }
        else
        {
            printf("Lo siento, no ganaste esta vez.");
        }
        break;

        case 2:
        iniciarCarrera();
        break;

    }
    return 0;
}

int generarNumeroLoteria(){
    int numero;
    numero = rand()%100+1;
    return numero;
}

void iniciarCarrera(){
    register int car1=rand()%101+100;
    register int car2=rand()%101+100;
    register int car3=rand()%101+100;
    int distancia=0;
    printf("Ingrese la distancia de la carrera en kilometros: ");
    scanf("%d", &distancia);
    float t=(float)distancia / car1 * 60;
    printf("El auto 1 tuvo un velodad de %d km/h y termino en un timpo de %f minutos\n",car1,t);
    t=(float)distancia / car2 * 60;
    printf("El auto 2 tuvo un velodad de %d km/h y termino en un timpo de %f minutos\n",car2,t);
    t=(float)distancia / car3 * 60;
    printf("El auto 3 tuvo un velodad de %d km/h y termino en un timpo de %f minutos\n",car3,t);

    if(car1>car2){
        if(car1>car3){
            printf("El auto 1 es el ganador\n");
        }
        else
        {
            printf("El auto 3 es el ganador\n");
        }
    }
    else{
        if(car2>car3){
            printf("El auto 2 es el ganador\n");
        }
        else
        {
            printf("El auto 3 es el ganador\n");
        }
    }
}