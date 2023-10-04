//Diego Osuna Acevedo Examen 1
//https://github.com/diegosuna24/Progra-C/tree/main/Examen

#include <stdio.h>

int limsup;
int ban;

int main() {

    denuevo:

    printf("Da el limite superior: ");
    scanf("%d", &limsup);

    if (limsup < 1) {
        printf("Rango no valido\n");
        return 1; 
    }
    else
    {
        for (int i = 1; i <= limsup; i++) {
            int sumadivisores = 0;
            for (int j = 1; j < i; j++) {
                if (i % j == 0) {
                  sumadivisores += j;
                }
            }
            if (sumadivisores == i) {
                printf("%d es un numero perfecto\n", i);
            }
        }
        printf("Jugar de nuevo?  si==1 no==0");
        scanf("%d",ban);
        if(ban=1){
            goto denuevo;
        }
    return 0; 
    }
    }

