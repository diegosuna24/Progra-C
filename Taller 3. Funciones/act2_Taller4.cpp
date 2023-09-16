#include<stdio.h>
int num,res=1;
int factorial (int);


int main(){
    printf("Da un numero para calcular su factorial");
    scanf("%d",&num);
    res=factorial(num);
    printf("el resultado es %d",res);
}

int factorial(int num){

    for(int i=1;i<=num;i++)
    {
        res*=i;
    }
    return res;
}