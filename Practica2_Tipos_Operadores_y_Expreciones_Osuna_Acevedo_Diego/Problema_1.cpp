//Problema 1 Taller2
//08/09/2023
//Crear un programa que permita a los usuarios ingresar un número entero, especificar
//el número de bits que se deben considerar y luego analizar el número en términos de
//bits encendidos, posiciones y representación binaria.
//TAller2_actividad1

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

     printf("Numero de bits");
     for(int i=indice-1;i>=0;i--){
        printf("%d",bits[i]);
     }
     printf("\n");
     
     //buscar cadena de bist encendidos

     int bit_encendido=-1;
     printf("Los bist esncendido estan en la pocicion; \n");
     for(int i=0; i<indice;i++){
        if(bits[i]==1){
            bit_encendido=i;
            printf("%d",bit_encendido+1);
        }
     }
     if(bit_encendido==-1){
        printf("No hay bits sencendidos");
     }
     return 0;
     }