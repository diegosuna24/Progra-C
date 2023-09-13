#include<stdio.h>
int cantidad, membresia;
float descuento,total;

int main(){
    printf("Tienes membresia? SI==1  NO==0\n");
    scanf("%d",&membresia);
    printf("Cantidad :\n");
    scanf("%d",&cantidad);
    if(cantidad>=1000 && membresia==1)
    {
        descuento=.15;
    }
    if(cantidad>=1000)
    {
        descuento=.1;
    }
    else
    {
        descuento=0;
    }
    descuento=descuento*cantidad;
    total=cantidad-descuento;
    printf("El total es %d",total);
    }