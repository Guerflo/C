#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define Fil 34
#define Col 5
#define Max 50

int main(){
    int lambda,omega,delta,gamma;
    char libreria,menu;
    char alpha[Fil][Col][Max]={ 
        {{"ID"},{"NOMBRE DEL LIBRO            "},{"DIEMNSIONES"},{"FUENTE           "},{"COSTO"}},
        {{"1 "},{"Anecdota de un dia          "},{"8.5  3.18  "},{"Tahoma black     "},{"$6.25"}},
        {{"2 "},{"Burros Blancos              "},{"7.5  0.74  "},{"Agency           "},{"$3.0 "}},
        {{"3 "},{"Cien anos y uno mas         "},{"6.5  0.3   "},{"Abscissa         "},{"$7.92"}},
        {{"4 "},{"Diamantes y dados           "},{".5  0.14   "},{"HP Simplified    "},{"$1.17"}},
        {{"5 "},{"El avestrus                 "},{"4.5  0.58  "},{"Arial            "},{"$4.94"}},
        {{"6 "},{"El cuento                   "},{"3.5  0.46  "},{"Calibri          "},{"$5.80"}},
        {{"7 "},{"Elefantes                   "},{"2.5  1.46  "},{"Impact           "},{"$5.66"}},
        {{"8 "},{"Fiestas                     "},{"1.5  1.9   "},{"alanis hand      "},{"$1.69"}},
        {{"9 "},{"Gatoman                     "},{"0.5  2.34  "},{"Jasmine UPC      "},{"$0.28"}},
        {{"10"},{"Hipopotamos en su habitat   "},{"0.5  2.78  "},{"Latha            "},{"$9.87"}},
        {{"11"},{"Italia, un nuevo mundo      "},{"1.5  3.22  "},{"Kaiti            "},{"$2.47"}},
        {{"12"},{"Juanacatlan, pueblo magico  "},{"2.5  3.66  "},{"Nyala            "},{"$4.35"}},
        {{"13"},{"Kids, where are them?       "},{"3.5  4.1   "},{"Verdana          "},{"$1.06"}},
        {{"14"},{"La nina                     "},{"4.5  4.54  "},{"Tahoma           "},{"$3.99"}},
        {{"15"},{"Metafisica                  "},{"5.5  4.98  "},{"Modern           "},{"$2.26"}},
        {{"16"},{"Nuevos horizontes           "},{"6.5  5.42  "},{"Univers          "},{"$3.51"}},
        {{"17"},{"Osos polares                "},{"7.5  5.86  "},{"Yu Gothic        "},{"$3.47"}},
        {{"18"},{"Pato Hood                   "},{"8.5  6.3   "},{"Ravie            "},{"$9.46"}},
        {{"19"},{"Poblaciones vulnerables     "},{"9.5  6.74  "},{"OCRB             "},{"$2.07"}},
        {{"20"},{"Quo duo                     "},{"10.5 7.18  "},{"Selawik          "},{"$5.68"}},
        {{"21"},{"Robin Hood                  "},{"11.5 7.62  "},{"Perpetua         "},{"$6.77"}},
        {{"22"},{"Significado de la vida      "},{"12.5 8.06  "},{"Times            "},{"$8.00"}},
        {{"23"},{"Soberanos                   "},{"13.5 8.5   "},{"Webdings         "},{"$2.93"}},
        {{"24"},{"Trasatlantico               "},{"14.5 8.94  "},{"Sweet Pea        "},{"$9.35"}},
        {{"25"},{"Trasportes en el futuro     "},{"15.5 9.38  "},{"Bell MT          "},{"$7.57"}},
        {{"26"},{"Trotamundos                 "},{"16.5 9.82  "},{"Ebrima           "},{"$5.11"}},
        {{"27"},{"Uvas para el vino           "},{"17.5 10.26 "},{"Mangal           "},{"$9.69"}},
        {{"28"},{"Verduras y frutas           "},{"18.5 10.7  "},{"Cambria          "},{"$9.63"}},
        {{"29"},{"Viajando ando               "},{"19.5 11.14 "},{"Dotum            "},{"$9.67"}},
        {{"30"},{"Walter Cross, Quien fue?    "},{"20.5 11.58 "},{"Papyrus          "},{"$0.74"}},
        {{"31"},{"Xcaret, un lugar magico     "},{"21.5 12.02 "},{"Arial Black      "},{"$8.66"}},
        {{"32"},{"Yardas                      "},{"22.5 12.46 "},{"Georgia          "},{"$2.51"}},
        {{"33"},{"Zapato Viejo                "},{"23.5 12.9  "},{"French script    "},{"$1.12"}}};
    do{
        printf("Que informacion desea visualizar: \n a) informacion completa del inventario \n b) Informacion ID y Nombre del libro \n c) Mostrar caracteristicas (Precio, Dimensiones, Fuente) del libro \n d)Salir del programa \n");
        fflush(stdin);
        scanf("%c", &libreria);
        switch (libreria){
            case'a':
                printf("Presentando la informacion completa del inventario\n");
                for (int i=0;i<Fil;++i){
                    for (int j=0;j<Col;j++){
                        for (int k=0;k<Max;k++){
                            printf("%c",alpha[i][j][k]);
                            }
                            printf("\t");
                        }
                        printf("\n");
                    }
                break;
            case'b':
                printf("Presentando ID y Nombres de los libros\n");
                for(int i=0;i<Fil;++i){
                        for (int j=0;j<2;j++){
                            for (int k=0;k<Max;k++){
                                printf("%c",alpha[i][j][k]);
                            }
                            printf("\t");
                        }
                        printf("\n");
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
                        gets(alpha[lambda][1]);
                        printf("Presentando la nueva informacion:\n");
                        for(int i=0;i<Fil;++i){
                            for (int j=0;j<2;j++){
                                for (int k=0;k<Max;k++){
                                    printf("%c",alpha[i][j][k]);
                                }
                                printf("\t");
                            }
                            printf("\n");
                        }
                    case'N':
                        break;
                    default:
                        printf("Dijite una opcion valida");
                        break;
                    }
                break;
            case'c':
                printf("Presentando carcateristicas de los libros\n");
                for (int i=0;i<Fil;++i){
                    for (int j=2;j<5;j++){
                        for (int k=0;k<Max;k++){
                            printf("%c",alpha[i][j][k]);
                        }
                        printf("\t");
                    }
                    printf("\n");
                }
                printf("Desea editar alguna caracteristica del libro:\nY o N\n");
                fflush(stdin);
                scanf("%c",&menu);
                switch (menu){
                    case'Y':
                        printf("Dijite la ID del libro:\n");
                        fflush(stdin);
                        scanf("%i",&omega);
                        printf("Que carcateristica desea editar:\na)Dimensiones\nb)Fuente\nc)Costo\n");
                        fflush(stdin);
                        scanf("%c",&menu);
                        switch (menu){
                            case'a':
                                printf("Dijite las nuevas dimensiones siguiendo el mismo formato\n");
                                fflush(stdin);
                                gets(alpha[omega][2]);
                                printf("Presentando la nueva informacion\n");
                                for (int i=0;i<Fil;++i){
                                    for (int j=2;j<5;j++){
                                        for (int k=0;k<Max;k++){
                                            printf("%c",alpha[i][j][k]);
                                        }
                                        printf("\t");
                                    }
                                    printf("\n");
                                }
                                break;
                            case'b':
                                printf("Dijite la nueva funete siguiendo el mismo formato\n");
                                fflush(stdin);
                                gets(alpha[omega][3]);
                                printf("Presentando la nueva informacion:\n");
                                for (int i=0;i<Fil;++i){
                                    for (int j=2;j<5;j++){
                                        for (int k=0;k<Max;k++){
                                            printf("%c",alpha[i][j][k]);
                                        }
                                        printf("\t");
                                    }
                                    printf("\n");
                                }
                                break;
                            case'c':
                                printf("Dijite el nuevo costo siguiendo el mismo formato\n");
                                fflush(stdin);
                                gets(alpha[omega][4]);
                                printf("Presentando la nueva informacion:\n");
                                for (int i=0;i<Fil;++i){
                                    for (int j=2;j<5;j++){
                                        for (int k=0;k<Max;k++){
                                            printf("%c",alpha[i][j][k]);
                                        }
                                        printf("\t");
                                    }
                                    printf("\n");
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
            case'd':
                printf("Saliendo de la interfaz\n");
                break;
        }   
    }while(libreria!='d');
    return 0;
}