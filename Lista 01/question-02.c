#include <stdio.h>
#include <stdlib.h>

int main(){

    int num;

    printf("Entre com um numero positivo:\n");
    scanf("%d",&num);
    if(num >= 0){
        if((num%3 == 0) || (num%8 == 0)){
            printf("O numero e multiplo de 3 ou 8\n\n");
        }
        else{
            printf("O numero nao e multiplo de 3 ou 8\n\n");
        }
    }
    else{
        printf("Esse numero e invalido\n\n");
    }
    system("pause");
    return 0;

}