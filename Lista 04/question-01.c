#include <stdio.h>
#include <stdlib.h>
#define MAX_TAM 15

typedef struct sItem{
    char nome[20];
    float preco;
}ITEM;

void inicializarITEM(ITEM *item){
    item->preco = -1;
}

int listaCheia(ITEM *item){
    if(item->preco == (MAX_TAM -1)){
        return 1;
    }
    return 0;
}

int listaVazia(ITEM *item){
    if(item->preco == -1){
        return 1;
    }
    return 0;
}

int inserirFim(ITEM *item, char nome){
    if(listaCheia(item)){
        printf("\nERRO: lista cheia!");
        return 0;
    }
    item->nome[item->preco+1] = elemento;
    item -> elemento = item->preco +1;
    return 1;
}

int adcionarElemento(ITEM *item, int posicao){
    int i;
    if(listaVazia(item)){
        printf("\nERRO:Lista Vazia!");
        return 0;
    }
    if(posicao < 0 || posicao > item->preco){
        printf("\nERRO:Posucao Invalida!");
        return 0;
    }
    for(i = posicao;i < item->preco; i++){
        item->nome[item->preco+1] = elemento;
        item -> elemento = item->preco +1;
    }
    item->preco++;
    return 1;
}

int removerElemento(ITEM *item, int posicao){
    int i;
    if(listaVazia(item)){
        printf("\nERRO:Lista Vazia!");
        return 0;
    }
    if(posicao < 0 || posicao > item->preco){
        printf("\ERRO:Posucao Invalida!");
        return 0;
    }
    for(i = posicao;i < item->preco; i++){
        item->nome[i] = item->nome[i+1];
    }
    item->preco--;
    return 1;
}

int removertudo(ITEM *item){
    int i;
    if(listaVazia(item)){
        printf("\nERRO:Lista Vazia!");
        return 0;
    }
    for(i = item;i < item->preco; i++){
        item->nome[i] = item->nome[i+1];
    }
    item->preco--;
    return 1;
}

int tamanhoLista(ITEM *item){
    return item->preco+1;
}

void menu(opcao){
    int escolha;
    escolha = opcao;
    printf("1.Inicializar Lista\n");
    printf("2.Inserir item no final da lista\n");
    printf("3.Inserir item na posição k da lista\n");
    printf("4.Remover item da posição k da lista\n");
    printf("5.Remover todos os itens\n");
    printf("6.Verificar tamanho da Lista\n");
    printf("7.Retornar o item com maior preço\n");
    printf("8.Imprimir Lista\n");
    printf("0.Sair do programa\n");
    scanf ("%d",&escolha);
}

int main(){
    
    int opcao, posicao;
    
    ITEM *item = (ITEM *) malloc (sizeof(ITEM));
    InicializarITEM(item);
    do{
        opcao = menu();
        switch(opcao){
            case 1:
                inicializarITEM();
                break;
            case 2:
                inserirFim();
                break;
            case 3:
                printf("Digite a posicao:\n");
                scanf("%d",&posicao);
                adcionarElemento();
                break;
            case 4:
                printf("Digite a posicao:\n");
                scanf("%d",&posicao);
                removerElemento();
                break;
            case 5:
                removertudo();
                break;
            case 6:
                tamanhoLista();
                break;
            case 7:
                break;
            case 8:
                break;
            case 0:
                printf("Saindo...\n\n");
                break;
            default:
                printf("ERRO\n");
                break;
        }
    }while(opcao != 0);
    ITEM *item = FREE;
    ITEM *item = NULL;
    system("pause");
    return 0;
}