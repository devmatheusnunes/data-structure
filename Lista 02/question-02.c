#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct sEndereco{

    char Logdro[80];
    char numero[2];
    char cmpl[80];
    char bairro[30];
    char estado[2];
    char pais[20];

};

struct sPessoa{

    char nome[80];
    char tiposang[2];
    char CPF[13];
    char RG[13];
    char fone[15];
    char email[20];
    int codigo;
    struct sEndereco Lugar;

};

struct sPessoa hab;
int indice = 0;
int cad = 2018000;

void cadastro(){

    printf("Digite o nome:\n");
    fflush(stdin);
    gets(sPessoa[indice].nome);
    
    printf("Tipo sanguineo:\n");
    fflush(stdin);
    gets(sPessoa[indice].tiposang);
    
    printf("CPF:\n");
    fflush(stdin);
    gets(sPessoa[indice].CPF);
    
    printf("RG:\n");
    fflush(stdin);
    gets(sPessoa[indice].RG);
    
    printf("Telefone:\n");
    fflush(stdin);
    gets(sPessoa[indice].fone);
    
    printf("E-mail:\n");
    fflush(stdin);
    gets(sPessoa[indice].email);
    
    printf("Logradouro:\n");
    fflush(stdin);
    gets(sEndereco[indice].Logdro);
    
    printf("Numero:\n");
    fflush(stdin);
    gets(sEndereco[indice].numero);
    
    printf("Complemento:\n");
    fflush(stdin);
    gets(sEndereco[indice].cmpl);
    
    printf("Bairro:\n");
    fflush(stdin);
    gets(sEndereco[indice].bairro);
    
    printf("Estado:\n");
    fflush(stdin);
    gets(sEndereco[indice].estado);
    
    printf("Pais:\n");
    fflush(stdin);
    gets(sEndereco[indice].pais);
    
    sPessoa[indice].codigo = cad + (indice+1);
    printf("Seu cadastro e:%s",sPessoa[indice].codigo);
    printf("Cadastro feito com sucesso!\n\n");
    system("pause");
    indice++;

}
void vercadastro(){

    int cad, cont;
    struct sEndereco Lugar;
    
    printf("Digite a matrícula:\n");
    scanf("%i",&cad);
    for(cont=0;cont<indice;cont++){
        if(cad == sPessoa[cont].codigo){
            printf("********************************************************************************");
            printf("Nome: %s\n",sPessoa[cont].nome);
            printf("Tipo sanguineo: %s\n",sPessoa[cont].tiposang);
            printf("CPF: %s\n",sPessoa[cont].CPF);
            printf("RG: %s\n",sPessoa[cont].RG);
            printf("Telefone: %s\n",sPessoa[cont].fone);
            printf("E-mail: %s\n",sPessoa[cont].email);
            printf("Logradouro: %s\n",Lugar[cont].Logdro);
            printf("Numero: %s\n",Lugar[cont].numero);
            printf("Complemento: %s\n",Lugar[cont].cmpl);
            printf("Bairro: %s\n",Lugar[cont].bairro);
            printf("Estado: %s\n",Lugar[cont].estado);
            printf("Pais: %s\n",Lugar[cont].pais);
            system("pause");
        }
    }
}

int menu(){

    int resposta;

    system("cls");
    printf("\t Bem Vindo\n\tSistema On-line \n\n");
    printf("***********************\nO que deseja hoje?\nSelecione uma opção a seguir:\n\n***********************\n");
    printf("Digite 1 - Cadastrar\n");
    printf("Digite 2 - Pesquisar familiar\n");
    printf("Digite 3 - Ver cadastros\n");
    printf("Digite 4 - Mostra quantidades de cadastros\n");
    printf("Digite 5 - Apagar\n");
    printf("Digite 0 - Sair\n\n");
    scanf("%d",&resposta);
    return resposta;

}

int main(){

    int opcao;

    do{
        opcao = menu();
        switch(opcao)
        {
            case 1:
                system("cls");
                cadastro();
                break;
            case 2:
                system("cls");
                break;
            case 3:
                system("cls");
                vercadastro();
                break;
            case 4:
                system("cls");
                mostraquantidade();
                break;
            case 5:
                system("cls");
                excluir();
                break;
            case 0:
                printf("Até Logo!!\n\n\n");
                break;
            default:
                printf("Opção inválida!");
                break;
        }
    }while(opcao!=0);
    system("pause");
    return 0;

}