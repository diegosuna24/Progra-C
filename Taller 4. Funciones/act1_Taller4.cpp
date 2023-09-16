#include<stdio.h>
int num, ban=1;
void factorial (void);


int main(){
    do{
    printf("Da un numero para calcular su factorial");
    scanf("%d",&num);
    factorial();
    printf ("jugar de nuevo?    \nSi====1\n NO====o");
    scanf("%d",&ban);
    }while(ban=1);
    printf("Juego terminado");

}

void factorial(){
    int res=1;
    for(int i=1;i<=num;i++)
    {
        res*=i;
    }
    printf("%d",res);
}