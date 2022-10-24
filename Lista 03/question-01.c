#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct sTime{

    char nome[80];
    char razsocial[80];
    char escudo[100];
    char numjogadores[2];
    float folhapag[20];
    char patrocinador[30];
    char tecnico[20];
    float valortime[10];

};
void cadastro(){

    struct sTime camisa;
    int ind=0;

    printf("Nome:\n");
    fflush(stdin);
    gets(camisa[ind].nome);

    printf("Razão Social:\n");
    fflush(stdin);
    gets(camisa[ind].razsocial);

    printf("Descricao do escudo:\n");
    fflush(stdin);
    gets(camisa[ind].escudo);

    printf("Número de jogadores:\n");
    fflush(stdin);
    gets(camisa[ind].numjogadores);

    printf("Folha de pagamento:\n");
    fflush(stadin);
    gets(camisa[ind].folhapag);

    printf("Patrocinador principal:\n");
    fflush(stadin);
    gets(camisa[ind].patrocinador);

    printf("Tecnico:\n");
    fflush(stadin);
    gets(camisa[ind].tecnico);

    printf("Valor do Time em R$:\n");
    fflush(stadin);
    gets(camisa[ind].valortime);

    printf("Cadastro feito com sucesso!!");
    ind++;

}

void menu(void){

    int escolha;

    printf("1.Cadastrar Time:\n");
    printf("2.Rebaixamento de Time:\n");
    printf("3.Ascensao de Time:\n");
    printf("4.Buscar Time:\n");
    printf("5.Excluir dados:\n");
    printf("6.Sair:\n");
    scanf("%d",&escolha);
    return escolha;

}

int main(){

    int opcao, matriz[][],x,y;
    int *pmatriz;

    printf("Bem Vindo!\n\n");
    printf("Digite o tamanho da tabela:\n");
    printf("Linha:\n");
    scanf("%d",&x);
    printf("Coluna:\n");
    scanf("%d",&y);
    int pmatriz = (matriz*) malloc(sizeof(matriz[x][y]));
    opcao = menu();
    do{
        switch(opcao){
            case 1:
                cadrastro();
                break;
            case 2:
                descetime();
                break;
            case 3:
                sobetime();
                break;
            case 4:
                buscatime();
                break;
            case 5:
                printf("saindo\n");
                break;
        }
    }while(opcao == 0);
    system("pause");
    return

}
