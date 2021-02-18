#include <stdio.h>

int main(){

    system("cls");
    int x,y,z,m;
    printf("Podaj liczbe trzycyfrowa\n");
    scanf("%d", &x);
    y=x%10;
    z=x/10%10;
    m=x/100;
    printf("\nliczba: %d\todrocona to %d%d%d",x,y,z,m);
 
    return 0;
}