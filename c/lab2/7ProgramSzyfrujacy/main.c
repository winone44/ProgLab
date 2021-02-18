#include <stdio.h>

int main(){

    system("cls");
    char zn;
    zn=getchar();
    while(zn!='\n'){
        if(zn==' ')
        putchar(zn);
        else 
        putchar(zn+2);
        zn=getchar();
    }
    putchar(zn);
    return 0;
}