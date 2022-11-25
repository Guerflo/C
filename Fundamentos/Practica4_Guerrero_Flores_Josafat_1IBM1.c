#include <stdio.h>
#include <math.h>
#include <stdlib.h>

//
//Guerrero Flores Josafat
//1IBM1
//Ingeneria en Inteligencia Artificial
//18/03/2022
//

int main (){    
    float productoimportado1,operando1,p=0.05,IVA=0.16;
printf("\n");
    printf("Ingresa el cost del producto al que se le aplicara el IVA si es de menos de 4000 pesos este sera menor: \n");
    scanf("%f",&productoimportado1);
    if(productoimportado1>4000){
        operando1=productoimportado1*IVA;
        operando1+=productoimportado1;
    }
    else{
        operando1=productoimportado1*p;
        operando1+=productoimportado1;   
    }
    printf("costo final sera de %f \n",operando1);
printf("\n");

    int z =0;
    float fDeX = 0;
    double pot =0;
printf("Ingresa el valor de z de la funcion a trozos F(x)= {1/z-z/2, 0, z^3+z^5+z^9, z/3} \n");
    fflush (stdin);
    scanf("%i",&z);
    if (z >= 0 && z <= 9){
        fDeX=(1/(float)z)-((float)z/2);
    }
    else if(z<0){
        fDeX =0;
    }
    else if(z>9 && z<125){
        pot = pow(z, 3)+pow(z,5)+pow(z,9);
    }
    else{
        fDeX=(float)z/3;
    }
    if (z>9 && z<125) printf("El valor que toma la funcion es:%lf",pot);
    else printf("El valor que toma la funcion es: %.2f \n",fDeX);
printf("\n");

for(int sj1=0, sj2=2, sj3=2;sj3<1458;sj1+=12){
        if(sj1==0) continue;
        sj2+=sj1;
        printf("%i,",sj3);
        sj3+=sj2;
    }
    putchar('\n');
for(int sg1=-4, sg2= 0, sg3=2;sg3<1102;sg1+=6){
        if(sg1==-4) continue;
        sg2+=sg1;
        printf("%i,",sg3);
        sg3+= sg2;
    }
    putchar('\n');
for(int sf1=25, sf2=0;sf2<2025;sf2+=sf1,sf1+=50){
        if(sf1==25)continue;
        printf("%i,",sf2);
    }
    putchar('\n');
for (int sc1=1, sc2=-1;sc1<15;sc1++,sc2--){
    printf("%i %i, ",sc2,sc1);
}
printf("\n \n");
        
unsigned int factorial = 0;
    int valor1=1;
    while (valor1!=0){
    printf("Ingresa cualquier numero al que se le aplicara factorial !:\n");
    fflush(stdin);
    scanf("%i",&factorial);
    valor1=factorial;
        for (int valor2 = factorial-1 ; valor2>0 ; valor2--){
            factorial*=valor2;
        }
    if (valor1!=0)
    printf("%i\n",factorial);
    }
printf("\n");

//con el valor 0 en el apartado del factorial se cierra el programa
   return 0;     
}