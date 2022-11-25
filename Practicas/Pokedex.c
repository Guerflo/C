#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define Fil 34
#define Col 6
#define Max 50

typedef struct {
    char ID[Max];
    char NOMBRE[Max];
    char DIMENSIONES[Max];
    char FUENTE[Max];
    char COSTO[Max];
    char DISPONIBLIDAD[Max];
}Libreria;

Libreria libro[34];
char argv[5];
void usuario(char **argv);
void informacion(Libreria *libro);
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
void informacion(Libreria *libro){
    int lambda,omega,delta,gamma;
    char libreria,menu;
    char alpha[Fil][Col][Max]={ 
        {{"ID"},{"NOMBRE DEL LIBRO            "},{"DIEMNSIONES"},{"FUENTE           "},{"COSTO"},{"DISPONIBILIDAD"}},
        {{"1 "},{"Anecdota de un dia          "},{"8.5  3.18  "},{"Tahoma black     "},{"$6.25"},{"20 Unidades   "}},
        {{"2 "},{"Burros Blancos              "},{"7.5  0.74  "},{"Agency           "},{"$3.0 "},{"20 Unidades   "}},
        {{"3 "},{"Cien anos y uno mas         "},{"6.5  0.3   "},{"Abscissa         "},{"$7.92"},{"20 Unidades   "}},
        {{"4 "},{"Diamantes y dados           "},{".5  0.14   "},{"HP Simplified    "},{"$1.17"},{"20 Unidades   "}},
        {{"5 "},{"El avestrus                 "},{"4.5  0.58  "},{"Arial            "},{"$4.94"},{"20 Unidades   "}},
        {{"6 "},{"El cuento                   "},{"3.5  0.46  "},{"Calibri          "},{"$5.80"},{"20 Unidades   "}},
        {{"7 "},{"Elefantes                   "},{"2.5  1.46  "},{"Impact           "},{"$5.66"},{"20 Unidades   "}},
        {{"8 "},{"Fiestas                     "},{"1.5  1.9   "},{"alanis hand      "},{"$1.69"},{"20 Unidades   "}},
        {{"9 "},{"Gatoman                     "},{"0.5  2.34  "},{"Jasmine UPC      "},{"$0.28"},{"20 Unidades   "}},
        {{"10"},{"Hipopotamos en su habitat   "},{"0.5  2.78  "},{"Latha            "},{"$9.87"},{"20 Unidades   "}},
        {{"11"},{"Italia, un nuevo mundo      "},{"1.5  3.22  "},{"Kaiti            "},{"$2.47"},{"20 Unidades   "}},
        {{"12"},{"Juanacatlan, pueblo magico  "},{"2.5  3.66  "},{"Nyala            "},{"$4.35"},{"20 Unidades   "}},
        {{"13"},{"Kids, where are them?       "},{"3.5  4.1   "},{"Verdana          "},{"$1.06"},{"20 Unidades   "}},
        {{"14"},{"La nina                     "},{"4.5  4.54  "},{"Tahoma           "},{"$3.99"},{"20 Unidades   "}},
        {{"15"},{"Metafisica                  "},{"5.5  4.98  "},{"Modern           "},{"$2.26"},{"20 Unidades   "}},
        {{"16"},{"Nuevos horizontes           "},{"6.5  5.42  "},{"Univers          "},{"$3.51"},{"20 Unidades   "}},
        {{"17"},{"Osos polares                "},{"7.5  5.86  "},{"Yu Gothic        "},{"$3.47"},{"20 Unidades   "}},
        {{"18"},{"Pato Hood                   "},{"8.5  6.3   "},{"Ravie            "},{"$9.46"},{"20 Unidades   "}},
        {{"19"},{"Poblaciones vulnerables     "},{"9.5  6.74  "},{"OCRB             "},{"$2.07"},{"20 Unidades   "}},
        {{"20"},{"Quo duo                     "},{"10.5 7.18  "},{"Selawik          "},{"$5.68"},{"20 Unidades   "}},
        {{"21"},{"Robin Hood                  "},{"11.5 7.62  "},{"Perpetua         "},{"$6.77"},{"20 Unidades   "}},
        {{"22"},{"Significado de la vida      "},{"12.5 8.06  "},{"Times            "},{"$8.00"},{"20 Unidades   "}},
        {{"23"},{"Soberanos                   "},{"13.5 8.5   "},{"Webdings         "},{"$2.93"},{"20 Unidades   "}},
        {{"24"},{"Trasatlantico               "},{"14.5 8.94  "},{"Sweet Pea        "},{"$9.35"},{"20 Unidades   "}},
        {{"25"},{"Trasportes en el futuro     "},{"15.5 9.38  "},{"Bell MT          "},{"$7.57"},{"20 Unidades   "}},
        {{"26"},{"Trotamundos                 "},{"16.5 9.82  "},{"Ebrima           "},{"$5.11"},{"20 Unidades   "}},
        {{"27"},{"Uvas para el vino           "},{"17.5 10.26 "},{"Mangal           "},{"$9.69"},{"20 Unidades   "}},
        {{"28"},{"Verduras y frutas           "},{"18.5 10.7  "},{"Cambria          "},{"$9.63"},{"20 Unidades   "}},
        {{"29"},{"Viajando ando               "},{"19.5 11.14 "},{"Dotum            "},{"$9.67"},{"20 Unidades   "}},
        {{"30"},{"Walter Cross, Quien fue?    "},{"20.5 11.58 "},{"Papyrus          "},{"$0.74"},{"20 Unidades   "}},
        {{"31"},{"Xcaret, un lugar magico     "},{"21.5 12.02 "},{"Arial Black      "},{"$8.66"},{"20 Unidades   "}},
        {{"32"},{"Yardas                      "},{"22.5 12.46 "},{"Georgia          "},{"$2.51"},{"20 Unidades   "}},
        {{"33"},{"Zapato Viejo                "},{"23.5 12.9  "},{"French script    "},{"$1.12"},{"20 Unidades   "}}};

    for(int i=0;i<Fil;i++){
        strcpy(libro[i].ID,alpha[i][0]);
        strcpy(libro[i].NOMBRE,alpha[i][1]);
        strcpy(libro[i].DIMENSIONES,alpha[i][2]);
        strcpy(libro[i].FUENTE,alpha[i][3]);
        strcpy(libro[i].COSTO,alpha[i][4]);
        strcpy(libro[i].DISPONIBLIDAD,alpha[i][5]);
    }
    do{
        puts("Que informacion dese visualizar o editar:\n a) Informacion completa del inventario\n b) Nombre de los libros\n c) Dimensiones y Fuente de los libros\n d) Costo y Disponibilidad de los libros\n e) Salir de la interfaz");
        fflush(stdin);
        scanf("%c", &libreria);
        switch (libreria){
            case'a':
                system("cls");
                printf("Presentando la informacion completa del inventario\n");
                for (int i=0;i<Fil;i++){
                    printf("%s\t%s\t%s\t%s\t%s\t%s\n",libro[i].ID,libro[i].NOMBRE,libro[i].DIMENSIONES,libro[i].FUENTE,libro[i].COSTO,libro[i].DISPONIBLIDAD);
                }
                break;
            case'b':
                system("cls");
                printf("Presentando ID y Nombres de los libros\n");
                for (int i=0;i<Fil;i++){
                    printf("%s\t%s\n",libro[i].ID,libro[i].NOMBRE);
                }
                printf("Desea editar el nombre del libro:\nY o N\n");
                fflush(stdin);
                scanf("%c",&menu);
                switch (menu){
                    case'Y':
                        printf("Dijite la ID del libro que desea editar\n");
                        fflush(stdin);
                        scanf("%i",&lambda);
                        printf("Dijite el nuevo titulo\n");
                        fflush(stdin);
                        gets(libro[lambda].NOMBRE);
                        system("cls");
                        printf("Presentando la nueva informacion:\n");
                        for (int i=0;i<Fil;i++){
                            printf("%s\t%s\n",libro[i].ID,libro[i].NOMBRE);
                        }
                    case'N':
                        break;
                    default:
                        printf("Dijite una opcion valida");
                        break;
                    }
                break;
            case'c':
                system("cls");
                printf("Presentando Dimensiones y Fuente de los libros\n");
                for (int i=0;i<Fil;i++){
                    printf("%s\t%s\t%s\n",libro[i].ID,libro[i].DIMENSIONES,libro[i].FUENTE);
                }
                printf("Desea editar alguna caracteristica del libro:\nY o N\n");
                fflush(stdin);
                scanf("%c",&menu);
                switch (menu){
                    case'Y':
                        printf("Dijite la ID del libro:\n");
                        fflush(stdin);
                        scanf("%i",&omega);
                        printf("Que carcateristica desea editar:\n a) Dimensiones\n b) Fuente\n");
                        fflush(stdin);
                        scanf("%c",&menu);
                        switch (menu){
                            case'a':
                                printf("Dijite las nuevas dimensiones siguiendo el mismo formato\n");
                                fflush(stdin);
                                gets(libro[omega].DIMENSIONES);
                                system("cls");
                                printf("Presentando la nueva informacion\n");
                                for (int i=0;i<Fil;i++){
                                    printf("%s\t%s\t%s\n",libro[i].ID,libro[i].DIMENSIONES,libro[i].FUENTE);
                                }
                                break;
                            case'b':
                                printf("Dijite la nueva funte siguiendo el mismo formato\n");
                                fflush(stdin);
                                gets(libro[omega].FUENTE);
                                system("cls");
                                printf("Presentando la nueva informacion:\n");
                                for (int i=0;i<Fil;i++){
                                    printf("%s\t%s\t%s\n",libro[i].ID,libro[i].DIMENSIONES,libro[i].FUENTE);
                                }
                                break;
                            default:
                                printf("Ingrese una opcion valida");
                                break;
                        }
                        break;
                    case'N':
                        break;
                    default:
                        break;
                }
                break;
            case'd':
                system("cls");
                puts("Presentando Costo y Disponibilidad de los libros\n");
                for (int i=0;i<Fil;i++){
                    printf("%s\t%s\t%s\n",libro[i].ID,libro[i].COSTO,libro[i].DISPONIBLIDAD);
                }
                printf("Desea editar alguna caracteristica del libro:\nY o N\n");
                fflush(stdin);
                scanf("%c",&menu);
                switch (menu){
                    case'Y':
                        printf("Dijite la ID del libro:\n");
                        fflush(stdin);
                        scanf("%i",&delta);
                        puts("Que carcateristica desea editar:\n a) Costo\n b) Disponibilidad\n");
                        fflush(stdin);
                        scanf("%c",&menu);
                        switch (menu){
                            case'a':
                                printf("Dijite el nuevo Costo siguiendo el mismo formato\n");
                                fflush(stdin);
                                gets(libro[delta].COSTO);
                                system("cls");
                                printf("Presentando la nueva informacion\n");
                                for (int i=0;i<Fil;i++){
                                    printf("%s\t%s\t%s\n",libro[i].ID,libro[i].COSTO,libro[i].DISPONIBLIDAD);
                                }
                                break;
                            case'b':
                                printf("Dijite la nueva Disponibilidad siguiendo el mismo formato\n");
                                fflush(stdin);
                                gets(libro[delta].DISPONIBLIDAD);
                                system("cls");
                                printf("Presentando la nueva informacion:\n");
                                for (int i=0;i<Fil;i++){
                                    printf("%s\t%s\t%s\n",libro[i].ID,libro[i].COSTO,libro[i].DISPONIBLIDAD);
                                }
                                break;
                            default:
                                printf("Ingrese una opcion valida");
                                break;
                        }
                        break;
                    case'N':
                        break;
                    default:
                        break;
                }
                break;
            case'e':
                printf("Saliendo de la interfaz hasta la proxima :) \n");
                break;
        }   
    }while(libreria!='e');
    system("pause");
}