#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>
#include "Examen.h"

Galaxia galax[16];
char argv[5];
void usuario(char **argv);
int main(int argc,char *argv[]){
    usuario(argv);
}
void usuario(char **argv){
    informacion(galax);
}