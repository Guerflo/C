#include<stdio.h>

int suma(int n);
int main(){
    int numero, resultado;
    printf("Ingrese un numero\n");
    scanf("%i",&numero);
    resultado=suma(numero);
    printf("El resultado es %i",resultado);
    return 0;
}
int suma(int n){
    if(n != 0){
        return n+suma(n-1);
    }
    else{
        return n;
    }
}