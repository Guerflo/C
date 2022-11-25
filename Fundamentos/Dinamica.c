#include <stdio.h>
#include <stdlib.h>

typedef struct{
    int real;
    int imaginaria;
} VariableCompleja;

VariableCompleja resultadoAux;

VariableCompleja suma(VariableCompleja, VariableCompleja);

VariableCompleja suma(VariableCompleja operador1, VariableCompleja operador2){
    VariableCompleja var1={0,0};
    var1.real=operador1.real+operador2.real;
    var1.imaginaria=operador1.imaginaria+operador2.imaginaria;
    return var1;
}

int main(int argc, char** argv){
    //Solicitar memoria para un arreglo de enteros
    int cantidad=0;
    char menu;
    do{
        printf("Bienvenido que desar hacer:\na)Guardar la variable\nb)Imprimir la variable\nc)Salir\n");
        fflush(stdin);
        scanf("%c",&menu);
        switch (menu){
        case 'a':
            printf("Que cantidad de enteros quieres guardar\n");
            fflush(stdin);
            scanf("%d",&cantidad);
            //sintaxis: 
            //<tipo de dato>* identificador=(<tipo de dato>*)malloc(sizeof(<tipo de dato>)*numeroElementos)
            int* arregloDinamico=(int*)malloc(sizeof(int)*cantidad);
            //validación de memoria dinamica
            if(arregloDinamico==NULL){
                perror("Error, memoria insuficiente\n");
                exit(1);
            } else{
                puts("Se reservo memoria de forma exitosa\n");
            }
            free(arregloDinamico);
            break;
        case 'b':
            printf("imoprimiendo al variable guardada\n");
            printf("%i\n",cantidad);
            break;
        
        default:
            break;
        }
    } while (menu!='c');
    
}