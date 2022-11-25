#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define Fil 15
#define Col 5
#define Max 50
#define Ult 500000

FILE *universo;

typedef struct {
    char ID[Max];
    char NOMBRE[Max];
    char ESTRELLA[Max];
    char PLANETA[Max];
    char LUNAS[Max];
}Galaxia;

void informacion(Galaxia *galax);
void informacion(Galaxia *galax){
    int lambda,omega,delta,gamma;
    char libreria,menu,Texto[Fil][Col][Max],CadenaAux[Ult];
    char alpha[Fil][Col][Max]={ 
        {{"ID"},{"GALAXIAS                     "},{"ESTRELLAS                          "},{"PLANETAS                  "},{"LUNAS                                  "}},
        {{"01"},{"Via lactea                   "},{"Rigel, Vega, Alfa Centauri A,Arturo"},{"Venus,Tierra,Marte,Jupiter"},{"Aitne,Arche,Autonoe,Callirrhoe,Chaldene"}},
        {{"02"},{"Galaxia Cometa               "},{"Rigel, Vega, Alfa Centauri A,Arturo"},{"Venus,Tierra,Marte,Jupiter"},{"Aitne,Arche,Autonoe,Callirrhoe,Chaldene"}},
        {{"03"},{"Galaxia Circinus             "},{"Rigel, Vega, Alfa Centauri A,Arturo"},{"Venus,Tierra,Marte,Jupiter"},{"Aitne,Arche,Autonoe,Callirrhoe,Chaldene"}},
        {{"04"},{"Galaxia Baby Boom            "},{"Rigel, Vega, Alfa Centauri A,Arturo"},{"Venus,Tierra,Marte,Jupiter"},{"Aitne,Arche,Autonoe,Callirrhoe,Chaldene"}},
        {{"05"},{"Galaxias Antennae            "},{"Rigel, Vega, Alfa Centauri A,Arturo"},{"Venus,Tierra,Marte,Jupiter"},{"Aitne,Arche,Autonoe,Callirrhoe,Chaldene"}},
        {{"06"},{"Enana de Carina              "},{"Rigel, Vega, Alfa Centauri A,Arturo"},{"Venus,Tierra,Marte,Jupiter"},{"Aitne,Arche,Autonoe,Callirrhoe,Chaldene"}},
        {{"07"},{"Enana de Draco               "},{"Rigel, Vega, Alfa Centauri A,Arturo"},{"Venus,Tierra,Marte,Jupiter"},{"Aitne,Arche,Autonoe,Callirrhoe,Chaldene"}},
        {{"08"},{"Dwingeloo 1                  "},{"Rigel, Vega, Alfa Centauri A,Arturo"},{"Venus,Tierra,Marte,Jupiter"},{"Aitne,Arche,Autonoe,Callirrhoe,Chaldene"}},
        {{"09"},{"Andromeda I                  "},{"Rigel, Vega, Alfa Centauri A,Arturo"},{"Venus,Tierra,Marte,Jupiter"},{"Aitne,Arche,Autonoe,Callirrhoe,Chaldene"}},
        {{"10"},{"Enana Irregular de Sagitario "},{"Rigel, Vega, Alfa Centauri A,Arturo"},{"Venus,Tierra,Marte,Jupiter"},{"Aitne,Arche,Autonoe,Callirrhoe,Chaldene"}},
        {{"11"},{"Enana de Fénix               "},{"Rigel, Vega, Alfa Centauri A,Arturo"},{"Venus,Tierra,Marte,Jupiter"},{"Aitne,Arche,Autonoe,Callirrhoe,Chaldene"}},
        {{"12"},{"Enana de Draco               "},{"Rigel, Vega, Alfa Centauri A,Arturo"},{"Venus,Tierra,Marte,Jupiter"},{"Aitne,Arche,Autonoe,Callirrhoe,Chaldene"}},
        {{"13"},{"Galaxia Circinus             "},{"Rigel, Vega, Alfa Centauri A,Arturo"},{"Venus,Tierra,Marte,Jupiter"},{"Aitne,Arche,Autonoe,Callirrhoe,Chaldene"}},
        {{"14"},{"Enana de Acuario             "},{"Rigel, Vega, Alfa Centauri A,Arturo"},{"Venus,Tierra,Marte,Jupiter"},{"Aitne,Arche,Autonoe,Callirrhoe,Chaldene"}}};
    for(int i=0;i<Fil;i++){
        strcpy(galax[i].ID,alpha[i][0]);
        strcpy(galax[i].NOMBRE,alpha[i][1]);
        strcpy(galax[i].ESTRELLA,alpha[i][2]);
        strcpy(galax[i].PLANETA,alpha[i][3]);
        strcpy(galax[i].LUNAS,alpha[i][4]);
    }
    do{
        puts("Que informacion dese visualizar o editar:\n a) Informacion completa del universo\n b) Nombre de las galaxias\n c) Estrellas\n d) Planetas\n e) Lunas\n f) Guardar datos\n g) Visualizar informacion guardada\n h) Salir de la interfaz");
        fflush(stdin);
        scanf("%c", &libreria);
        switch (libreria){
            case'a':
                system("cls");
                printf("Presentando la informacion completa del Universo\n");
                for (int i=0;i<Fil;i++){
                    printf("%s\t%s\t%s\t%s\t%s\n",galax[i].ID,galax[i].NOMBRE,galax[i].ESTRELLA,galax[i].PLANETA,galax[i].LUNAS);
                }
                break;
            case'b':
                system("cls");
                printf("Presentando ID y Nombres de las Galaxias\n");
                for (int i=0;i<Fil;i++){
                    printf("%s\t%s\n",galax[i].ID,galax[i].NOMBRE);
                }
                printf("Desea editar el nombre de una galaxia:\nY o N\n");
                fflush(stdin);
                scanf("%c",&menu);
                switch (menu){
                    case 'Y':
                        printf("Dijite la ID de la galixia que desea editar\n");
                        fflush(stdin);
                        scanf("%i",&lambda);
                        printf("Dijite el nuevo nombre\n");
                        fflush(stdin);
                        gets(galax[lambda].NOMBRE);
                        system("cls");
                        printf("Presentando la nueva informacion:\n");
                        for (int i=0;i<Fil;i++){
                            printf("%s\t%s\n",galax[i].ID,galax[i].NOMBRE);
                        }
                    case 'N':
                        break;
                    default:
                        printf("Dijite una opcion valida");
                        break;
                    }
                break;
            case'c':
                system("cls");
                printf("Presentando las Estrellas\n");
                for (int i=0;i<Fil;i++){
                    printf("%s\t%s\n",galax[i].ID,galax[i].ESTRELLA);
                }
                printf("Desea editar algun nombre:\nY o N\n");
                fflush(stdin);
                scanf("%c",&menu);
                switch (menu){
                    case 'Y':
                        printf("Dijite la ID de la estrella:\n");
                        fflush(stdin);
                        scanf("%i",&omega);
                        printf("Dijite los nuevos nombres\n");
                        fflush(stdin);
                        gets(galax[omega].ESTRELLA);
                        system("cls");
                        printf("Presentando la nueva informacion\n");
                        for(int i=0;i<Fil;i++){
                            printf("%s\t%s\n",galax[i].ID,galax[i].ESTRELLA);
                        }
                        break;
                    case 'N':
                        break;
                    default:
                        break;
                }
                break;
            case'd':
                system("cls");
                puts("Presentando Planetas\n");
                for (int i=0;i<Fil;i++){
                    printf("%s\t%s\n",galax[i].ID,galax[i].PLANETA);
                }
                printf("Desea editar algun nombre:\nY o N\n");
                fflush(stdin);
                scanf("%c",&menu);
                switch (menu){
                    case 'Y':
                        printf("Dijite la ID del planeta:\n");
                        fflush(stdin);
                        scanf("%i",&delta);
                        puts("Dijite los nuevos nombres\n");
                        fflush(stdin);
                        gets(galax[delta].PLANETA);
                        system("cls");
                        printf("Presentando la nueva informacion\n");
                        for (int i=0;i<Fil;i++){
                            printf("%s\t%s\n",galax[i].ID,galax[i].PLANETA);
                        }
                        break;
                    case 'N':
                        break;
                    default:
                        break;
                }
                break;
            case'e':
                system("cls");
                puts("Presentando Lunas\n");
                for (int i=0;i<Fil;i++){
                    printf("%s\t%s\n",galax[i].ID,galax[i].LUNAS);
                }
                printf("Desea editar algun nombre:\nY o N\n");
                fflush(stdin);
                scanf("%c",&menu);
                switch (menu){
                    case 'Y':
                        printf("Dijite la ID de la luna:\n");
                        fflush(stdin);
                        scanf("%i",&gamma);
                        puts("Dijite los nuevos nombres\n");
                        fflush(stdin);
                        gets(galax[gamma].LUNAS);
                        system("cls");
                        printf("Presentando la nueva informacion\n");
                        for (int i=0;i<Fil;i++){
                            printf("%s\t%s\n",galax[i].ID,galax[i].LUNAS);
                        }
                        break;
                    case 'N':
                        break;
                    default:
                        break;
                }
                break;
            case'f':
                universo=fopen("Texto.txt","w");
                if(universo==NULL){
                    printf("No se encuentra el archivo");
                    exit(-1);
                }
                else{
                    system("cls");
                    rewind(universo);
                    for(int i=0;i<Fil;i++){
                        fprintf(universo,"%s\t%s\t%s\t%s\t%s\n",galax[i].ID,galax[i].NOMBRE,galax[i].ESTRELLA,galax[i].PLANETA,galax[i].LUNAS);
                    }
                    printf("Se guardaron los datos exitosamente :)\n");
                }
                break;
            case'g':
                system("cls");
                universo=fopen("Texto.txt","r");
                if(universo==NULL){
                    printf("No se encuentra el archivo");
                    exit(-1);
                }
                else{
                    while(!feof(universo)){
                        fgets(CadenaAux,Ult,universo);
                        printf("%s",CadenaAux);
                    }
                }
                break;
            case'h':
                printf("Saliendo de la interfaz hasta la proxima :) \n");
                break;
        }
    }while(libreria!='h');
    fclose(universo);
    system("pause");
}