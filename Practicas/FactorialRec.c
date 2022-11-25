#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int factorial(int factor);
int main(int argc,char *argv){
    long int factor;
    printf("Dijite el valor al que se le aplicara factorial\n");
    fflush(stdin);
    scanf("%i",&factor);
    factor=factorial(factor);
    printf("El resultado es %li\n",factor);
    system("pause");
    return 0;
}
int factorial(int factor){
    if(factor==0){
        return 1;
    }
    else{
        return factor*factorial(factor-1);
    }
}