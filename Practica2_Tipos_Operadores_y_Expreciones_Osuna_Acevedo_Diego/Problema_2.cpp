#include <stdio.h>
int cal;


int main(){
 printf("Da tu calificacion del 0 al 100;  ");
        scanf("%d",&cal);

        
        if(cal>=90){
            printf("Tu calificacion es:  A"); }
         if(cal<90 && cal>=80){
            printf("Tu calificacion es:  B");}
         if(cal<80 && cal>=79){
            printf("Tu calificacion es:  C");}
         if(cal<70 && cal>=69){
            printf("Tu calificacion es:  D");}
         if(cal<60){
            printf("Tu calificacion es:  F");}
}