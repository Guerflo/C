#include<stdio.h>

int main(){
    int alpha;
    int beta,gama,delta;
    int mayor;
    int mu,nu;
    int tabla=10,maximo=10;
    int xi;
    float pi,suma1=0.0;
    int chi;
    float phi,suma2=0.0;
    char sigma,menu,calculadora;
    float eta,theta;
    printf("Esta es la interfaz principal para ver todos los ejercisios\n");
    printf("Seleccione que desea hacer\n");
    printf("a)Validador de calificaciones.\nb)Mayor de un conjunto.\nc)Tablas de multiplicar.\nd)Suma(Break-Continue).\ne)Calculadora primitiva.\nf)Salida del programa.\n\n");
    fflush(stdin);
    scanf("%c",&sigma);
    switch(sigma){
        case 'a':

            printf("Veamos que tna buena es tu calificacion\n");
            puts("Digitalize la calificacion");
            scanf("%i", &alpha);
            if(alpha>=100){
            printf("Exelencia\n");
            }
            else if(alpha>90){
            printf("Muy Bueno\n");
            }
            else if(alpha>80){
            printf("Bueno\n");
            }
            else if(alpha>70){
            printf("Regular\n");
            }
            else if(alpha>60){
            printf("Aprovatorio\n");
            }
            else{
            printf("Reprovatorio\n");
            }
            printf("Desea volver al menu principal: Y o N\n");
            fflush(stdin);
            scanf("%c",&menu);
            switch(menu){
                case 'Y':
                    return main();
                    break;
                case 'N':
                    printf("Saliendo de la interfaz");
                    break;
            }
            break;
        case 'b':
            printf("Se determinara el numero mayor de un conjunto de tres numero\n");
            printf("Incerte el primer numero\n");
            scanf("%i",&beta);
            printf("Incerte el segundo numero\n");
            scanf("%i",&gama);   
            printf("Incerte el tercer numero\n");
            scanf("%i",&delta);
            if(beta>gama){
                if(beta>delta){
                    mayor=beta;
                }
                else{
                    mayor=delta;
                }
            }
            else{
                if(gama>delta){
                    mayor=gama;
                }
                else{
                    mayor=delta;
                }
            }
            printf("%i es el numero mayor del conjuto %i %i %i\n",mayor,beta,gama,delta);
            printf("Desea volver al menu principal: Y o N\n");
            fflush(stdin);
            scanf("%c",&menu);
            switch(menu){
                case 'Y':
                    return main();
                    break;
                case 'N':
                    printf("Saliendo de la interfaz");
                    break;
            } 
            break;
        case 'c':
            printf("Acontinuacion las tablas de multiplicar\n");
            for(mu=1;mu<=tabla;++mu){
                for(nu=1;nu<=maximo;++nu){
                    printf("%i x %i = %i \n",mu,nu,mu*nu);
                }
                puts("\n");
            }
            printf("Desea volver al menu principal: Y o N\n");
            fflush(stdin);
            scanf("%c",&menu);
            switch(menu){
                case 'Y':
                    return main();
                    break;
                case 'N':
                    printf("Saliendo de la interfaz");
                    break;
            }
            break;
        case 'd':
            printf("Es hroa de sumar :D (Continue)\n");
            for(xi=1;xi<=4;++xi){
                printf("Digitalize el numero %i: ",xi);
                    scanf("%f",&pi);
                    if(pi<0){
                        printf("No se admiten numeros negativos\n");
                        continue;
                    }
                    suma1+=pi;
                }
            printf("La suma de los numeros incertados es:\n %.2f\n",suma1);

            printf("Es hroa de sumar :D (Breake)\n");
            for(chi=1;chi<=4;++chi){
                printf("Digitalize el numero %i: ",chi);
                    scanf("%f",&phi);
                    if(pi<0){
                        printf("No se admiten numeros negativos\n");
                        break;
                    }
                    suma2+=phi;
                }
            printf("La suma de los numeros incertados es:\n %.2f\n",suma2);
            printf("Desea volver al menu principal: Y o N\n");
            fflush(stdin);
            scanf("%c",&menu);
            switch(menu){
                case 'Y':
                    return main();
                    break;
                case 'N':
                    printf("Saliendo de la interfaz");
                    break;
            }
            break;
        case 'e':
            printf("Que operacion desea hacer:\na)Suma\nb)Resta\nc)Multiplicacion\ne)Divicion\nf)Volver al menu inicial.\n");
            fflush(stdin);
            scanf("%c",&calculadora);
            switch (calculadora){
            case 'a':
                printf("Digitalize dos numeros:\n");
                scanf("%f",&eta);
                scanf("%f",&theta);
                printf("La suma de %.2f mas %.2f es:\n%.2f + %.2f = %.2f\n",eta,theta,eta,theta,eta+theta);
                break;
            case 'b':
                printf("Digitalize dos numeros:\n");
                scanf("%f",&eta);
                scanf("%f",&theta);
                printf("La resta de %.2f menos %.2f es:\n%.2f - %.2f = %.2f\n",eta,theta,eta,theta,eta-theta);
                break;
            case 'c':
                printf("Digitalize dos numeros:\n");
                scanf("%f",&eta);
                scanf("%f",&theta);
                printf("La multiplicacion de %.2f por %.2f es:\n%.2f x %.2f = %.2f\n",eta,theta,eta,theta,eta*theta);
                break;
            case 'e':
                printf("Digitalize dos numeros:\n");
                scanf("%f",&eta);
                scanf("%f",&theta);
                printf("La divicion de %.2f entre %.2f es:\n%.2f / %.2f = %.2f\n",eta,theta,eta,theta,eta/theta);
                break;
            case 'f':
                return main();
            default:
                break;
            }
            printf("Desea volver al menu principal: Y o N\n");
            fflush(stdin);
            scanf("%c",&menu);
            switch(menu){
                case 'Y':
                    return main();
                    break;
                case 'N':
                    printf("Saliendo de la interfaz");
                    break;
            }
            break;
        case 'f':
            printf("Hasta la proxima");
            break;
        case 'g':
            return main();
            break;
        default:
            printf("Incerte una opccion valida\nf");
            return main();
            break;
    }

}