#include<stdio.h>
#include<stdlib.h>
#include<time.h>
 int main(){
    int Omega,Gamma;
    float Sigma;
    int Epsilon,Beta,Theta;
    printf("De cuantos numeros desea el arreglo:\n");
    scanf("%d",&Omega);
    srand(time(NULL));
    int Alpha[Omega];
    for (int i=0;i<Omega;i++){
        Alpha[i]=1+rand()%9;
    }
    printf("Este es su arreglo:\n");
    for (int i=0;i<Omega;i++){
        printf("%d ",Alpha[i]);
    }
    printf("\n\n");
    for(int i=0;i<Omega;i++){
        Epsilon=i;
        Beta=Alpha[i];
        while((Epsilon>0)&&(Beta<Alpha[Epsilon-1])){
            Alpha[Epsilon]=Alpha[Epsilon-1];
            Epsilon--;
        }
        Alpha[Epsilon]=Beta;
    }
    printf("Su arreglo de forma ascendente:\n");
    for (int i=0;i<Omega;i++){
        printf("%d ",Alpha[i]);
    }
    printf("\n");
    printf("Su arreglo de forma descendente:\n");
    for (int i=(Omega-1);i>=0;i--){
        printf("%d ",Alpha[i]);
    }
    return 0;
 }