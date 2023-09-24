
#include <stdio.h>
#include <cctype>
int main (int argc,char const *argv[]){
    char c;
    printf("Deme la letra de la semana por ejemplo (l/L) para lunes (x/X) para miercoles: ");
    scanf("%c",&c);
    char mayus=toupper(c);
    if(mayus=='L'){
        printf("Lunes");
    }else if(mayus=='M'){
        printf("martes");
    }else if(mayus=='X'){
        printf("miercoles");
    }else if(mayus=='J'){
        printf("jueves");
    }else if(mayus=='V'){
        printf("viernes");
    }
    return 0;
}