#include<stdio.h>
int c,f;
#define CONST 1.8

int main(){
    printf("Da una temperatura en C");
    scanf("%d",c);
    f=c*CONST+32;
    printf("%d F",f);
}
   