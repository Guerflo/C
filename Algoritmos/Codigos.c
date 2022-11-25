#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<conio.h>
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
#define f(x) sin( 2 * x) - x 
const float pi = 3.141592;
const float G = 6.673e-8;
const float c = 2.997925e+10;

float factorial2 (float x);
void Seccion4();
void Seccion6();
void Seccion5();
int factorial();
int bisiesto( int x) ;
int main(){
    char Menu;
    do{
        system("cls");
        printf(NEGRO_T AZUL_F"------Bienvenido a la visualizacion de los ejercisios de algoritmia------"RESET_COLOR AZUL_T"\nQue informacion desea ver:\n"CYAN_T"a)Seccion 4\nb)Seccion 5\nc)Seccion 6\n"ROJO_T"d)Salir\n"RESET_COLOR);
        scanf("%c",&Menu);
        switch (Menu){
            case'a':
                Seccion4();
                break;
            case'b':
                Seccion5();
                break;
            case'c':
                Seccion6();
                break;
            case'd':
                printf(MAGENTA_T"Hasta la proxima :)\n"RESET_COLOR);
                system("pause");
                break;
            default:
                break;
        }
    }while(Menu!='d');
    return 0;
}
int factorial(int a){ 
    long int factor;
    factor=a;
    for(a=factor-1;a>0;a--){
        factor*=a;
    }
    return factor;
}
int bisiesto(int x){
    float b;
    b = (x/4) % 100;
    if(b!=0){
        return 1;
    }
    else{
        return 0;
    }
}
float factorial2 (float x){
    float i,f;
    f = 1.0 ;
    for( i = 1; i <= x; i++){
        f = f * i;
        return(f); 
    }
}
void Seccion4(){
    char Seccion4;
    float a,b,c,d,e,f,p,denominador,area,x,y;
    float base,altura,Area,volumen;
    float cateto1,cateto2,hipotenusa,angulo;
    float masa1,masa2,distancia,fuerza;
    float m,energia;
    float pies,pulgadas,yardas,metros,centimetroz;
    float media;
    int alpha,beta,producto,cociente,resto;
    int epsilon,omega,Mayor;
    int hectometros,decametros,metroz,decimetros;
    int semanas,dias,horas,minutos,segundos,acu;
    int n1,n2,n3,n4;
    do{
        system("cls");
        printf(AZUL_T"Que ejercisio desea ver:\n"CYAN_T"a)9\nb)10\nc)11\nd)12\ne)13\nf)14\ng)15\nh)16\ni)17\nj)18\nk)19\nl)20\n"ROJO_T"m)Menu principal\n"RESET_COLOR);
        scanf("%c",&Seccion4);
        switch (Seccion4){
            case'a':
                system("cls");
                puts(AMARILLO_T"Introduce el valor de a de b y de c"RESET_COLOR);
                scanf("%f %f %f",&a,&b,&c);
                puts(AMARILLO_T"Introduce el valor de d de e y de f"RESET_COLOR);
                scanf("%f %f %f",&d,&e,&f);
                denominador= a*e-b*d;
                if(denominador==0){ 
                    printf(ROJO_T"No solucion\n"RESET_COLOR);
                }
                else{
                    x = (c*e-b*f)/denominador;
                    y = (a * f - c * d) / denominador;
                    printf( VERDE_T"la solucion es\n");printf( "%f %f \n"RESET_COLOR, x, y);
                }
                system("pause");
                break;
            case'b':
                system("cls");
                puts(AMARILLO_T"Introduce el valor de la base y la altura"RESET_COLOR);
                scanf("%f %f",&base,&altura);
                if((base <= 0)||(altura <= 0)){
                    printf(ROJO_T"No solucion\n");
                }
                else{
                    Area=2*pi*base*base+2*pi*base*altura;
                    volumen=pi*base*base*altura;
                    printf(VERDE_T"la solucion es\n");
                    printf("area total = %f \n", Area);
                    printf("volumen = %f \n"RESET_COLOR, volumen);
                }
                system("pause");
                break;
            case'c':
                system("cls");
                puts(AMARILLO_T"Introduce el valor de los tres lados"RESET_COLOR);
                scanf("%f %f %f",&a, &b, &c);
                if((a< 0)||(b<=0)||(c<=0)||((a+b)<c)||((a+c)<b)||((b+c)<a)){
                    printf(ROJO_T"No solucion\n"RESET_COLOR);
                }
                else{
                    p=(a+b+c)/2;
                    area=pow(p*(p-a)*(p-b)*(p-c),0.5);
                    printf(VERDE_T"la solucion es\n");
                    printf("area = %f \n"RESET_COLOR, area);
                }
                system("pause");
                break;
            case'd':
                system("cls");
                puts(AMARILLO_T"Introduce el valor de los catetos"RESET_COLOR);
                scanf("%f %f",&cateto1, &cateto2);
                if((cateto1<=0)||(cateto2<=0)){
                    printf(ROJO_T"No solucion\n"); 
                }
                else{
                    hipotenusa=sqrt(cateto1*cateto1+cateto2*cateto2);
                    angulo=180/pi*asin(cateto1/hipotenusa);                /* ángulo en grados */
                    printf(VERDE_T"la solucion es\n");
                    printf("hipotenusa = %f \n",hipotenusa);
                    printf("angulo  = %f º\n",angulo);
                    printf("otro angulo  = %f º\n"RESET_COLOR,90-angulo);
                }
                system("pause");
                break;
            case'e':
                system("cls");
                puts(AMARILLO_T"Dame la masa de los dos cuerpos en gramos\n"RESET_COLOR);
                scanf("%f %f",&masa1, &masa2);
                puts(AMARILLO_T"dame la distancia entre ellos en centimetros\n"RESET_COLOR);
                scanf("%f",&distancia);
                if((masa1<=0)||(masa2<=0)||(distancia<=0)){
                    printf(ROJO_T"No solucion\n");
                }
                else{
                    fuerza=G*masa1*masa2/(distancia*distancia);
                    printf(VERDE_T"la solucion es\n");
                    printf("Fuerza en dinas = %f \n"RESET_COLOR,fuerza);
                }
                system("pause");
                break;
            case'f':
                system("cls");
                puts(AMARILLO_T"Introduzca dos numeros\n"RESET_COLOR);
                scanf("%d %d", &alpha, &beta);
                producto = alpha * beta;cociente = alpha / beta;
                resto = alpha % beta;
                printf(VERDE_T" producto = %d\n", producto);
                printf(" cociente = %d\n", cociente);
                printf(" resto = %d\n"RESET_COLOR, resto);
                system("pause");
                break;
            case'g':
                system("cls");
                puts(AMARILLO_T"Introduzca dos numeros\n");
                scanf("%d %d", &epsilon, &omega);
                Mayor = epsilon;
                if(epsilon < omega){
                    Mayor = omega;
                }
                printf(VERDE_T"El mayor es %d\n"RESET_COLOR, Mayor);
                system("pause");
                break;
            case'h':
                system("cls");
                printf(AMARILLO_T"Introduzca hectometros, decametros y metros \n"RESET_COLOR);
                scanf("%d %d %d",&hectometros, &decametros, &metroz);
                decimetros = ((hectometros * 10 + decametros) * 10 + metroz)*10;
                printf (VERDE_T"Numero de decimetros es %d \n"RESET_COLOR, decimetros);
                system("pause");
                break;
            case'i':
                system("cls");
                printf(AMARILLO_T"Introduzca segundos "RESET_COLOR);
                scanf("%d",&acu);
                segundos = acu % 60;
                acu = acu / 60;
                minutos = acu % 60;
                acu = acu / 60;
                horas = acu % 24;
                acu = acu / 24;
                dias = acu % 7;
                semanas = acu / 7;
                printf (VERDE_T" numero de segundos %d\n", segundos);
                printf (" numero de minutos %d\n", minutos);
                printf (" numero de horas %d\n", horas);
                printf (" numero de dias %d\n", dias);
                printf (" numero de semanas %d\n"RESET_COLOR, semanas);
                system("pause");
                break;
            case'j':
                system("cls");
                puts(AMARILLO_T"Introduzca masa\n"RESET_COLOR);
                scanf("%f", &m);
                energia = c * m * m * m;
                printf(VERDE_T"Energia en ergios %e\n"RESET_COLOR, energia);
                system("pause");
                break;
            case'k':
                system("cls");
                puts(AMARILLO_T"Introduzca pies\n"RESET_COLOR);
                scanf("%f", &pies);
                pulgadas = pies * 12;
                yardas = pies / 3;
                centimetroz = pulgadas * 2.54;
                metros = centimetroz / 100;
                printf(VERDE_T" pies %f \n", pies);
                printf(" pulgadas %f\n", pulgadas);
                printf(" yardas %f\n", yardas);
                printf(" centimetros %f\n", centimetroz);
                printf(" metros %f\n"RESET_COLOR, metros);
                system("pause");
                break;
            case'l':
                system("cls");
                puts(AMARILLO_T"Introduzca los cuatro números\n"RESET_COLOR);
                scanf("%d %d %d %d", &n1, &n2, &n3, &n4);
                media = (n1 + n2 + n3 + n4) / 4.0;
                printf(VERDE_T"La media es %f \n"RESET_COLOR, media);
                system("pause");
                break;
            case'm':
                system("cls");
                printf(MAGENTA_T"Gracias por ver los ejercicios\n"RESET_COLOR);
                system("pause");
                break;
            default:
                break;
            }
    }while(Seccion4!='m');
}
void Seccion6(){
    char Seccion6;
    long int factorial1,factorial2;
    int alpha,omega;
    int i, n;
    int resto, acu;
    int f1 ,f2, aux, np;
    int primo;
    float x2,y2,i2;
    float r,a,v;
    float M, m, media, num;
    float x, t, e;
    float y, s;
    float maximo;
    double epsilon;
    do{
        system("cls");
        printf(AZUL_T"Que ejercisio desea ver:\n"CYAN_T"a)15\nb)16\nc)17\nd)18\ne)19\nf)20\ng)21\nh)22\ni)23\nj)24\nk)25\nl)EJS 7\n"ROJO_T"m)Menu principal\n"RESET_COLOR);
        scanf("%c",&Seccion6);
        switch (Seccion6){
            case'a':
                system("cls");
                do{
                    printf(AMARILLO_T"valor del  radio > 0\n"RESET_COLOR);
                    scanf("%f", &r);
                }while(r <= 0);
                // fin entrada de datos
                a = 4 *pi * r * r;
                v = 4.0 / 3 * pi * r * r * r;
                // calculado el área y el volumen
                printf(VERDE_T"el area y volumen de la esfera de radio r=%f es:\n", r);
                printf( "area = %f \n  volumen = %f \n"RESET_COLOR, a, v);
                system("pause");
                break;
            case'b':
                system("cls");
                for(epsilon = 0.0; epsilon <= 10; epsilon += 0.5){
                    printf(VERDE_T"%f = f\n"RESET_COLOR, epsilon, f(epsilon));
                }
                system("pause");
                break;
            case'c':
                system("cls");
                do{
                    printf(AMARILLO_T"valor de  n >0\n");
                    scanf("%d", &n);
                } while( n <= 0 );
                // fin de entrada de datos
                printf ( "introduzca %d numeros \n"RESET_COLOR, n);
                scanf("%f", &num);
                M = num;
                m = num; 
                media = num;
                // bucle voraz
                for(i = 2; i <= n; i++){
                    scanf("%f",&num);
                    if(M < num) M = num;
                    if(m > num)m = num;
                    media = media + num;
                    // se recalcularon los nuevos máximos, mínimos y suma= media
                }
                media = media / n;
                printf(VERDE_T" media = %f \n", media);
                printf(" menor = %f \n", m);
                printf(" mayor = %f \n"RESET_COLOR, M);
                system("pause");
                break;
            case'd':
                system("cls");
                do{
                    printf(AMARILLO_T"valor de  n > 0\n"RESET_COLOR);
                    scanf("%d", &n);
                }while( n <= 0);
                acu = 0;
                // acu contendrá en todo momento la suma de todos lo divisores   
                // conocidos de n menores que i
                for(i = 1; i < n; i++){
                    resto = n % i;
                    if(resto == 0) acu += i;
                    /* nuevo divisor*/
                    }
                if(n == acu){
                    printf(VERDE_T" el numero %d es perfecto\n"RESET_COLOR, n);
                }
                else{
                    printf(ROJO_T" el numero  %d  no es perfecto \n"RESET_COLOR, n);
                }
                system("pause");
                break;
            case'e':
                system("cls");
                printf(AMARILLO_T"valor de  x \n"RESET_COLOR);
                scanf("%f", &x);
                e = 1;
                t = 1;
                // se han inicializado el valor de e y del término t
                printf(AMARILLO_T"Distintos valores \n"RESET_COLOR);
                for(i = 1; i <= 100; i++){
                    t *= x / i;
                    // se recalculó el nuevo término
                    e += t;
                    // se recalculó la nueva suma
                    printf(VERDE_T"i= %d , e= %f \n"RESET_COLOR, i, e);
                }
                system("pause");
                break;
            case'f':
                system("cls");
                do{
                    printf(AMARILLO_T"valor de  n \n"RESET_COLOR);
                    scanf("%d", &n);
                } while(n < 0);
                f1 = 1;
                f2 = 1;
                // Se calculan los sucesivos términos de la sucesión de fibonacci
                for(i = 2; i <= n; i++){
                    aux = f1 + f2;
                    f1 = f2;
                    f2 = aux;
                }
                printf(VERDE_T"Valor de fibonacci para n= %d, es %d \n"RESET_COLOR, n, f2);
                // comienza la mejora
                printf(AMARILLO_T"numero de parejas necesarias \n"RESET_COLOR);
                scanf("%d", &np);
                // se supone que np es positivo.
                f1 = 1;
                f2 = 1;
                i = 1;
                while(f2 < np){
                    aux = f1 + f2;
                    f1 = f2;
                    f2 = aux;
                    i++;
                }
                printf(VERDE_T"Numero de meses %d \n"RESET_COLOR, i);
                system("pause");
                break;
            case'g':
                system("cls");
                do{
                    printf(AMARILLO_T"valor de  n >0\n"RESET_COLOR);
                    scanf("%d", &n);
                } while(n <= 0);
                primo = 1;
                //inicialmente el número es primo
                for(i = 2; (i * i < n) & primo; i++){
                /* mientras sea primo y queden posibles divisores menores o iguales que la raíz de n hacer  */
                    primo = (n % i) != 0;
                }
                if( primo ){
                printf(VERDE_T"El numero %d es primo\n"RESET_COLOR, n);
                }
                else{
                printf(ROJO_T"El numero %d no es primo \n"RESET_COLOR, n);
                }
                system("pause");
                break;
            case'h':
                system("cls");
                do{
                    printf(AMARILLO_T"valor de  n \n"RESET_COLOR);
                    scanf("%d", &n);
                }while(n <= 0);
                s = 1;
                for(i = 1; i <= n; i++){
                    y = 1.0 / i;
                    // para obligar a que la división sea real se pone 1.0
                    s += y;
                }
                printf(VERDE_T"Valor de la suma = %f\n"RESET_COLOR, s);
                system("pause");
                break;
            case'i':
                system("cls");
                do{
                    printf(AMARILLO_T"Valor de  n \n"RESET_COLOR);
                    scanf("%d", &n);
                } while( n <= 0 );
                s = 1;
                for(i = 1; i <= n; i++){
                    t = i  / pow(2, i);
                    // Se obliga a que el cociente sea real.
                    s += t;
                }
                printf(VERDE_T"Valor de la suma = %f\n"RESET_COLOR, s);
                system("pause");
                break;
            case'j':
                system("cls");
                do{
                    printf(AMARILLO_T"Valor maximo  n \n"RESET_COLOR);
                    scanf("%f", &maximo);
                } while(maximo <= 0);
                s = 0;
                for(n = 0; s < maximo;){
                    n++ ;s += n;
                }
                printf(VERDE_T"Valor de la suma = %6.2f\n"RESET_COLOR, s);
                printf(VERDE_T"Valor del numero de terminos = %d\n"RESET_COLOR, n);
                system("pause");
                break;
            case'k':
                system("cls");
                printf(AMARILLO_T"Dijite el primer numero al que le aplicara factorial\n"RESET_COLOR);
                scanf("%i",&alpha);
                printf(AMARILLO_T"Dijite el segundo numero al que le aplicara factorial\n"RESET_COLOR);
                scanf("%i",&omega);
                factorial1=factorial(alpha);
                factorial2=factorial(omega);
                printf(VERDE_T"El Factorial del primer numero %i es:\n%ld\n",alpha,factorial1);
                printf("El Factorial del segundo numero %i es:\n%ld\n"RESET_COLOR,omega,factorial2);
                system("pause");
                break;
            case'l':
                system("cls");
                printf(AMARILLO_T"Dame dos numeros\n"RESET_COLOR);
                fflush(stdin);
                scanf("%f",&y2);
                scanf("%f",&x2);
                for(i2 = x2; i2 <= y2; i2++){
                    printf(VERDE_T"%8.0f %s %8.0f\n"RESET_COLOR,i2,"factorial", factorial(i2));
                }
                system("pause");
                break;
            case'm':
                system("cls");
                printf(MAGENTA_T"Gracias por ver los ejercicios\n"RESET_COLOR);
                system("pause");
                break;
            default:
                break;
            }
    }while(Seccion6!='m');
}
void Seccion5(){
    char Seccion5;
    float x, y, z, Mayor;
    float nota;
    float Horas, Extras, Tasa, SalarioBruto, SalarioNeto;
    int i;
    int mes, ano;
    int n;
        do{
        system("cls");
        printf(AZUL_T"Que ejercisio desea ver:\n"CYAN_T"a)11\nb)13\nc)14\nd)15\ne)16\nf)17\ng)19\nh)20\n"ROJO_T"i)Menu principal\n"RESET_COLOR);
        scanf("%c",&Seccion5);
        switch (Seccion5){
            case'a':
                system("cls");
                puts(AMARILLO_T"Introduzca mes entre 1 y 12\n"RESET_COLOR);
                scanf("%d",&mes);
                printf(AMARILLO_T"Introduzca a%co\n"RESET_COLOR,164);
                scanf("%d",&ano);
                if(mes==2){
                    if(bisiesto(ano)==1){
                        printf(MAGENTA_T"Tiene 29 dias\n"RESET_COLOR);
                    }
                    else{
                        printf(CYAN_T"Tiene 28 dias\n"RESET_COLOR);
                    }
                }
                else if((mes!=2)||(mes==4)||(mes==6)||(mes == 9)||(mes == 11)){
                    printf(BLANCO_T"Tiene 30 dias\n"RESET_COLOR);
                }
                else{
                    printf(VERDE_T"Tiene 31 dias\n"RESET_COLOR);
                }
                system("pause");
                break;
            case'b':
                system("cls");
                printf(AMARILLO_T"Dame dato\n"RESET_COLOR);
                scanf("%f", &x);
                if( x < 0 ){
                    printf(ROJO_T"Menor que cero "RESET_COLOR);
                }
                if( x > 0 ){
                    printf(VERDE_T"Mayor que cero"RESET_COLOR);
                }
                system("pause");
                break;
            case'c':
                system("cls");
                printf(AMARILLO_T"Dame tres datos\n"RESET_COLOR);
                scanf("%f %f %f", &x,&y,&z);
                if( ( x <= y) && ( y <= z) ){
                    printf(VERDE_T"Ordenados "RESET_COLOR);
                }
                else{
                    printf(ROJO_T"No ordenados"RESET_COLOR);
                }
                system("pause");
                break;
            case'd':
                system("cls");
                printf(AMARILLO_T"Dame nota\n"RESET_COLOR);
                scanf("%f", &nota);
                if(( nota < 0.0 ) || ( nota > 10 )){
                    printf(ROJO_F NEGRO_T"Error en nota "RESET_COLOR);
                }
                else  if( nota < 5.0 ){
                    printf(ROJO_T"Suspenso"RESET_COLOR);
                }
                else if( nota < 6.5 ){
                    printf(MAGENTA_T"Aprobado"RESET_COLOR);
                }
                else if( nota < 8.5){
                    printf(AZUL_T"Notable"RESET_COLOR);
                }
                else if( nota < 10){
                    printf(VERDE_T"Sobresaliente"RESET_COLOR);
                }
                else{
                    printf(AMARILLO_T"Matricula de Honor"RESET_COLOR);
                }
                system("pause");
                break;
            case'e':
                system("cls");
                printf(AMARILLO_T"Dame numero\n"RESET_COLOR);
                scanf("%f" , &Mayor);
                for(i = 2; i <= 5; i++){
                    printf(AMARILLO_T"Dame numero\n"RESET_COLOR);
                    scanf("%f" , &x);if( Mayor < x)Mayor = x;
                }
                printf(VERDE_T"El mayor es %f\n"RESET_COLOR, Mayor);
                system("pause");
                break;
            case'f':
                system("cls");
                printf(AMARILLO_T"Dame Horas\n"RESET_COLOR);
                scanf("%f" , &Horas);
                if( Horas <= 38 ){
                    Extras = 0;
                }
                else{
                    Horas = 38;Extras = Horas - 38;
                }
                printf(AMARILLO_T"Introduzca Tasa\n"RESET_COLOR);
                scanf("%f",&Tasa);
                SalarioBruto = Horas * Tasa + Extras * Tasa * 1.5;
                if(SalarioBruto < 50000.0){
                    SalarioNeto = SalarioBruto;
                }
                else{
                    SalarioNeto = SalarioBruto * 0,9;
                }
                printf(VERDE_T"Salario bruto %f \n"RESET_COLOR, SalarioBruto);
                printf(VERDE_T"Salario neto %f \n"RESET_COLOR, SalarioNeto) ;
                system("pause");
                break;
            case'g':
                system("cls");
                printf(AMARILLO_T"Introduzca n:"RESET_COLOR);
                scanf("%d", &n);
                if( n < 0 ){
                    puts(ROJO_T"Este número es negativo. Pruebe de nuevo ."RESET_COLOR);
                    scanf("%d", &n);
                }
                else{
                    printf(VERDE_T"conforme. n= %d\n"RESET_COLOR, n);
                }
                system("pause");
                break;
            case'h':
                system("cls");
                if(x == 0){
                    printf(VERDE_T"%d = 0\n", x);
                }
                else{
                    printf("%d != 0\n"RESET_COLOR, x);
                }
                system("pause");
                break;
            case'i':
                system("cls");
                printf(MAGENTA_T"Gracias por ver los ejercicios\n"RESET_COLOR);
                system("pause");
                break;
            default:
                break;
            }
    }while(Seccion5!='i');
}