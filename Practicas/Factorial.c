#include<stdio.h>

int factorial();
int main(){
    int alpha,epsilon;
    long int factorial1,factorial2;
    printf("Dijite el primer numero al que le aplicara factorial\n");
    scanf("%i",&alpha);
    printf("Dijite el segundo numero al que le aplicara factorial\n");
    scanf("%i",&epsilon);
    factorial1=factorial(alpha);
    factorial2=factorial(epsilon);
    printf("El Factorial del primer numero %i es:\n%ld\n",alpha,factorial1);
    printf("El Factorial del segundo numero %i es:\n%ld\n",epsilon,factorial2);
    return 0;
}
int factorial(int a){ 
    long int factor;
    factor=a;
    for(a=factor-1;a>0;a--){
        factor*=a;
    }
    return factor;
}