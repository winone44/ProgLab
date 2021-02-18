#include <stdio.h>

int main(){

    system("cls");

    int x=0;
    printf("Wpisz jakis tekst: \n");
    while (getchar()!='\n'){
        x++;
    }
    printf("Twoj tekst ma %d znakow", x);
    return 0;
}