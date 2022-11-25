#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int BusquedaNumerica();
int BusquedaAlfabetica();
int main(){
    char menu;
    do{
        system("cls");
        printf("Bienvenido a la busqueda secuencial que desea buscar:\na)Nuemro\nb)Letra/Caracter\nc)Salir\n");
        fflush(stdin);
        scanf("%c",&menu);
        switch(menu){
        case 'a':
                system("cls");
                BusquedaNumerica();
                system("pause");
            break;
        case 'b':
                system("cls");
                BusquedaAlfabetica();
                system("pause");
            break;
        case 'c':
            printf("Gracias por visualizar\n");
            system("pause");
            break;
        default:
            break;
        }
    }while(menu!='c');
    
    return 0;
}
int BusquedaNumerica(){
    int Omega,Beta,Theta,Epsilon;
    printf("De cuantos nuemros desea el arreglo:\n");
    fflush(stdin);
    scanf("%d",&Omega);
    int Alpha[Omega];
    srand(time(NULL));
    for(int i=0;i<Omega;i++){
        Alpha[i]=1+rand()%9;
    }
    printf("Acontinuacion su arreglo:\n");
    for(int i=0;i<Omega;i++){
        printf("%d ",Alpha[i]);
    }
    printf("\nQue nuemro desea ver\n");
    fflush(stdin);
    scanf("%d",&Theta);
    for(int i=0;i<Omega;i++){
        if(Alpha[i]==Theta){
            printf("El nuemro %d se encunetra en la posision %d de su arreglo\n",Theta,i+1);
        }
        else{
            Epsilon++;
        }
    }
    if(Epsilon==Omega){
        printf("Su nuemro no se encuentra en el arreglo de numeros\n");
    }
}
int BusquedaAlfabetica(){
    char Alpha;
    printf("De que caracter desea consulatr su posicion en el codigo ASCII\n");
    fflush(stdin);
    scanf("%c",&Alpha);
    for(int i=32;i<255;i++){
        if(Alpha==("%c",i)){
            printf("Su carcater %c se encuentra en la psicion %d\n",i,i);
        }
    }
}