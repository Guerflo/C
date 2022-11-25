#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//Para manejar las funciones de los strings se deve incluir la libreria string.h

int main(){
    char alpha[20],omega[20];

    printf("Dijite su primer frase:\n");
    fgets(alpha,20,stdin);
    printf("Dijite su segunda frase:\n");
    fflush(stdin);
    fgets(alpha,20,stdin);
    //La funcion strcmp se encarga de comparar los strings alfabeticamente devolviendo un 0 si los strings son iguales y un 1 si son diferentes
    if(strcmp(alpha,omega)==0){
        printf("Los strings son iguales");
    }
    else{
        printf("Los strings no son iguales");
    }
    //Para poder imprimir dichos valores se usa un if
    return 0;
}