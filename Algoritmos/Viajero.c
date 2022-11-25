#include<stdio.h>
#include<stdlib.h>

int main(){
    int lambda;
    printf("Cuantas ciudades necesita:\n");
    fflush(stdin);
    scanf("%d",&lambda);
    int Alpha[lambda][lambda];
    int Omega[lambda][lambda];
    for(int i=0;i<lambda;i++){
        for(int j=0;j<lambda;j++){
            if(i!=j){
                printf("Incerte la distancia de la ciudad %c con la ciudad %c:\n",i+65,j+65);
                fflush(stdin);
                scanf("%d",&Alpha[i][j]);
            }
            if(i==j){
                Alpha[i][j]=0;
            }
        }
    }
    printf("Acontinuacion un cuadro de intersecciones y distancias\n");
    for(int i=0;i<lambda;i++){
        for(int j=0;j<lambda;j++){
            printf("%i\t",Alpha[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    for(int i=0;i<lambda;i++){
        for(int j=0;j<lambda;j++){
            Omega[i][j]=Alpha[i][j+1];
            if(Alpha[i][j+1]==0){
                Alpha[i][j+1]=Alpha[lambda-1][0];
                Omega[i][j]=Alpha[lambda-1][0];
            }
        }
    }
    for(int i=0;i<lambda;i++){
        printf("%i\n",Omega[0][i]);
    }
    return 0;
}