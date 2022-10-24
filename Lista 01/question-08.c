#include <stdio.h>
#include <stdlib.h>

void funcao_1(int vet[], int x){
    
    if(x < 0){
        return;
    }

    printf("%d\t", vet[x]);
    funcao_1(vet, x -1);

}

void funcao_2(int vet[], int x){
    
    if(x < 0){
        return;
    }
    funcao_2(vet, x -1);
    printf("%d\t", vet[x]);
}

int main(){

    int vet[5] = {1,2,3,4,5};
    
    funcao_1(vet,4);
    printf("\n");
    funcao_2(vet,4);
    return 0;

}
