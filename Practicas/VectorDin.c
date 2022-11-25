#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>

void aleatorio(int *vector,int N);
int main(){
    int N=10;
    int *vector;
    vector=(int*)malloc(N*sizeof(int));
    if(vector==NULL){
        gets("No se a podiod reservar la memoria\n");
    }
    else{
        aleatorio(vector,N);
        for(int i=0;i<N; i++){
            int j=i+1;
            while(j<N){
                if (*(vector+i)==*(vector+j)){
                    for (int k=j;k+1<N;k++){
                        *(vector+k)==*(vector+k+1);
                    }
                    N--;
                }
                else{
                    j++;
                }
            }
        }
        vector=(int*)realloc(vector,N*sizeof(int));
        if(vector==NULL){
            printf("No se a podiod reservar la memoria\n");
        }
        else{
            for(int i=0;i<N;i++){
                printf("%i,",*(vector+i));
            }
            printf("\n");
        }
    }
    system("pause");
    return 0;
}
void aleatorio(int *vector,int N){
    srand(time(NULL));
    for (int i=0;i<N;i++){
        *(vector+i)=rand()%3;
        printf("%i,",*(vector+i));
    }
    printf("\n");
}