#include<stdio.h>

int num;

int main(){
    printf("Da un numero");
    if (num==0)
    {
        printf("Es cero");
    }
    else
    {
        if(num>0)
        {
            printf("Es positivo");
        }
        else
        {
            printf("Es negativo");
        }
    }
}