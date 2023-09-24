
#include <stdio.h>
//using namespace std;
int mifuncion(int &a){
    return a++;
}
int main (int argc,char const *argv[]){
    int a=0;
    int b=mifuncion(a);
    printf ("hola chepe , como estas: %d, %s ",b,"\n");
    //system("pause");
    return 0;
}