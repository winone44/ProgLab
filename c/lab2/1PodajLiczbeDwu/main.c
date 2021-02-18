#include <stdio.h>

int main(){

    system("cls");
    int x,y,z;
    printf("Podaj liczbe dwucyfrowa\n");
    scanf("%d", &x);
    y=x%10;
    z=x/10;
    printf("\nliczba: %d\todrocona to %d%d",x,y,z);
 
    return 0;
}