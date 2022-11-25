#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>
#include "Practica9.h"

Libreria libro[34];
char argv[5];
void usuario(char **argv);
int main(int argc,char *argv[]){
    usuario(argv);
}
void usuario(char **argv){
    printf("Nombre: %s\n",argv[1]);
    printf("Apellido: %s\n",argv[2]);
    printf("Edad: %s\n",argv[3]);
    printf("Donativo: $%s\n",argv[4]);
    informacion(libro);
}