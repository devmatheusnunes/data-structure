#include <stdio.h>
#include <stdlib.h>

int main(){

    int opcao;
    float tanq, sub, soma, resp;
    tanq = 50000.00;
    
    while(tanq =! 0){
        printf("Escolha a opção:\n");
        printf("1. Abastecer Veiculo\n");
        printf("2. Abastecer Tanque\n");
        scanf("%d",&opcao);
        
        switch(opcao){
            case 1:
            system("cls");
            printf("Digite a quantidade de combustivel a ser retirado:\n");
            scanf("%f",&sub);
            resp = tanq - sub;
            if(tanq <= 0){
                printf("\n\nCombustivel insuficiente\n\n");
            }
            else{
                printf("\n\nValor total: %.2f\n\n", resp);
            }
            break;

            case 2:
            system("cls");
            printf("Digite a quantidade de combustivel a ser adicionado:\n");
            scanf ("%f",&soma);
            tanq = tanq + soma;
            if(tanq >= 10000){
                printf("\n\nNivel de combustivel no maximo\n\n");

            }
            else{
                printf("\n\nValor total: %.2f\n\n", tanq);
            }
            break;
            default:
            printf("Opcao invalida\n");
        }
        printf("Quantidade de combustivel no tanque: %.2f\n",tanq);
        tanq = resp;
    }
    system("pause");
    return 0;

}