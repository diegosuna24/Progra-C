#include<stdio.h>
#include<cstdlib>
int num_ejercicio;
float Pi=3.1416;

int num1, num2,operacion;
float res;
int num, numr;
int figura,base,altura,radio,lado;
    

main(){
    printf("Elige un ejercicio");
    scanf("%d",& num_ejercicio);

    switch(num_ejercicio){

        case 1 :
        printf("elige un numero");
        scanf("%d",&num1);
        printf("Elige una operacion(suma=11, resta=22, divicion=33, multiplicacion=44");
        scanf("%d",&operacion);
        printf("elige el segundo numero");
        scanf("%d",&num2);
        switch(operacion){
            case 11 : res=num1+num2;
            printf("EL resultado es: %f",res);
              return 0;
              break;
            case 22 :  res=num1-num2;
            printf("EL resultado es: %f",res);
              return 0;
              break;
            case 33 :  res=num1/num2;
            printf("EL resultado es: %f",res);
              return 0;
              break;
            case 44 :  res=num1*num2;
            printf("EL resultado es: %f",res);
              return 0;
              break;
            default:
              break;
              
        }
        






        case 2:
        printf("Intenta adivinar el numero");
        scanf("%d",&num);
        numr=rand()%101;
        do{
            if(num>numr){
              printf("Demaciado alto");
              printf("Intenta adivinar el numero");
              scanf("%d",&num);}
              else{
              printf("Demaciado bajo");
              printf("Intenta adivinar el numero");
              scanf("%d",&num);
              }
        } while (numr!=num);
        printf("Ganaste");
        return 0;









        case 3:
        printf("Elige una figura 10:Triangulo  20:circulo 30:rectangulo 40:cubo   50:cilindro");
        scanf("%d",&figura);
        switch (figura) {
        case 10:
            printf("Cual es la base?");
            scanf("%d",&base);
            printf("Cual es la altura?");
            scanf("%d",&altura);
            res=(base*altura)/2;
            printf("El resultado es: %f",res);
            break;

        case 20:
            printf("Cual es el radio?");
            scanf("%d",&radio);
            res=Pi*(radio^2);
            printf("El resultado es: %f",res);
            break;

        case 30:
            printf("Cual es la base?");
            scanf("%d",&base);
            printf("Cual es la altura?");
            scanf("%d",&altura);
            res=(base*altura);
            printf("El resultado es: %f",res);
            break;

        case 40:
            printf("Cual es el lado del cubo?");
            scanf("%d",&lado);
            res=lado^3;
            printf("El resultado es: %f",res);
            break;

        case 50:
            printf("Cual es el radio?");
            scanf("%d",&radio);
            printf("Cual es la altura?");
            scanf("%d",&radio);
            res=(radio^2)*Pi;
            res=res*altura;
            printf("El resultado es: %f",res);
            break;
        
        default:
         break;
        }
    }
return 0;
}