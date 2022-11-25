#include<stdio.h>
#include<string.h>

int factorial(int a);
int primos(int a);
int main(){
    char interfaz;
    int alpha,epsilon,primo1,primo2;
    int omega,beta;
    long int factorial1,factorial2;
    do{
        printf("Bienvenido a operadores simples que desea hacer:\na)Numeros primos\nb)Factorial\nc)Salir\n");
        scanf("%c",&interfaz);
        switch (interfaz){
        case 'a':
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
            break;
        case 'b':
            printf("Dijite el primer numero al que le aplicara factorial\n");
            scanf("%i",&omega);
            printf("Dijite el segundo numero al que le aplicara factorial\n");
            scanf("%i",&beta);
            factorial1=factorial(omega);
            factorial2=factorial(beta);
            printf("El Factorial del primer numero %i es:\n%ld\n",alpha,factorial1);
            printf("El Factorial del segundo numero %i es:\n%ld\n",epsilon,factorial2);
            break;
        default:
            break;
        }
    } while (interfaz!='c');
    return 0;
}
int primos(int a){
    int i,j,aux;
    j=0;
    for(i=2;i<a &&j==0;i++){
        aux=a%i;
        if(aux==0){
            j=1;
        }
    }
    return j;
}
int factorial(int a){ 
    long int factor;
    factor=a;
    for(a=factor-1;a>0;a--){
        factor*=a;
    } 
    return factor;
}