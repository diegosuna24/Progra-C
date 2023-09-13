#include<stdio.h>
int num;

int main(){
    printf("Da un numero");
    scanf("%d",&num);
    if(num%2==0 && num<0)
    {
        printf("Es par y positivo");
    }
}