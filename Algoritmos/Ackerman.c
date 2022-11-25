#include<stdio.h>

int ackerman(int,int);
int main(int argc, char const *argv[]){
    int m,n;
    printf("Da el valor de m=>\n");
    scanf("%d",&m);
    printf("Da el valor de n=>\n");
    scanf("%d",&n);
    printf("Ackerman (%d,%d)=%d\n",m,n,ackerman(m,n));
    return 0;
}
int ackerman(int n,int x){
    if(n==0){
        return x+1;
    }
    else if(x==0){
        return ackerman(n-1,1);
    }
    else{
        return ackerman(n-1,ackerman(n,x-1));
    }
}