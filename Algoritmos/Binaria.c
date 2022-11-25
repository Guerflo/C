#include<stdio.h>
#include<stdlib.h>

int main(){
    int Alpha[10];
    int Omega,Beta,Sigma,Delta,Epsilon,Theta;
    char Valor;
    Sigma=0;
    Delta=10;
    printf("Dijite los numero para su arreglo de forma ordenada (maximo 10 dijitos)\n");
    for(int i=0;i<10;i++){
        scanf("%d",&Alpha[i]);
    }
    printf("Que dijito desea buscar:\n");
    scanf("%d",&Omega);
    for(int i=0;(Sigma<=Delta)&&(i<10);i++){
        Epsilon=(Sigma+Delta)/2;
        if(Alpha[Epsilon]==Omega){
            Valor='v';
            break;
        }
        if(Alpha[Epsilon]>Omega){
            Delta=Epsilon;
            Epsilon=(Sigma+Delta)/2;
        }
        if(Alpha[Epsilon]<Omega){
            Sigma=Epsilon;
            Epsilon=(Sigma+Delta)/2;
        }
    }
    if(Valor=='v'){
        printf("Su numero %d estaba en la posicion %d del arreglo:\n",Omega,Epsilon+1);
    }
    else{
        printf("Su nuemro %d no existe en el arreglo\n",Omega);
    }
    return 0;
}