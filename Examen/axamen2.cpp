#include<stdio.h>
#include <stdlib.h>
#include <time.h>

struct registro{
    char especie[20];
    int id;
    int edad;
    char nombre[20];
    char comentarios[5000];
};
struct registro vect[1000];

void crearregistro();
void mostrar();
int busqueda(int vect2[],int x);
void almacenar();
void editar();

int n=0;

int main(){
printf("1= crear registro\n");
printf("2= mostrar\n");
printf("3= editar\n");
printf("4= crear archivo\n");
printf("5= cargar\n");
int op;
scanf("%d",op);

switch (op)
{
case 1:
crearregistro();
    break;
case 2:
mostrar();
break;

case 3:
editar();
break;

case 4:
almacenar();
break;

case 5:
void crear();
break;

default:
    break;
}


}


int busqueda(int vect2[],int x){
    for(int i=0;i<=n;i++){
        if(vect2[i]==x){
            return i;
        }
    }
    return 0;
}

void crearregistro(){
    
    printf("Especie\n");
    scanf("%s",&vect[n].especie);
    printf("nombre\n");
    scanf("%s",&vect[n].nombre);
    printf("Edad\n");
    scanf("%d",&vect[n].edad);
    vect[n].id=rand()%100;
    n++;
}

void mostrar(){
    int vectaux[1000];
    int aux;

    printf("Da el id de tu mascota");
    scanf("%d",&aux);
    for(int i;i<=n;i++){
        vectaux[n]=vect[n].id;
    }
    int y = busqueda(vectaux,aux);
    if(y!=0){
        printf("Especie: %s\n",vect[y].especie);
        printf("Nombre: %s\n",vect[y].nombre);
        printf("ID  : %d\n",vect[y].id);
        printf("Edad %d\n",vect[y].edad);
        printf("Comentarios %s\n",vect[y].comentarios);
    }
}

void editar(){
    int aux,aux2;
    int vectaux[1000];
    scanf("%d",&aux);
    for(int i;i<=n;i++){
        vectaux[n]=vect[n].id;
    }
    aux2=busqueda(vectaux,aux);

    if(aux2!=0){
    printf("Especie\n");
    scanf("%s",&vect[aux2].especie);
    printf("nombre\n");
    scanf("%s",&vect[aux2].nombre);
    printf("Edad\n");
    scanf("%d",&vect[aux2].edad);    
    printf("Comentarios\n");
    scanf("%d",&vect[aux2].comentarios); 
    }
}

void almacenar(){
    int a;
    FILE *a = fopen("arc.txt","w");
    for (int i=0;i<=n;i++){
        fprintf( a, "%-10s %-10s %-10d %-10d %-15s \n",vect[i].especie,vect[i].nombre,vect[i].id,vect[i].edad,vect[i].comentarios);                
}
}

void crear(){

}
