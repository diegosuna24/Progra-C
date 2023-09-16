#include<stdio.h>
int num;
void factorial (void);


int main(){
    printf("Da un numero para calcular su factorial");
    scanf("%d",&num);
    factorial();
}

void factorial(){
    int res=1;
    for(int i=1;i<=num;i++)
    {
        res*=i;
    }
    printf("%d",res);
}