#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(int argc,char *argv){
    char *alpha[50],*omega[50],*epsilon[100];
    printf("Inserete la primera palabra a concatenar\n");
    fflush(stdin);
    scanf("%s",&alpha);
    printf("Inserete la segunda palabra a concatenar\n");
    fflush(stdin);
    scanf("%s",&omega);
    for (int i=0;i<20;i+2){
        strcpy(epsilon[i],alpha[i]);
    }
    for (int i=1;i<20;i+2){
        strcpy(epsilon[i],omega[i]);
    }
    printf("Aqui esta su palabra concatenada:\n%s",epsilon);
    system("pause");
    return 0;
}