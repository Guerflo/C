#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define Max 50
#define Ultra 100000

int main(){
    char menu;
    char omega[Max];
    char epsilon[Max];
    char alpha[Ultra];
    printf("Hora de concatenar numeros \n");
    printf("Djite el primer numero a concatenar\n");
    fflush(stdin);
    scanf("%s",&omega);
    printf("Djite el segundo numero a concatenar\n");
    fflush(stdin);
    scanf("%s",&epsilon);
    strcpy(alpha,omega);
    strcat(alpha,epsilon);
    printf("El numero concatenado es:\n");
    printf("%s\n",alpha);
    do{
        printf("Desea concatenar un numero mas:\na) si \nb) no \n");
        fflush(stdin);
        scanf("%C",&menu);
        switch (menu){
        case 'a':
            printf("Dijite el siguiente numero a concatenar:");
            fflush(stdin);
            scanf("%s",&epsilon);
            strcat(alpha,epsilon);
            printf("El numeor concatenado es:\n");
            printf("%s\n",alpha);
            break;
        case 'b':
            printf("Hasta la proxima");
            break;
        default:
            break;
        }
    }while(menu!='b');
    return 0;
}