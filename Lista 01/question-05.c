#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    int cont;
    char nome[80];
    
    printf("Digite o nome\n");
    gets(nome);
    for(cont=0;nome[cont] !=0;cont++);
    printf("%d\n",cont);
    system("pause");
    return 0;

}