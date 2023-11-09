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

     //imprimir complemento de la cadena de bits
     printf("complemento de la cadena de bits\n");
     for(int i=indice-1;i>=0;i--){
        if (bits[i]==1)
        {
            printf("0");
        }
        else
        {
        printf("1");
        }
    }
    printf("\n");
return 0;
}