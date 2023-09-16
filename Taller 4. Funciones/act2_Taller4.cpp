#include<stdio.h>
int num,res=1,ban=1;
int factorial (int);


int main(){
    do{
        printf("Da un numero para calcular su factorial");
        scanf("%d",&num);
        res=factorial(num);
        printf("el resultado es %d",res);
        printf ("jugar de nuevo?    \nSi====1\n NO====o");
        scanf("%d",&ban);
    }while(ban=1);
    printf("Juego terminado");
}

int factorial(int num){

    for(int i=1;i<=num;i++)
    {
        res*=i;
    }
    return res;
}