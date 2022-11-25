#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
FILE *texto;
int main(int argc, char *argv){
    int alpha;
    char Texto,Texto2[20],Texto3[20],Texto4[20],datos[20];
    texto=fopen("Texto.txt","r");
    if(texto==NULL){
        printf("No se encuentra el archivo");
        exit(-1);
    }
    else{
        while(Texto!=EOF){
            Texto=fgetc(texto);
            printf("%c",Texto);
        }
    }
    printf("\n");
    rewind(texto);
    while(!feof(texto)){
        fgets(Texto2,100,texto);
        printf("%s",Texto2);
    }
    printf("\n");
    printf("Ingrese una cadena de caracteres\n");
    fgets(Texto3,20,stdin);
    fprintf(texto,"El dato asginado fue:",Texto3);
    while(!feof(texto)){
        fgets(Texto4,100,texto);
        printf("%s",Texto4);
    }
    fclose(texto);
    system("pause");
    return 0;
}