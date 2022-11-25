#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>

void aleatorio(int vector[],int N);
int main(int argc, char const *argv[]){
   int N=3;
   int op;
   int vector[100];
   int *contador;
   contador=(int*)calloc(N,sizeof(int));
   if(contador==NULL){
       printf("El espascio no a podido ser asigando correctamente\n");
   }
   else{
       aleatorio(vector,100);
       for (int i=0;i<100;i++){
           op=vector[i];
           *(contador+op)+=1;
       }
       for (int i=0;i<N;i++){
           printf("%i,",*(contador+i));
       }
       printf("\n");
   }
    return 0;
}
void aleatorio(int vector[],int tam){
    srand(time(NULL));
    for (int i=0;i<tam;i++){
        vector[i]= rand()%3;
    }
    for (int i=0;i<100;i++){
        printf("%i,",vector[i]);
    }
    
    printf("\n");
}