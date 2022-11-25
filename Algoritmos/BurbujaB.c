#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void result(int *Alpha,int Omega);
int main(){
    int Omega,Gamma,Beta,Theta,Epsilon;
    Gamma=0;
    Epsilon=1;
    printf("De cuantos numero desea el arreglo\n");
    scanf("%d",&Omega);
    int Alpha[Omega];
    srand(time(NULL));
    for(int i=0;i<Omega;i++){
        Alpha[i]=1+rand()%9;
    }
    printf("Acontinuacion su arreglo:\n");
    result(Alpha,Omega);
    printf("Pasos para llegar al ordenamiento\n");
    for(int i=0;i<Omega&&Epsilon==1;i++){
        Epsilon=0;
        for(int j=0;j<Omega;j++){
            if(Alpha[j]>Alpha[j+1]){
                Epsilon=1;
                Beta=Alpha[j];
                Alpha[j]=Alpha[j+1];
                Alpha[j+1]=Beta;
            }
        }
        result(Alpha,Omega);
        Gamma++;
        for(int k=Omega-1;k>=1;k--){
            if(Alpha[k]<Alpha[k-1]){
                Epsilon=1;
                Theta=Alpha[k];
                Alpha[k]=Alpha[k-1];
                Alpha[k-1]=Theta;
            }
        }
        result(Alpha,Omega);
        Gamma++;
    }
    printf("Su arreglo se ordeno en %d pasos\n\n",Gamma);
    printf("Su arreglo de forma ascendente:\n");
    result(Alpha,Omega);
    printf("Su arreglo de forma descendente:\n");
    for (int i=(Omega-1);i>=0;i--){
        printf("%d ",Alpha[i]);
    }
    return 0;
}
void result(int *Alpha,int Omega){
    for(int i=0;i<Omega;i++){
        printf("%i ",Alpha[i]);
    }
    printf("\n");
}