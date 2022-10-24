#include <stdio.h>
#include <stdlib.h>

struct sViagem{

    char nome[80];
    char CPF[11];
    char RG[13];
    char telefone[11];
    char email[80];
    char pais[20];
    char estado[30];
    char cidade[30];
    char CEP[8];
    char bairro[30];
    char rua[30];
    char numero[4];
    char origem[40];
    char destino[40];

};

struct sViagem Viajante[10000];

int main(){

    int cont, opcao;
    char escolha;
    cont = 0;
    do{
        printf("Nome:\n");
        fflush(stdin);
        gets(Viajante[cont].nome);

        printf("CPF:\n");
        fflush(stdin);
        gets(Viajante[cont].CPF);

        printf("RG:\n");
        fflush(stdin);
        gets(Viajante[cont].RG);

        printf("Digite o telefone:\n");
        fflush(stdin);
        gets(Viajante[cont].telefone);

        printf("E-mail:\n");
        fflush(stdin);
        gets(Viajante[cont].email);

        printf("Pais de origem:\n");
        fflush(stdin);
        gets(Viajante[cont].pais);

        printf("Digite o estado:\n");
        fflush(stdin);
        gets(Viajante[cont].estado);
        
        printf("Digite a cidade:\n");
        fflush(stdin);
        gets(Viajante[cont].cidade);
        
        printf("Digite o CEP:\n");
        fflush(stdin);
        gets(Viajante[cont].CEP);
        
        printf("Digite o bairro:\n");
        fflush(stdin);
        gets(Viajante[cont].bairro);
        
        printf("Digite a rua:\n");
        fflush(stdin);
        gets(Viajante[cont].rua);
        
        printf("Digite o número da casa:\n");
        fflush(stdin);
        gets(Viajante[cont].numero);
        
        printf("Origem:\n");
        fflush(stdin);
        gets(Viajante[cont].origem);
        
        printf("Destino:\n");
        fflush(stdin);
        gets(Viajante[cont].destino);

        printf("deseja continuar? Digite 0 para sair\n");
        scanf("%c",&opcao);
        if(opcao == 0){
            printf("Até Logo!\n");
        }
        else{
            system("cls");
        }
    }while(opcao == 0);
    system("pause");
    return 0;

}