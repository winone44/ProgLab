//Napisać program sprawdzający czy dany rok wprowadzony z klawiatury jest przestępny czy nie
//
#include <stdio.h>
 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
 
int main() {

    system("cls");
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