#include<stdio.h>
#include<cstdlib>
float res, descuento, precio,num1,num2;
int num,i,numaleatorio;
char operacion;
int calificaciones[10];
main(){


//1. Definir dos variables de tipo flotante, x y y.
// Asignarles valores iniciales
float x=10;
float y=20;


//2. Calcular y mostrar el resultado de la expresión (x + 2 * y) / (3 * x - y).
res=(x+2*y)/(3*x-y);
printf("%f",res);



//3. Usar #define para definir una constante simbólica llamada TASA_DESCUENTO con
//el valor 0.1. Calcular y mostrar el precio después de aplicar un descuento del 10% a
//un producto.
#define TASA_DESCUENTO 0.1
descuento=precio*TASA_DESCUENTO;
precio=precio-descuento;
printf("%f",precio);


//4. Pedir al usuario que ingrese un número entero positivo n. Imprimir los primeros n
//números primos.
printf("Da un numero entero positivo");
scanf("%d",& num);
for(i=2;i=1,num;i++){
  if(num %i=0){
  printf("No es primo");
}
else{
    printf("es primo");
}}


//5. Implementar una calculadora que pueda realizar operaciones de suma, resta,
//multiplicación y división. El usuario debe ingresar dos números y el operador.
scanf("%f",&num1);
scanf("%c",& operacion);
switch(operacion){
case "suma" :
res=num1 + num2;
break;
case "resta" :
res=num1 - num2;
break;
case "divicion" :
res=num1 / num2;
break;
case "multiplicacion" :
res=num1 * num2;
break;
}



//6. Implementar un programa que simule un juego de adivinar el número. El programa
//debe generar un número aleatorio entre 1 y 100 y permitir al usuario adivinar hasta
//que lo acierte. Dar pistas como "Demasiado alto" o "Demasiado bajo".
numaleatorio=rand()%101;
while(GANADOR<1){
printf("Da un numero");
scanf("%d",&num);
if(numaleatorio==num){
    printf("Es igual");
    GANADOR++;
}
else{
    if(numaleatorio<num){
        printf("Demasiado alto ");
    }
    else{
        printf("Demasiado bajo ");
    }
}}

//7. Pedir al usuario que ingrese un número. Calcular el factorial del número utilizando una
//función recursiva.
int factorial(int numf);
main(){
    res=factorial(numf);
    printf("%d",& res);
}

int factorial(int numf, int res=1){
    for(i=1;i<numf<i;i++){
        res=res*numf;
        return res;
    }
}


//8. Definir un arreglo de enteros llamado calificaciones con capacidad para 10 elementos.
//Pedir al usuario que ingrese 10 calificaciones y almacenarlas en el arreglo. Luego,
//mostrar las calificaciones ingresadas y sacar el promedio. Y Ordenar el arreglo
//calificaciones en orden ascendente.
  int calificaciones[10];
  int prom;
for (int i = 0; i < 10; i++) {
        printf("Da la calificación %d",i+1);
        scanf("%d", &calificaciones[i]);}
for (int l = 0; l < 10; l++) {
    prom=prom+calificaciones[l];
        printf("Calificación %d: %d\n",l+1,calificaciones[l]);
    }
    prom=prom/10;
    printf("El promedio es %d",prom);

//9. Definir una función llamada esPrimo() que tome un número entero como argumento y
//devuelva 1 si es primo y 0 si no lo es. Usar esta función para encontrar los primeros 5
//números primos.
int es_primo(int cont,int num);
int main(){
    do{
        num=num+1;
    cont=es_primo(cont,num)+cont;
    }while(cont<5);
}

int es_primo(int cont,int num){    
if(num=2||num%i=0){
    return 1;}
    else {return 0;}
}while(cont<5);
}


//10. Definir una función llamada calcularPotencia() que tome dos argumentos: la base b y
//el exponente e, y devuelva el resultado de b elevado a la e.
int culcularPotencia(int b, int e);

int main(){
    res=caulcularPotencia(b,e)
}
int calcularPotencia(int b, int e){
    return b^e;
}