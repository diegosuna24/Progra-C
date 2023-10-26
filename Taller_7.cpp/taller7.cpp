#include <stdio.h>
#include <stdlib.h>
#include <string.h>


char *nombres[3];
void imprimirNombres(char **nombres, int num);
void invertirCadena(char **nombres, int num);
void ordenar(char **nombres);


int main() {

    // Parte 1
    nombres[0] = "Diego";
    nombres[1] = "Osuna";
    nombres[2] = "Acevedo";

    for (int i=0; i<3; i++) {
        printf("%s\n", nombres[i]);
    }


    // Parte 2
    for (int i=0; i<3; i++) {
        nombres[i] = (char *)malloc(100 * sizeof(char));
        printf("Ingrese el nombre %d: ", i + 1);
        scanf("%s", nombres[i]);
    }
    for (int i=0; i<3; i++) {
        printf("%s\n", nombres[i]);
        free(nombres[i]);
    }

    // Parte 3
    printf("\nNombres ingresados:\n");
    imprimirNombres(nombres, 3);

    // Parte 4
    printf("\nInvertir nombres:\n");
    invertirCadena(nombres, 3);
    imprimirNombres(nombres, 3);

    // Parte 5
    ordenar(nombres);



    return 0;
}

void imprimirNombres(char **nombres, int num) {
    for (int i = 0; i < num; i++) {
        printf("%s\n", nombres[i]);
    }
}

void invertirCadena(char **nombres, int num) {
    for (int i = 0; i < num; i++) {
        if (nombres[i] != NULL) {
            int longitud = strlen(nombres[i]);
            char temp;
            for (int j = 0; j < longitud / 2; j++) {
                temp = nombres[i][j];
                nombres[i][j] = nombres[i][longitud - j - 1];
                nombres[i][longitud - j - 1] = temp;
            }
        }
    }
}

void ordenar(char **nombres){
    for(int i = 0; i <3; i++){
        for(int j=0;j<strlen(nombres[i]);j++){
            if (nombres[i][j] > nombres[i][j+1]) {
                char temp = nombres[i][j];
                nombres[i][j] = nombres[i][j+1];
                nombres[i][j+1] = temp;
            }
        }
    }
}