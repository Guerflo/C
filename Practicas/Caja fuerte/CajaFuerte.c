#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
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
#define Ult 20000
#define Com 1000
#define Hue 5
#define Num 1
FILE *banco;

int main(){
    int caja[Com][Hue][Num]={},reserva[Com][Hue][Num]={};
    int a,A,B,C,D,E,F,G,H,I,J;
    char sistema[Ult];
    char menu,sub;
    do{
        system("cls");
        printf(VERDE_T"Bienvenido que desea hacer;\n"CYAN_T"a)Calcular contrase%cas\nb)Guardar banco de contrase%cas\nc)Consultar banco anterior\n"ROJO_T"d)Salir\n"RESET_COLOR,164,164);
        scanf("%c",&menu);
        a=0;
        switch(menu){
        case 'a':
            system("cls");
            printf(AMARILLO_T"Introduzca los cinco d%cgitos uno a uno de la ocntrase%ca:\n"RESET_COLOR,161,164);
            fflush(stdin);
            scanf("%i",&A);
            scanf("%i",&B);
            scanf("%i",&C);
            scanf("%i",&D);
            scanf("%i",&E);
            do{
                srand(time(NULL));
                for (int i=1;i<Com;i++){
                    for (int j= 0;j<Hue;j++){
                        caja[i][j][0]=1+rand()%9;
                    }
                }
                caja[0][0][0]=A;
                caja[0][1][0]=B;
                caja[0][2][0]=C;
                caja[0][3][0]=D;
                caja[0][4][0]=E;
                for (int i=1;i<Com;i++){
                    if(caja[i][0][0]==caja[0][0][0]){
                        if(caja[i][1][0]==caja[0][1][0]){
                            if(caja[i][2][0]==caja[0][2][0]){
                                if(caja[i][3][0]==caja[0][3][0]){
                                    if(caja[i][4][0]==caja[0][4][0]){
                                        a++;
                                    }
                                    else{
                                        continue;
                                    }
                                }
                                else{
                                    continue;
                                }
                            }
                            else{
                                continue;
                            }
                        }
                        else{
                            continue;
                        }
                    }
                    else{
                        continue;
                    }
                }
                printf(ROJO_T"Tu contrase%ca se repite %i veces de 1000 casos\n"RESET_COLOR,164,a);
                break;
            }while(C!=10);
            system("pause");
            break;
        case 'b':
            system("cls");
            printf(MAGENTA_T"Guardando datos de banco\n"RESET_COLOR);
            banco=fopen("CajaFuerte.txt","w");
                if(banco==NULL){
                    printf(ROJO_T"No se encuentra el archivo\n"RESET_COLOR);
                    exit(-1);
                }
                else{
                    rewind(banco);
                    for (int i=0;i<Com;i++){
                            fprintf(banco,"%i%i%i%i%i\n",caja[i][0][0],caja[i][1][0],caja[i][2][0],caja[i][3][0],caja[i][4][0]);
                    }
                    printf(VERDE_T"Se guardaron los datos exitosamente :)\n"RESET_COLOR);
                }
            system("pause");
            break;
        case 'c':
            system("cls");
            printf(AMARILLO_T"Presentando las contrase%cas guardadas\n"RESET_COLOR,164);
            banco=fopen("CajaFuerte.txt","r");
            if(banco==NULL){
                printf(ROJO_T"No se encuentra el archivo\n"RESET_COLOR);
                exit(-1);
            }
            else{
                while(!feof(banco)){
                    fgets(sistema,Ult,banco);
                    printf(VERDE_T"%s"RESET_COLOR,sistema);
                }
            }
            printf(MAGENTA_T"Desea comparar una nueva contraseña con el banco anterior:\na)Si\nb)No\n"RESET_COLOR);
            scanf("%c",&sub);
            switch(sub){
            case 'a':
                printf(AMARILLO_T"Introduzca los cinco d%cgitos uno a uno de la ocntrase%ca:\n"RESET_COLOR,161,164);
                fflush(stdin);
                scanf("%i",&F);
                scanf("%i",&G);
                scanf("%i",&H);
                scanf("%i",&I);
                scanf("%i",&J);
                for (int i=0;i<Ult;i++){
                    for (int j= 0;j<Com;j++){
                        for(int k=0;k<Hue;k++){
                            reserva[j][k][0]=sistema[i]-'0';
                        }
                    }
                }
                for (int i=0;i<Com;i++){
                    for (int j= 0;j<Hue;j++){
                        printf("%i%i%i%i%i\n",caja[i][j][0],caja[i][j][0],caja[i][j][0],caja[i][j][0],caja[i][j][0]);
                    }
                }
                break;
            case 'b':
                printf(CYAN_T"Volviendo a la interfaz principal\n"RESET_COLOR);
                break;
            default:
                break;
            }
            system("pause");
            break;
        case 'd':
            system("cls");
            printf(MAGENTA_T"Hasta la proxima vuelva pronto\n"RESET_COLOR);
            system("pause");
            break;
        default:
            break;
        }
    } while (menu!='d');
    return 0;
}