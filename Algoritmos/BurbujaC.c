#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define RESET_COLOR "\x1b[0m"
#define NEGRO_T     "\x1b[30m"
#define NEGRO_F     "\x1b[40m"
#define ROJO_T      "\x1b[31m"
#define ROJO_F      "\x1b[41m"
#define VERDE_T     "\x1b[32m"
#define VERDE_F     "\x1b[42m"
#define AMARILLO_T  "\x1b[33m"
#define AMARILLO_F  "\x1b[43m"
#define AZUL_T      "\x1b[34m"
#define AZUL_F      "\x1b[44m"
#define MAGENTA_T   "\x1b[35m"
#define MAGENTA_F   "\x1b[45m"
#define CYAN_T      "\x1b[36m"
#define CYAN_F      "\x1b[46m"
#define BLANCO_T    "\x1b[37m"
#define BLANCO_F    "\x1b[47m"

int swap(int *i,int *j);
void result(int *Alpha,int Omega);
int main(){
    int Omega,Gamma,Epsilon,Lambda,Kappa,Zeta,Eta,Beta,Theta,Iota;
    Gamma=0,Epsilon=1;
    Lambda=0,Kappa=1;
    Zeta=0,Eta=1;
    printf("De cuantos numero desea el arreglo\n");
    scanf("%d",&Omega);
    int Alpha[Omega],Delta[Omega],Sigma[Omega];
    srand(time(NULL));
    for(int i=0;i<Omega;i++){
        Alpha[i]=1+rand()%200;
        Delta[i]=Alpha[i];
        Sigma[i]=Alpha[i];
    }
    printf("Acontinuacion su arreglo:\n");
    result(Alpha,Omega);
    printf(AZUL_T"\n//////////////////////////////NUEVO ALGORITMO////////////////////////////////////////\n"RESET_COLOR);
    printf("Pasos para llegar al ordenamiento\n");
    for(int i=1;i<Omega&&Epsilon==1;i++){
        Epsilon=0;
        for(int j=Omega-1,k=0;j>=i;k++,j--){
            if(Alpha[j-1]>Alpha[j]){
                Epsilon=1;
                swap(&Alpha[j-1],&Alpha[j]);
            }
            if(Alpha[k+1]<Alpha[k]){
                Epsilon=1;
                swap(&Alpha[k+1],&Alpha[k]);
            }
        }
        result(Alpha,Omega);
        Gamma++;
    }
    printf(VERDE_T"Su arreglo se ordeno en %d pasos\n"RESET_COLOR,Gamma-1);
    printf("Su arreglo de forma ascendente:\n");
    result(Alpha,Omega);
    printf("Su arreglo de forma descendente:\n");
    for (int i=(Omega-1);i>=0;i--){
        printf("%d ",Alpha[i]);
    }
    printf(AZUL_T"\n//////////////////////////////BIDIRECCIONAL//////////////////////////////////////////\n"RESET_COLOR);
    printf("Pasos para llegar al ordenamiento\n");
    for(int i=0;i<Omega&&Kappa==1;i++){
        Kappa=0;
        for(int j=0;j<Omega;j++){
            if(Delta[j]>Delta[j+1]){
                Kappa=1;
                swap(&Delta[j],&Delta[j+1]);
            }
        }
        result(Delta,Omega);
        Lambda++;
        for(int k=Omega-1;k>=1;k--){
            if(Delta[k]<Delta[k-1]){
                Kappa=1;
                swap(&Delta[k],&Delta[k-1]);
            }
        }
        result(Delta,Omega);
        Lambda++;
    }
    printf(VERDE_T"Su arreglo se ordeno en %d pasos\n"RESET_COLOR,Lambda-2);
    printf("Su arreglo de forma ascendente:\n");
    result(Delta,Omega);
    printf("Su arreglo de forma descendente:\n");
    for (int i=(Omega-1);i>=0;i--){
        printf("%d ",Delta[i]);
    }
    printf(AZUL_T"\n//////////////////////////////CLASICO////////////////////////////////////////////////\n"RESET_COLOR);
    for(int i=1;i<Omega&&Eta==1;i++){
        Eta=0;
        for(int j=Omega-1;j>=i;j--){
            if(Sigma[j-1]>Sigma[j]){
                Eta=1;
                swap(&Sigma[j-1],&Sigma[j]);
            }
        }
        result(Sigma,Omega);
        Zeta++;
    }
    printf(VERDE_T"Su arreglo se ordeno en %d pasos\n"RESET_COLOR,Zeta-1);
    printf("Su arreglo de forma ascendente:\n");
    result(Sigma,Omega);
    printf("Su arreglo de forma descendente:\n");
    for (int i=(Omega-1);i>=0;i--){
        printf("%d ",Sigma[i]);
    }
    printf(AMARILLO_T"\n//////////////////////////////FIN////////////////////////////////////////////////////\n"RESET_COLOR);
    if(Lambda-2<Zeta-1&&Lambda-2<Gamma-1){
        printf(MAGENTA_T"El algoritmo ganador fue Bidireccional con %d pasos\n"RESET_COLOR,Lambda-2);
    }
    if(Zeta-1<Lambda-2&&Zeta-1<Gamma-1){
        printf(MAGENTA_T"El algoritmo ganador fue Clasic con %d pasos\n"RESET_COLOR,Zeta-1);
    }
    if(Gamma-1<Lambda-2&&Gamma-1<Zeta-1){
        printf(MAGENTA_T"El algoritmo ganador fue el Nuevo con %d pasos "CYAN_T"\n-Clasic %d\n-Bidireccional %d"RESET_COLOR,Gamma-1,Zeta-1,Lambda-2);
    }
    printf(AMARILLO_T"\n//////////////////////////////FIN////////////////////////////////////////////////////\n"RESET_COLOR);
    return 0;
}
int swap(int *i,int *j){
    int Beta;
    Beta=*i;
    *i=*j;
    *j=Beta;
}
void result(int *Alpha,int Omega){
    for(int i=0;i<Omega;i++){
        printf("%i ",Alpha[i]);
    }
    printf("\n");
}