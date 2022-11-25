#include<stdio.h>

int primos(int a);
int main(){
    int alpha,epsilon,primo1,primo2;
    printf("Dijite el primer numero a evaluar:\n");
    scanf("%i",&alpha);
    printf("Dijite el segundo numero a evaluar:\n");
    scanf("%i",&epsilon);
    primo1=primos(alpha);
    primo2=primos(epsilon);
    if(primo1==0){
        printf("El numero %i es primo\n",alpha);
    }
    else{
        printf("El numero %i no es primo\n",alpha);
    }
    if(primo2==0){
        printf("El numero %i es primo\n",epsilon);
    }
    else{
        printf("El numero %i no es primo\n",epsilon);
    }
    return 0;
}
int primos(int a){
    int i,j,aux;
    j=0;
    for(i=2;i<a &&j==0;i++){
        aux= a %i;
        if(aux==0){
            j=1;
        }
    }
    return j;
}