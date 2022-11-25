#include<stdio.h>
#include<math.h>
#include<stdlib.h>

/*
Guerrero Flores Josafat
1IBM1
Examen tipo B
25/03/2022
*/

int main(){
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
printf("\nSerie numero 2\n");
for (int sj1=0, sj2=-1;sj1<21;sj1++,sj2--){
     printf("%i %i, ",sj1,sj2);
}
int sc1=0, sc2=-1,suma1,suma2;
while(sc1<=20,sc2<=-19){
    printf("%i %i, ",suma1,suma2);
    suma1=sc1+2;
    suma2=sc2-2;
    
}
printf("\n");
printf("\n");
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
int numero;
  	printf("Introduce un numero:\n");
  scanf("%d", &numero);
  
  if (numero % 2 == 0) {
      	if(numero > 0){
		printf("Es positivo ");
	}else{
		printf("Es negativo");
	}
    printf("y es par");
  } 
  
  else {
      	if(numero > 0){
		printf("Es Positivo ");
	}else{

		printf("Es negativo ");
	}
    printf("y es impar");
  }
printf("\n");
printf("\n");
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
int x;
    float f;
    printf("\nIngrese un valor para X: ");
    scanf("%d",&x);
    if (0<x<=10)
    {
        f=(4/(2*x))-x;
        printf("Valor de la f(%d)= %f",x,f);
    }
    else if (11<x<=30)
    {
        f=pow(132,x)-12;
        printf("Valor de la f(%d)=%f ",x,f);
    }
    else if (30<x)
    {
        f=pow(2,x)+7*pow(3,x)+1;
        printf("Valor de la f(%d)= %f",x,f);
    }
    else
    {
        f=pow(128,2);
        printf("Valor de la f(%d)= %f",x,f);
    }
printf("\n");
printf("\n");
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
int tratA = 26000;
int tratB = 13200;
int tratC = 7901;
int tratE= 910;
char vocal;
int edad;
int descuento;
int total;
     
  printf("Indique su tipo de tratamiento a, b, c, d \n");
    fflush( stdin );
  scanf("%c", &vocal);
  switch ( vocal )
{
  
    case 'a':

      printf("Ingrese su edad: \n");
        fflush( stdin );
      scanf("%d", &edad);
      if(edad>75){
        descuento=(tratA)*(.75);
      printf("El valor de su estadia es de: %i", descuento);
        }else if(edad<18){
        descuento=(tratA)*(.93);
      printf("El valor de su estadia es de: %i", descuento);
        }else{
        printf("El precio es de %d", tratA);
        }
        
        break;
  case 'b':

      printf("Ingrese su edad: \n");
        fflush( stdin );
      scanf("%d", &edad);
      if(edad>75){
        descuento=(tratB)*(.75);
      printf("El valor de su estadia es de: %i", descuento);
        }else if(edad<18){
        descuento=(tratB)*(.93);
      printf("El valor de su estadia es de: %i", descuento);
        }else{
        printf("El precio es de %d", tratB);
        }

  break;

  case 'c':
      printf("Ingrese su edad: \n");
        fflush( stdin );
      scanf("%d", &edad);
      if(edad>75){
        descuento=(tratC)*(.75);
      printf("El valor de su estadia es de: %i", descuento);
        }else if(edad<18){
        descuento=(tratC)*(.93);
      printf("El valor de su estadia es de: %i", descuento);
        }else{
        printf("El precio es de %d", tratC);
        }

  break;

  case 'd':

      printf("Ingrese su edad: \n");
        fflush( stdin );
      scanf("%d", &edad);
      if(edad>75){
        descuento=(tratE)*(.75);
      printf("El valor de su estadia es de: %i", descuento);
        }else if(edad<18){
        descuento=(tratE)*(.93);
      printf("El valor de su estadia es de: %i", descuento);
        }else{
        printf("El precio es de %d", tratE);
        }

  break;
    default:
  printf("Agregue un valor valido entre 'a - d'");      
}
printf("\n");
printf("\n");
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    return 0;

}