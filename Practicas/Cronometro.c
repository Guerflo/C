#include<stdio.h>
#include<windows.h>

int main(){
    int Hor,Min,Seg,Mil,Epsilon,Omega;
    Epsilon=1000;
    for (Hor=0;Hor<24;Hor++){
        for (Min=0;Min<60;Min++){
            for (Seg=0;Seg<60;Seg++){
                printf("%02i:%02i:%02i:\r",Hor,Min,Seg);
                Sleep(Epsilon);
                //Sleep solo funciona para windows y determina el tiempo que debe pasar entre cada accion 
            }  
        }
    }
    system("pause");
    return 0;
}