#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

typedef struct sProduto{
    char nome[50];
    int quantidade;
    float preco;

}PRODUTO;

typedef struct sCelula{

    PRODUTO info;
    struct sCelula *next;

}CELULA;

void IniciarLista(CELULA **lista){
    (*lista) = NULL;

}
CELULA* criarCelula(){
    CELULA *nova;
    nova = (CELULA *) malloc(sizeof(CELULA));
    return nova;

}

int ListaVazia(CELULA **lista){
    if((*lista) == NULL){
        return 1;
    }
    return 0;

}

int InserirFinal(CELULA **lista){
    CELULA *nova;
    nova = criarCelula();
    if(nova == NULL){
        printf("\nERRO! Memoria cheia!");
        return 0;
    }
    system("cls");
    printf("Produto:\n");
    fflush(stdin);
    gets(nova->info.nome);
    printf("Quantidade:\n");
    fflush(stdin);
    scanf("%d",&nova->info.quantidade);
    printf("Preco:\n");
    fflush(stdin);
    scanf("%f",&nova->info.preco);
    if(ListaVazia(lista)){
        nova->next = nova;
        return 1;
    }
    nova = (*lista)->next;
    nova->next = (*lista)->next;
    (*lista)->next = nova;
    (*lista) = nova;
    return 1;

}

int InserirInicio(CELULA **lista){
    CELULA *nova;
    nova = criarCelula();
    if(nova == NULL){
        printf("\n ERRO: Memoria Cheia!");
        return 0;
    }
    system("cls");
    printf("Produto:\n");
    fflush(stdin);
    gets(nova->info.nome);
    printf("Quantidade:\n");
    fflush(stdin);
    scanf("%d",&nova->info.quantidade);
    printf("Preco:\n");
    fflush(stdin);
    scanf("%f",&nova->info.preco);
    if(ListaVazia(lista)){
        nova->next=nova;
        return 1;
    }
    nova->next = (*lista)->next;
    (*lista)->next = nova;
    return 1;

}

int RemoverInicio(CELULA **lista){
    CELULA *removida;
    if(ListaVazia(lista)){
        printf("\nERRO! Lista Vazia!");
        return 0;
    }
    removida = (*lista)->next;
    if((*lista)->next == (*lista)){
        IniciarLista(lista);
    }else{
        (*lista)->next = removida->next;
    }
    free(removida);
    return 1;

}

int RemoverFinal(CELULA **lista){
    CELULA *removida, *aux;
    if(ListaVazia(lista)){
        printf("\nERRO! Lista Vazia!");
        return 0;
    }
    aux = (*lista)->next;
    removida = (*lista);
    if((*lista)->next ==(*lista)){
        IniciarLista(lista);
    }else{
        while(removida->next != (*lista)){
            aux = aux->next;
        }
        aux->next = (*lista)->next;
    }
    free(removida);
    return 1;

}

void ImprimirLista(CELULA **lista){
    CELULA *aux;
    aux = (*lista) -> next;

    system("cls");
    while(aux != (*lista) -> next ){
        printf("==================================");
        printf("\nProduto: %s",aux->info.nome);
        printf("\nQuantidade: %d",aux->info.quantidade);
        printf("\nPreço: %f", aux->info.preco);
        aux = aux -> next;
    }

}

int Somatorio(CELULA **lista){
    float ganho = 0;
    CELULA *aux;
    aux = (*lista) -> next;
    while(aux != (*lista)->next){
        ganho = ganho + aux->info.preco;
        aux = aux->next;
    }
    printf("%.2f", ganho);
}

void LiberaLista(CELULA **lista){
    CELULA *aux, *remover;
    if(ListaVazia(lista)){
        printf("\nERRO! Lista Vazia!");
        return;
    }
    aux = (*lista)->next;
    while(aux->next != (*lista)){
        remover = aux;
        aux = aux->next;
        free(remover);
    }

}

int Menu(){

    int escolha;
    printf("1.Inserir no Inicio\n");
    printf("2.Inserir no Fim\n");
    printf("3.Remover no Inicio\n");
    printf("4.Remover no Fim\n");
    printf("5.Imprimir\n");
    printf("6.Somar total vendido em uma semana\n");
    printf("7.Liberar Lista\n");
    printf("0.Sair\n");
    scanf("%d",&escolha);
    return escolha;

}

int main(){

    int opcao;
    CELULA *lista;
    IniciarLista(&lista);

    do{
        opcao = Menu();
        switch(opcao){
            case 1:
                system("cls");
                InserirInicio(&lista);
                break;
            case 2:
                system("cls");
                InserirFinal(&lista);
                break;
            case 3:
                system("cls");
                RemoverInicio(&lista);
            case 4:
                system("cls");
                RemoverFinal(&lista);
                break;
            case 5:
                system("cls");
                ImprimirLista(&lista);
                break;
            case 6:
                system("cls");
                Somatorio(&lista);
                break;
            case 7:
                system("cls");
                LiberaLista(&lista);
                break;
            case 0:
                system("cls");
                printf("saindo...");
                break;

        }
    }while(opcao != 0);
    system("pause");
    return 0;

}