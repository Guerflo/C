#include<stdio.h>
#include<string.h>
#define RESET_COLOR "\x1b[0m"
#define NEGRO_T     "\x1b[30m"
#define NEGRO_F     "\x1b[40m"
#define ROJO_T      "\x1b[31m"
#define ROJO_F      "\x1b[41m"
#define VERDE_T     "\x1b[32m"
#define VERDE_F     "\x1b[42m"
#define AMARILLO_T  "\x1b[33m"
#define AMARILLO_F  "\x1b[43m"
#define AZUL_T      "\x1b[34m"
#define AZUL_F      "\x1b[44m"
#define MAGENTA_T   "\x1b[35m"
#define MAGENTA_F   "\x1b[45m"
#define CYAN_T      "\x1b[36m"
#define CYAN_F      "\x1b[46m"
#define BLANCO_T    "\x1b[37m"
#define BLANCO_F    "\x1b[47m"

int main(){
    char palabra[1000];
    int caracter[126];
    printf(AMARILLO_T"Dijite una palbra\n" RESET_COLOR);
    fgets(palabra,100,stdin);
    printf(VERDE_T"Su palabra es:\n%s"RESET_COLOR,palabra);
    for(int i=0;i<126;i++){
        caracter[i]=0;
    }
    for(int i=0;i<strlen(palabra);i++){
       for(int j=32;j<126;j++){
            if (palabra[i]==("%c",j)){
                caracter[j]++;
            }
            
       }
    }
    for(int i=32;i<126;i++){
        if(caracter[i]!=0){
            printf(AMARILLO_T"El caracter"CYAN_T" %c ",i);
            printf(AMARILLO_T"se repitio"CYAN_T" %i ",caracter[i]);
            printf(AMARILLO_T"veces\n"RESET_COLOR);
        }
    }
    return 0;
}