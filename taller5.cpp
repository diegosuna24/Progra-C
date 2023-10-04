#include<stdio.h>

int ejercicio=1;
static int contador;
extern int saldo;
float pi=3.14159;

void Ejercicio1 (void);
void Ejercicio2 (void);
void Ejercicio3 (void);
void Ejercicio4 (void);
void Ejercicio5 (void);

int main(){
printf("Elige un problema\n");
printf("Ejercicio1 == 1\n");
printf("Ejercicio2 == 2\n");
printf("Ejercicio3 == 3\n");
printf("Ejercicio4 == 4\n");
printf("Ejercicio4 == 5\n");
scanf("%d",&ejercicio);

switch(ejercicio){
    case 1: 
        Ejercicio1();
        break;
    
    case 2:
        Ejercicio2();
        break;
    
    case 3:
        for(int i=0;i<10;i++)
        {
        Ejercicio3();
        }
        break;
    
    case 4:
        Ejercicio4();
        break;

    case 5:
        Ejercicio4();
        //acceder a ambos valores
    //printf("%d",num);  // no se puede hacceder a esta valor
    printf("%d",pi);
        break;

}
}

void Ejercicio1 (void){
    int contador;
    for(int i=1;i<=10;i++)
    {
        contador=i;
        printf("%d\n",contador);
    }
}

void Ejercicio2 (void){
   
}

void Ejercicio3 (void){
    contador ++;
    printf("El valor de contador es %d\n",contador);
}

void Ejercicio4 (void){
    register int temp;
    int valor;
    
}

void Ejercicio5 (void){
    int num=4;
    //acceder a ambos valores
    printf("%d",num);
    printf("%d",pi);
   
}