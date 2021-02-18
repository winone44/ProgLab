#include <stdio.h>

int main(){
system("cls");

int menu=0;
printf("1-Odroc Liczbe Dwucyfrowa\n2-Odwroc Liczbe Trzycyfrowa\n3-Ilosc Znakow\n4-Rok Przestepny Czy Nie\n5-TabliczkaMnozenia\n6-Kwadrat 4x4\n7-Program Szyfrujacy\n8-Licz Samogloski\n\nProsze wpisac cyfre: ");
scanf("%d", &menu);

switch (menu)
{
case 1:
    fflush(stdin);
    odwrocLiczbeDwucyfrowa();
    printf("\n");
    break;
case 2:
    fflush(stdin);
    odwrocLiczbeTrzycyfrowa();
    printf("\n");
    break;
case 3:
    fflush(stdin);
    iloscZnakow();
    printf("\n");
    break;
case 4:
    fflush(stdin);
    rokPrzestepnyCzyNie();
    printf("\n");
    break;
case 5:
    fflush(stdin);
    tabliczkaMnozenia();
    printf("\n");
    break;
case 6:
    fflush(stdin);
    kwadratZLiczb();
    printf("\n");
    break;
case 7:
    fflush(stdin);
    programSzyfrujacy();
    printf("\n");
    break;
case 8:
    fflush(stdin);
    liczSamogloski();
    printf("\n");
    break;

default:
    return 0;
    break;
}



}

odwrocLiczbeDwucyfrowa(){

    int x,y,z;
    printf("Podaj liczbe dwucyfrowa\n");
    scanf("%d", &x);
    y=x%10;
    z=x/10;
    printf("\nliczba: %d\todrocona to %d%d",x,y,z);
 
    return 0;
}

odwrocLiczbeTrzycyfrowa(){

    int x,y,z,m;
    printf("Podaj liczbe trzycyfrowa\n");
    scanf("%d", &x);
    y=x%10;
    z=x/10%10;
    m=x/100;
    printf("\nliczba: %d\todrocona to %d%d%d",x,y,z,m);
 
    return 0;
}

iloscZnakow(){


    int x=0;
    printf("Wpisz jakis tekst: \n");
    while (getchar()!='\n'){
        x++;
    }
    printf("Twoj tekst ma %d znakow", x);
    return 0;
}

rokPrzestepnyCzyNie(){

    int x=0;
    printf("Podaj rok\n");
    scanf("%d", &x);
    while (x!=0) {
      if ((x%4==0 && x%100!=0) || x%400==0){
        printf("Rok przestepny\n");
      } else {
        printf("Rok nie przestepny\n");
      }
    printf("Podaj rok\n");
    scanf("%d", &x);      
    }
    printf("Koniec");
    return 0;
}

tabliczkaMnozenia(){


    int i,z;
    for (i=0;i<=10;i++){

        printf("\n %d",i);
         for (z=1;z<=10;z++){
            if(i==0){
                printf("\t %d",z*1);
            }
            else{
                printf("\t %d",z*i);
            }
        }
        
    }
}

kwadratZLiczb(){



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
}

programSzyfrujacy(){


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

liczSamogloski(){

    char zn;
    int licznik=0;
    zn=getchar();
    while(zn!='\n'){

        switch(toupper(putchar(zn))){
            case 'A': licznik++;
                    break;
            case 'Ą': licznik++;
                    break;
            case 'E': licznik++;
                    break;
            case 'Ę': licznik++;
                    break;
            case 'I': licznik++;
                    break;
            case 'O': licznik++;
                    break;
            case 'U': licznik++;
                    break;
            case 'Y': licznik++;
                    break;
            case 'Ó': licznik++;
                    break;
        }

        zn=getchar();
    }

    printf(" <- w tym zdaniu wystepuje/wystepuja %d samogloska/samogloski/samoglosek", licznik);
    return 0;
}