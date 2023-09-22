#include <stdio.h>

int ejercicio,num,band;
void Fibonacci (int num);
int Fibonacci1 (int num);

int main(){
    printf("Elije un ejercicio");
    scanf("%d",&ejercicio);
    switch(ejercicio){
    case 1 :
        printf("Elije un numero para calcular Fibonacci: \n");
        scanf("%d",&num);
        Fibonacci(num);
        break;
    
    case 2 :
        printf("Elije un numero para calcular Fibonacci: \n");
        scanf("%d",&num);
        printf("El resultado es %d",Fibonacci1 (num));
        break;
    }
}

void Fibonacci (int num){
    int num1=0, num2=1, aux;
    if(num>1){
    for(int i=1;i<=num;i++){
        aux=num2;
        num2=num2+num1;
        num1=aux;}
        printf("El resultado es %d\n",num2);
    }
    else
    {
        if(num==1){
            printf("EL resultado es 1");
        }
        else
        {
            printf("EL resultado es 0");
        }
    }
}

int Fibonacci1 (int num){
    int num1=0, num2=1, aux;
    if (num==0){
        return 0;
    }
    else
    {
        if(num==1){
            return 1;
        }
        else{
            for(int i=1;i<=num;i++){
            aux=num2;
            num2=num2+num1;
            num1=aux;}
            return num2;
        }
    }
}



    

