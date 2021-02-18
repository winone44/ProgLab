#include <stdio.h>

int main(){
    system("cls");
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