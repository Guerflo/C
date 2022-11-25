#include<stdio.h>
#include<math.h>
#include<stdbool.h>
#define PI 3.1416

//
//Guerrero Flores Josafat
//1BM1
//Ingenieria en Inteliencia Artificial
//4/Mar/2022
//


int main(void){
    char caracter1, caracter2, caracter3, caracter4, caracter5, caracter6, caracter7, caracter8, caracterE;
    caracter1='I';
    caracter2='P';
    caracter3='N';
    caracter4='E';
    caracter5='S';
    caracter6='C';
    caracter7='O';
    caracter8='M';
    caracterE=' ';
    
    putchar(caracter1);
    putchar(caracter2);
    putchar(caracter3);
    putchar(caracterE);
    putchar(caracter4);
    putchar(caracter5);
    putchar(caracter6);
    putchar(caracter7);
    putchar(caracter8);
    putchar(caracterE);
    putchar('\n');
    
    float operando1=77.8;
    float resultado1=0.0, resultado2=0.0;
    operando1=77.8;
    resultado1=operando1/PI;
    resultado2=sqrt(resultado1);
    printf("El radio de un circulo de area 77.8 es %f \n",resultado2 );
    putchar('\n');

    float distancia1, distancia2, distancia3, distancia4, distancia5, distancia6;
    float suma1, suma2, suma3;
    distancia1=150000000;
    distancia2=384400;
    distancia3=149600;
    distancia4=384;
    distancia5=14.96;
    distancia6=0.38;
    suma1=distancia1+distancia2;
    suma2=distancia3+distancia4;
    suma3=distancia5+distancia6;
    printf("la suma de las distancias del sol a la tierra y de la luna a la tierra en Km es %f Km \n",suma1 );
    printf("la suma de las distancias del sol a la tierra y de la luna a la tierra en millones de metros es %f millones de metros \n",suma2 );
    printf("la suma de las distancias del sol a la tierra y de la luna a la tierra en billones de centimetros es %f de billones de centimetros\n",suma3 );
    putchar('\n');

    printf("El numero de bytes en la primer suma es de: %lu \n", sizeof(suma1));
    printf("El numero de bytes en la segunda suma es de: %lu \n", sizeof(suma2));
    printf("El numero de bytes en la tercer suma es de: %lu \n", sizeof(suma3));
    putchar('\n');

    printf("Sin signo: %d\n", 456);
    putchar('\n');
    printf("Con signo: %d\n", -456);
    printf("Sin signo: %d\n", fabs(-456));
    putchar('\n');
    printf("Con signo: %llu\n", 77777999999);
    printf("Sin signo: %llu\n", 77777999999);
    putchar('\n');
    printf("Con signo: %llu\n", 100000000000000);
    printf("Sin signo: %llu\n", 100000000000000);
    putchar('\n');
    printf("Con signo: %E\n", (-1)*pow(10, 56));
    printf("Sin signo: %E\n", fabs((-1)*pow(10, 56)));
    putchar('\n');
    printf("Con signo: %E\n", (-6)*pow(10, -79));
    printf("Sin signo: %E\n", fabs((-6)*pow(10, -79)));
    putchar('\n');
    printf("Con signo: %llu\n", 333333333333);
    printf("Sin signo: %llu\n", 333333333333);
    putchar('\n');
    printf("Con signo: %lf\n", 6777.56);
    printf("Sin signo: %lf\n", 6777.56);
    putchar('\n');
    printf("Con signo: %E\n", pow(55, -2));
    printf("Sin signo: %E\n", fabs(pow(55, -2)));
    putchar('\n');
    printf("Con signo: %lf\n", -0.55);
    printf("Sin signo: %lf\n", fabs(-0.55));
    putchar('\n');
    printf("Con signo: %E\n", ((-5)*pow(10, -13)));
    printf("Sin signo: %E\n", fabs((-5)*pow(10, -13)));
    putchar('\n');

    printf(" *\n **\n ***\n ****\n ******\n\n");
    printf(" ******\n *    *\n *    *\n ******\n\n");
    printf(" *****\n *   *\n *   *\n *   *\n *****\n\n");
    printf(" ****\n ****\n ****\n ****\n\n");
    printf("   *** \n  ***** \n *******\n\n");
    printf("       *  *\n     *     *\n   *       *\n *        *\n  *        *\n    *      *\n      *    *\n        * *\n\n");

//le hize un corazon profe por que no me sale el circulo <3

    printf("75 -> \'%c\' usando (+)\n",75+23);
    printf("1024 -> %d usando (>>)\n",1024>>5);
    printf("512 -> %d usando (<<)\n", 512<<2);
    printf("65556 -> %d usando (==)\n", 65556==65556);
    printf("144 -> %d usando (%)\n", 144%132);
    printf("5.1 -> %f usando (/)\n", 5.1/0.2);
    printf("7.7 -> %f usando (-)\n", 7.7-(-0.07));
    printf("7891 -> %d usando (!=)\n", 7891!=0);
    int var = 89;
    printf("89 -> %d usando (++)\n", ++var);
    var = '@';
    printf("\'@\' -> %d usando (=)\n", var);

    printf("Int: %d\n", 2147483647);
    printf("Unsigned Int: %u\n", 4294967295);
    printf("Long long: %lld\n", 9223372036854775807);
    printf("Short: %hd\n", 32767);
    printf("Unsigned Short: %hu\n", 65535);
    printf("Float: %f\n", 3.4*pow(10, 38));
    printf("Double: %lf\n", 1.7976931348623157*pow(10, 308));
    printf("Char: %c\n", 127);

    return 0;
}