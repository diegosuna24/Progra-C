//Diego Osuna Acevedo Examen 1

#include <stdio.h>

int limsup;

int main() {

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
    return 0; 
    }
    }

