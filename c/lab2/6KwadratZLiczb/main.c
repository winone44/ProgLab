#include <stdio.h>

int main(){

    system("cls");

    int i,j,suma1=0;
    int tab2d[4][4];

    scanf("Prosze wpisac 16 cyfr");
    for (i=0;i<4;i++){

        for (j = 0; j < 4; j++)
        {
            scanf("%d", &tab2d[i][j]);
        }
                               
    }
    i=0;
    j=0;
    printf("\n");
    for (i=0;i<4;i++){

        for (j = 0; j < 4; j++)
        {
            printf("%d\t", tab2d[i][j]);
            suma1=suma1+tab2d[i][j];
        }
        printf("\t\t%d\n", suma1);
        suma1=0;
                               
    }
    i=0;
    j=0;
    printf("\n\n\n\n");
    for (i=0;i<4;i++){

        for (j = 0; j < 4; j++)
        {
            suma1=suma1+tab2d[j][i];
        }
        printf("%d\t", suma1);
        suma1=0;
                               
    }

    return 0;
}