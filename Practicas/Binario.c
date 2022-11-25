#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

int Binario(int bin);
int Octal(int oct);
int Hexadecimal(int hex);
int main(int argc,char *argv){
    int alpha;
    printf("Dijite un numero a convertir en binario, octal y hexadecimal\n");
    scanf("%i",&alpha);
    printf("Su numero en Binario es: ");
    Binario(alpha);
    printf("\n");
    printf("Su numero en Octal es: ");
    Octal(alpha);
    printf("\n");
    printf("Su numero en Hexadecimal es: ");
    Hexadecimal(alpha);
    printf("\n");
    system("pause");
    return 0;
}
int Binario(int bin){
    if(bin>1){
        Binario(bin/2);
    }
    printf("%i",bin%2);
}
int Octal(int oct){
    if(oct>8){
        Octal(oct/8);
    }
    printf("%i",oct%8);
}
int Hexadecimal(int hex){
    char Hex[63];
    itoa(hex,Hex,16);
    for(int i=0;i<strlen(Hex);i++){
        printf("%c",toupper(Hex[i]));
    }
}