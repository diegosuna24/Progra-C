#include <stdio.h>
#include <limits.h>

int ejer, num,i, numbits, cal;
int numero_decimal;
int main(){
     printf("Ingresa un numero decimal:\n");
     scanf("%d",&numero_decimal);

     //Validar que el numero sea positivo
     if(numero_decimal<0){
        return 1;
     }
     //calcular los bits necesarios

     int num_bits=0;
     int temp=numero_decimal;

     while(temp>0){
        temp/=2;
        num_bits++;
     }
     //cremos el arreglo
     int bits[num_bits];

     int indice;
     while(numero_decimal>0){
        bits[indice]=numero_decimal%2;
        numero_decimal/=2;
        indice++;
     }

     //imprimir la cadena de bits

     printf("bits\n");
     for(int i=indice-1;i>=0;i--){
        printf("%d",bits[i]);
     }
     printf("\n");
    int desplasado[num_bits+2];
    int cont=num_bits+2;

     //imprimir desplazamiento de la cadena de bits
     printf("cadena de bits desplazada\n");
     for(int i=indice-1;i>=0;i--){
        cont--;
       desplasado[cont]=bits[i];
       printf("%d",desplasado[cont]);
    }
    printf("\n");
return 0;
}