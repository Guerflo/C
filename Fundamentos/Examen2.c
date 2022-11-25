#include<stdio.h>
#include<string.h>
#define Ultra 100000
#define Com 1000
#define Max 50
#define Fil 50
#define Hue 5
#define Col 5
#define Num 1

int primos(int a);
int main(){
    char menu;
    char omega[2];
    char epsilon[Max];
    char alpha[Ultra];
    char beta[Ultra];
    char menuin;
    char interfaz;
    int A,B,C,D,E,F,G,H,I,J;
    int rep;
    int a;
    char caja[1][10][Num]={
        {A,B,C,D,E,F,G,H,I,J}
    };
    char orden[10][2];
    int xi,primo1,primo2;
    int theta,delta;
    long int factorial1,factorial2;
    int lambda,phi;
    char zeta[Max];
    char libreria,MenuP;
    char pokedex[Fil][Col][Max]={ 
        {{"ID"},{"NOMBRE DEL PERSOANJE        "},{"TIPO"},{"FUERZA  "},{"VIDA"}},
        {{"1 "},{"Bulbasaur                   "},{"PLAN"},{"12      "},{"6.25"}},
        {{"2 "},{"Ivysaur                     "},{"PLAN"},{"13      "},{"3.0 "}},
        {{"3 "},{"Venusaur                    "},{"PLAN"},{"14      "},{"7.92"}},
        {{"4 "},{"Charmander                  "},{"FUEG"},{"12      "},{"1.17"}},
        {{"5 "},{"Charmeleon                  "},{"FUEG"},{"13      "},{"4.94"}},
        {{"6 "},{"Charizard                   "},{"FUEG"},{"14      "},{"5.80"}},
        {{"7 "},{"Squirtle                    "},{"AGUA"},{"12      "},{"5.66"}},
        {{"8 "},{"Wartortle                   "},{"AGUA"},{"13      "},{"1.69"}},
        {{"9 "},{"Blastoise                   "},{"AGUA"},{"14      "},{"0.28"}},
        {{"10"},{"Caterpie                    "},{"INSE"},{"12      "},{"9.87"}},
        {{"11"},{"Metapod                     "},{"INSE"},{"12      "},{"2.47"}},
        {{"12"},{"Butterfree                  "},{"VENE"},{"13      "},{"4.35"}},
        {{"13"},{"Weedle                      "},{"VENE"},{"14      "},{"1.06"}},
        {{"14"},{"Kakuna                      "},{"NORM"},{"12      "},{"3.99"}},
        {{"15"},{"Beedrill                    "},{"TIER"},{"12      "},{"2.26"}},
        {{"16"},{"Pidgey                      "},{"VOLA"},{"13      "},{"3.51"}},
        {{"17"},{"Pidgeotto                   "},{"VOLA"},{"14      "},{"3.47"}},
        {{"18"},{"Pidgeot                     "},{"VOLA"},{"15      "},{"9.46"}},
        {{"19"},{"Rattata                     "},{"VENE"},{"15      "},{"2.07"}},
        {{"20"},{"Raticate                    "},{"VENE"},{"19      "},{"5.68"}},
        {{"21"},{"Spearow                     "},{"OSCU"},{"19      "},{"6.77"}},
        {{"22"},{"Fearow                      "},{"OSCU"},{"10      "},{"8.00"}},
        {{"23"},{"Ekans                       "},{"VENE"},{"12      "},{"2.93"}}};
    do{
        printf("Que desea hacer\na)Personajes de videojuegos\nb)concatenacion de Palabras\nc)ordenar numeros\nd)Salir\n");
        fflush(stdin);
        scanf("%c",&menuin);
        switch (menuin){
        case 'a':
            do{
            printf("Que informacion desea visualizar: \n a) informacion completa de la pokedex \n b) Informacion ID y Nombre de los pokemones \n c) Mostrar caracteristicas (Fuerza y Vida) de los pokemones \n d)Salir del programa \n");
            fflush(stdin);
            scanf("%c", &libreria);
            switch (libreria){
                case'a':
                    printf("Presentando la informacion completa de la pokedex\n");
                    for (int i=0;i<Fil;++i){
                        for (int j=0;j<Col;j++){
                            for (int k=0;k<Max;k++){
                                printf("%s",pokedex[i][j][k]);
                                }
                                printf("\t");
                            }
                            printf("\n");
                        }
                    break;
                case'b':
                    printf("Presentando ID y Nombres de los Pokemones\n");
                    for(int i=0;i<Fil;++i){
                            for (int j=0;j<2;j++){
                                for (int k=0;k<Max;k++){
                                    printf("%c",pokedex[i][j][k]);
                                }
                                printf("\t");
                            }
                            printf("\n");
                        }
                    printf("Desea editar el nombre de un pokemon :\nY o N\n");
                    fflush(stdin);
                    scanf("%c",&MenuP);
                    switch (MenuP){
                        case'Y':
                            printf("Dijite la ID del pokemon que desea editar\n");
                            fflush(stdin);
                            scanf("%i",&phi);
                            printf("Dijite el nuevo nombre\n");
                            fflush(stdin);
                            gets(zeta);
                            strcpy(pokedex[phi][1],zeta);
                            printf("Presentando la nueva informacion:\n");
                            for(int i=0;i<Fil;++i){
                                for (int j=0;j<2;j++){
                                    for (int k=0;k<Max;k++){
                                        printf("%c",pokedex[i][j][k]);
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
                    printf("Presentando carcateristicas de los pkemones\n");
                    for (int i=0;i<Fil;++i){
                        for (int j=2;j<5;j++){
                            for (int k=0;k<Max;k++){
                                printf("%c",pokedex[i][j][k]);
                            }
                            printf("\t");
                        }
                        printf("\n");
                    }
                    printf("Desea editar alguna caracteristica del pokemon:\nY o N\n");
                    fflush(stdin);
                    scanf("%c",&MenuP);
                    switch (MenuP){
                        case'Y':
                            printf("Dijite la ID del pkemon:\n");
                            fflush(stdin);
                            scanf("%i",&phi);
                            printf("Que carcateristica desea editar:\na)Tipo\nb)Fuerza\nc)Vida\n");
                            fflush(stdin);
                            scanf("%c",&MenuP);
                            switch (MenuP){
                                case'a':
                                    printf("Dijite el nuevo tipo siguiendo el mismo formato\n");
                                    fflush(stdin);
                                    gets(zeta);
                                    strcpy(pokedex[phi][2],zeta);
                                    printf("Presentando la nueva informacion\n");
                                    for (int i=0;i<Fil;++i){
                                        for (int j=2;j<5;j++){
                                            for (int k=0;k<Max;k++){
                                                printf("%c",pokedex[i][j][k]);
                                            }
                                            printf("\t");
                                        }
                                        printf("\n");
                                    }
                                    break;
                                case'b':
                                    printf("Dijite la nueva fuerza siguiendo el mismo formato\n");
                                    fflush(stdin);
                                    gets(zeta);
                                    strcpy(pokedex[phi][3],zeta);
                                    printf("Presentando la nueva informacion:\n");
                                    for (int i=0;i<Fil;++i){
                                        for (int j=2;j<5;j++){
                                            for (int k=0;k<Max;k++){
                                                printf("%c",pokedex[i][j][k]);
                                            }
                                            printf("\t");
                                        }
                                        printf("\n");
                                    }
                                    break;
                                case'c':
                                    printf("Dijite la nueva vida siguiendo el mismo formato\n");
                                    fflush(stdin);
                                    gets(zeta);
                                    strcpy(pokedex[phi][4],zeta);
                                    printf("Presentando la nueva informacion:\n");
                                    for (int i=0;i<Fil;++i){
                                        for (int j=2;j<5;j++){
                                            for (int k=0;k<Max;k++){
                                                printf("%c",pokedex[i][j][k]);
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
        case 'b':
            printf("Hora de concatenar palabras \n");
            printf("Djite dos vecez su primera palabra a concatenar\n");
            fflush(stdin);
            fgets(omega,3,stdin);
            fflush(stdin);
            scanf("%s",&beta);
            printf("Djite la segunda palabra a concatenar\n");
            fflush(stdin);
            scanf("%s",&epsilon);
            strcpy(alpha,omega);
            strcat(alpha,epsilon);
            strcat(alpha,beta);
            printf("La palabra concatenada es:\n");
            printf("%s\n",alpha);
            do{
                printf("Desea concatenar una palabra mas:\na) si \nb) no \n");
                fflush(stdin);
                scanf("%C",&menu);
                switch (menu){
                case 'a':
                    printf("Dijite el siguiente numero a concatenar:\n");
                    fflush(stdin);
                    scanf("%s",&epsilon);
                    strcat(alpha,epsilon);
                    printf("El numeor concatenado es:\n");
                    printf("%s\n",alpha);
                    break;
                case 'b':
                    printf("Hasta la proxima\n");
                    break;
                default:
                    break;
                }
            }while(menu!='b');
            break;
        case 'c':
            do{
            printf("Bienvenido a ordenadores simples que desea hacer:\na)Numeros pares\nb)Normales\nc)Salir\n");
            scanf("%c",&interfaz);
            switch (interfaz){
            case 'a':
                printf("Dijite 10 numeros del 2 al 20 ordenar:\n");
                fflush(stdin);
                scanf("%i",&A);
                scanf("%i",&B);
                scanf("%i",&C);
                scanf("%i",&D);
                scanf("%i",&E);
                scanf("%i",&F);
                scanf("%i",&J);
                for(int i=0;i<10;i++){
                if(caja[1][i][Num]=='2'){
                    printf("%s",caja[1][i][Num]);
                }
                }
                break;
            case 'b':
                
                break;
            default:
                break;
            }
            } while (interfaz!='c');
            break;
        case 'd':
            break;
        default:
            break;
        }

    }while ('d'!=menuin);   
    return 0;
}