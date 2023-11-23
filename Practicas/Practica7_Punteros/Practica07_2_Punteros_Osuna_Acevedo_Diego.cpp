/*
Practica07_2_Punteros_Osuna_Acevedo_Diego
Diego Osuna Acevedo
8/11/2023
Argumentos en la linea de comandos, Ordenacion de palabras, Matriz multidimencional
*/

#include <stdio.h>
#include <string.h>

/*
Descripción: Se toman argumentos desde la linea de comandos en esta caso cadenas de caracteres despues se comparan y ordenan alfabetimente.
*/

int main(int argn, char *arg[]) {

    char *palabras[argn];
    char *temporal;
    for (int i=0; i<argn; i++){
        palabras[i]=arg[i];
    }

    // Ordenar las palabras en orden alfabético
    for (int i=0; i<argn; i++) {
        for (int j=i+1; j<argn; j++) {
            if (strcmp(*(palabras+i), *(palabras+j)) >0) 
            {
                temporal = *(palabras+i);
                *(palabras+i) = *(palabras+j);
                *(palabras+j) = temporal;
            }
        }
    }

    // Imprimir las palabras ordenadas
    printf("Palabras ordenadas en orden alfabético:\n");
    for (int i=0; i<argn; i++) {
        printf("%s\n", *(palabras + i));
    }
    return 0;
}