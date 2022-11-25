#include<stdio.h>
#include<string.h>

typedef struct{
    char marca[50];
    int ancho;
}llanta;
typedef struct{
    llanta llanta[4];
    char marca[10];
    char motor[20];
}Carro;

int main(){
    Carro*carro[50];
    Carro*miCarro=carro[0];
    llanta llanta;
    printf("Ingrese la marca de la llanta\n");
    for(int i=0;i<4;i++){
        fflush(stdin);
        gets(miCarro->llanta[i].marca);
        fflush(stdin);
        scanf("%d",&(miCarro->llanta[i].ancho));
    }
    printf("llantas guardadas:\n");
    for(int j=0;j<4;j++){
        printf("llanta en [%d]->nombre=%s",j,miCarro->llanta[j].marca);
        printf("con un ancho->%d\n",miCarro->llanta[j].ancho);
    }
    return 0;
}