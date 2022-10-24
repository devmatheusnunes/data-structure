#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct sAluno{
    char nome[50];
    char matriz[10];
    int not1, not2, not3;
}ALUNO;

typedef struct sCelula{
    Aluno info;
    struct sCelula *next;
}CELULA;

CELULA* criarCelula(){
    int cont = 0;
    CELULA = *novaCelula;
    novaCelula = (CELULA*) malloc(sizeof(CELULA));
    return novaCelula;
}

void iniciaLista(CELULA **lista){
    (*lista)=NULL;
}

int listaVazia(CELULA **lista){
    if((*lista)==NULL){
        return 1;
    }
    return 0;
}

ALUNO inserirInicio(CELULA **lista){
    CELULA *novaCelula = criarCelula();
    if(novaCelula == NULL){
        printf("ERRO: Memoria Cheia!!");
    }
    if (listaVazia(lista)){
        inserirFim(lista);
    }
    printf("NOME:\n");
    gets(novaCelula->info.nome);
    printf("MATRICULA:\n");
    gets(novaCelula->info.matri);
    printf("NOTA 1:\n");
    gets(novaCelula->info.not1);
    printf("NOTA 2:\n");
    gets(novaCelula->info.not2);
    printf("NOTA 3:\n");
    gets(novaCelula->info.not3);
    novaCelula->next = (*lista);
    (*lista) = novaCelula;
}

ALUNO inserirFim(CELULA **lista){
    CELULA *novaCelula, *aux;
    novaCelula = criarCelula();
    if(novaCelula == NULL){
        printf("ERRO:Memoria Cheia");
    }
    printf("NOME:\n");
    gets(novaCelula->info.nome);
    printf("MATRICULA:\n");
    gets(novaCelula->info.matri);
    printf("NOTA 1:\n");
    gets(novaCelula->info.not1);
    printf("NOTA 2:\n");
    gets(novaCelula->info.not2);
    printf("NOTA 3:\n");
    gets(novaCelula->info.not3);
    aux = (*lista);
    while(aux->next != NULL){
        aux = aux->next;
    }
    aux->next = novaCelula;
}

ALUNO romoverInicio(CELULA **lista){
    CELULA *removida;
    ALUNO removido;
    strcpy(removido.nome," ");
    strcpy(removido.matricula," ");
    removido.not1 = -1;
    removido.not2 = -1;
    removido.not3 = -1;
    if(listaVazia(lista)){
        printf("ERRO: Lista Vazia!!");
        return removido;
    }
    removida = (*lista);
    removido = removida->info;
    (*lista) = (*lista)->next;
    free(removida);
    return removido;
}
ALUNO removerFim(CELULA **lista){
    CELULA *removida, *prev;
    ALUNO removido = criarPESSOA(" ",-1,-1,-1);
    if(listaVazia(lista)){
        printf("ERRO: Lista Vazia!!");
        return removerInicio(lista);
    }
    removida = (*list);
    while(removida->next != NULL){
        prev = removida;
        removida = removida->next;
    }
    removido = removida->info;
    prev->next = NULL;
    free(removida);
    return removido;
}

void imprimirLista(CELULA *lista){
    CELULA *aux = (*lista);
    if(listaVazia(lista)){
        printf("ERRO: Lista Vazia!!");
    }
    else{
        printf("Lista: ");
        while(aux != NULL){
            imprimirElem(aux->info);
            aux = aux->next;
        }
        printf("\n");
    }
}

void imprimirElem(CELULA info){
    printf("NOME: %s\n",CELULA.info.nome);
    printf("MATRICULA: %s\n",CELULA.info.matri);
    printf("NOTA 1: %d\n",CELULA.info.not1);
    printf("NOTA 2: %d\n",CELULA.info.not2);
    printf("NOTA 3: %d\n",CELULA.info.not3);
}

void imprimirApro(CELULA **lista){
    int media;
    CELULA *aux = (*lista);
    if(listaVazia(lista)){
        printf("ERRO: Lista Vazia!!");
    }
    else{
        printf("Lista: ");
        while(aux != NULL){
            media = ((lista->info.not1)+(lista->info.not2)+(lista->info.not3))/3;
            if(media>=7){
                imprimirElem(aux->info);
            }
        }
        printf("\n");
    }
}

int menu(){
    int escolha;
    printf("1.Inserir no Inicio\n");
    printf("2.Inserir no Fim\n");
    printf("3.Remover no Inicio\n");
    printf("4.Remover no Fim\n");
    printf("5.Imprimir\n");
    printf("6.Pesquisar por Aprovados\n");
    printf("7.Alterar Nota\n");
    printf("8.Insrir no Meio da Lista\n");
    printf("9.Imprimir Tamanho da Lista\n");
    printf("10.Imprimir Media\n");
    printf("0.Sair\n");
    scanf("%d",&escolha);
    return escolha;
}

int main(){
    CELULA *lista;
    int opcao;
    opcao = menu();
    iniciaLista();
    switch(opcao){
        case 0:
            printf("saindo...");
            break;
        case 1:
            inserirInicio(&lista);
            break;
        case 2:
            inserirFim(&lista);
            break;
        case 3:
            removerInicio(&lista);
            break;
        case 4:
            removerFim(&lista);
            break;
        case 5:
            imprimirLista(&lista);
            break;
        case 6:
            imprimirApro(&lista);
            break;
        case 7:
            alterarNota(&lista);
            break;
        case 8:
            inserirMeio(&lista);
            break;
        case 9:
            imprimirElem(&lista);
            break;
        case 10:
            imprimirmedia(&lista);
            break;
        default:
            printf("ERRO");
            menu();
    }
    system ("pause");
    return 0;
}