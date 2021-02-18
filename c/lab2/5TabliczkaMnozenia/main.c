#include <stdio.h>

int main(){

    system("cls");

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

    return 0;
}