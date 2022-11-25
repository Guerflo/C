#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdint.h>

FILE *file1;
FILE *file2;
FILE *fileSuma;
typedef struct
{
    uint32_t tamArchivo;
    uint16_t reserva1;
    uint16_t reserva2;
    uint32_t offSet; // Posición del primer pixel
} CabeceraArchivo;

typedef struct
{
    uint32_t tamCabecera;
    uint32_t ancho;
    uint32_t alto;
    uint16_t planos;
    uint16_t bpp; // bits por pixel
    uint32_t estadoCompresion;
    uint32_t tamImagen;
    uint32_t resX; // bits por metro en ancho
    uint32_t resY; // bits por metro en ancho
    uint32_t rangoColores;
    uint32_t paletaColorImportante;
} CabeceraImagen;

int main(int argc, char **argv)
{
    unsigned char *matrizPixeles1; // variable unidimensional que llevara los datos de los pixeles
    unsigned char *matrizPixeles2; // variable unidimensional que llevara los datos de los pixeles
    unsigned char *matrizPixeles3; // variable unidimensional que llevara los datos de los pixeles
    file1 = fopen("file1.bmp", "r");
    if (file1 == NULL)
    {
        puts("No se encontro la imagen o no se pudo abrir");
        exit(-1);
    }
    file2 = fopen("file2.bmp", "r");
    if (file2 == NULL)
    {
        puts("No se encontro la imagen o no se pudo abrir");
        exit(-1);
    }
    fileSuma = fopen("fileSuma.bmp", "a+");
    CabeceraArchivo headerFile1;
    CabeceraImagen headerImage1;

    int typeImage=0;
    fread(&typeImage,sizeof(uint16_t),1,file1);
    if(typeImage!=0x4D42){
        printf("typeImage %p\n",typeImage);
        puts("No es imagen BMP");
        exit(-1);
    }
    fread(&typeImage,sizeof(uint16_t),1,file2);
    if(typeImage!=0x4D42){
        printf("typeImage %p\n",typeImage);
        puts("No es imagen BMP");
        exit(-1);
    }


    // Lectura de las cabeceras, primero se lee la cabecera del archivo
    fread(&headerFile1, sizeof(CabeceraArchivo), 1, file1);
    // Lectura de la cabecera de la imagen.
    fread(&headerImage1, sizeof(CabeceraImagen), 1, file1);
    // Obtenemos los archivos
    matrizPixeles1 = (unsigned char *)malloc(sizeof(char) * (headerImage1.tamImagen));
    if (matrizPixeles1 == NULL)
    {
        puts("No se pudo reservar memoria para la matriz de datos");
        fclose(file1);
        fclose(file2);
        fclose(fileSuma);
        exit(-1);
    }

    CabeceraArchivo headerFile2;
    CabeceraImagen headerImage2;

    // Lectura de las cabeceras, primero se lee la cabecera del archivo
    fread(&headerFile2, sizeof(CabeceraArchivo), 1, file2);
    // Lectura de la cabecera de la imagen.
    fread(&headerImage2, sizeof(CabeceraImagen), 1, file2);
    // Obtenemos los archivos
    matrizPixeles2 = (unsigned char *)malloc(sizeof(char) * (headerImage2.tamImagen));
    if (matrizPixeles2 == NULL)
    {
        puts("No se pudo reservar memoria para la matriz de datos");
        fclose(file1);
        fclose(file2);
        fclose(fileSuma);
        exit(-1);
    }

    matrizPixeles3 = (unsigned char *)malloc(sizeof(char) * (headerImage2.tamImagen));
    if (matrizPixeles3 == NULL)
    {
        puts("No se pudo reservar memoria para la matriz de datos");
    }
    // Leemos la matriz de file1 y  file2
    fseek(file1, headerFile1.offSet, SEEK_SET);
    fseek(file2, headerFile2.offSet, SEEK_SET);
    fread(matrizPixeles1, sizeof(char) * (headerImage1.tamImagen), 1, file1);
    fread(matrizPixeles2, sizeof(char) * (headerImage2.tamImagen), 1, file2);

    printf("Tamaño de la cabecera de la imagen :%i \n", headerImage1.tamCabecera);
    printf("Alto la imagen :%i \n", headerImage1.alto);
    printf("Ancho de la imagen :%i \n", headerImage1.ancho);
    printf("Bits por pixel de la imagen :%i \n", headerImage1.bpp);
    printf("Tamaño de la imagen :%i \n", headerImage1.tamImagen);
    printf("Planos de la imagen :%i \n", headerImage1.planos);
     printf("Tamaño del archivo :%i \n",headerFile1.tamArchivo);
    //fprintf(imagenRes,"%c",(char)headerFile.tamArchivo);
    printf("Reserva1 del archivo :%i \n",headerFile1.reserva1);
   // fprintf(imagenRes,"%c",(char)headerFile.reserva1);
    printf("Reserva2 del archivo :%i \n",headerFile1.reserva2);
   // fprintf(imagenRes,"%c",(char)headerFile.reserva2);
    printf("offSet del archivo :%i \n",headerFile1.offSet);
   // fprintf(imagenRes,"%c",(char)headerFile.offSet);


    int temp;
    for(int i=0;i<headerImage2.tamImagen;i++){

        temp =((((int)matrizPixeles1[i])+((int)matrizPixeles2[i])));
         matrizPixeles3[i]=((char)temp);
        

        //printf("(%i+%i)/2=%i, %c\n",((int)matrizPixeles1[i]),((int)matrizPixeles2[i]),temp,matrizPixeles3[i]);
    }


    remove("fileSuma.bmp");
    fileSuma = fopen("fileSuma.bmp", "a+");
    fseek(fileSuma,0, SEEK_SET);
    fputs("BM",fileSuma);
    fseek(fileSuma,2, SEEK_SET);
    fseek(file1,2, SEEK_SET);
    int j;
    for (int i=1;i<headerFile1.offSet;i++){
        j=fgetc(file1);
        fputc(j,fileSuma);
    }
    for(int i=0;i<headerImage2.tamImagen;i++){

        j= (int)matrizPixeles3[i];
        fputc(j,fileSuma);
    }
    CabeceraArchivo headerFile3;
    CabeceraImagen headerImage3;
    // Lectura de las cabeceras, primero se lee la cabecera del archivo
    fread(&headerFile3, sizeof(CabeceraArchivo), 1, fileSuma);
    // Lectura de la cabecera de la imagen.
    fread(&headerImage3, sizeof(CabeceraImagen), 1, fileSuma);
    // Obtenemos los archivos
    char *matrizPixeles4 = (unsigned char *)malloc(sizeof(char) * (headerImage2.tamImagen));
    if (matrizPixeles2 == NULL)
    {
        puts("No se pudo reservar memoria para la matriz de datos");
        fclose(file1);
        fclose(file2);
        fclose(fileSuma);
        exit(-1);
    }
    fseek(fileSuma, headerFile3.offSet, SEEK_SET);
    fread(matrizPixeles4, sizeof(char) * (headerImage3.tamImagen), 1, fileSuma);


    int posX, posY=0, ejeX, ejeY;

    for(ejeY=--headerImage1.alto; ejeY>0; ejeY--){
        posX=0;
        puts("bandera");
        for(ejeX=0; ejeX<headerImage1.ancho; ejeX++){
            //puts("bandera");
            //pposx y poy nos van a servor para la nueva matriz
            printf("[%d][%d]=%d\t\t[%d][%d]=%d\t\t[%d][%d]=%d\t\t[%d][%d]=%d\n",posY,posX,matrizPixeles1[ejeX+ejeY*headerImage1.ancho],posY,posX,matrizPixeles2[ejeX+ejeY*headerImage1.ancho],posY,posX,matrizPixeles3[ejeX+ejeY*headerImage1.ancho],posY,posX,matrizPixeles3[ejeX+ejeY*headerImage1.ancho],posY,posX,matrizPixeles4[ejeX+ejeY*headerImage3.ancho]);
            //\t\t[%d][%d]=%d\t\t[%d][%d]=%d
            posX++;
        }
        posY++;
    }

    fclose(file1);
    fclose(file2);
    fclose(fileSuma);
    system("pause");
    return 0;
}