#include<stdio.h>

void hanoi(int,char*,char*,char*);

int main(int argc, char const *argv[]){
    int n;
    char *o,*d,*a;
    o="origen";
    d="destino";
    a="auxiliar";
    printf("Da el numero de discos\n");
    scanf("%d",&n);
    hanoi(n,o,d,a);
    return 0;
}
void hanoi(int n,char *o,char *d,char *a){
    if (n>1){
        hanoi(n-1,o,a,d);
        printf("de %s a %s\n",o,d);
        hanoi(n-1,a,d,o);
    }
    else{
        printf("de %s a %s\n",o,d);
    }
}