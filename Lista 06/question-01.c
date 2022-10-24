#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct sPessoa{
    char nome[30];
    char matricula[10];
    float nota1, nota2, nota3;

}Pessoa;

typedef struct sCelula{

    Pessoa informa;
    struct sCelula *Prox;

}Celula;

void inicialista(Celula **lista){
    (*lista) = NULL;

}
Pessoa *criaCelula(){

    Celula *novaCelula;
    novaCelula = (Celula*) malloc(sizeof(Celula));
    return novaCelula;

}

void insMatricula(Celula **lista){

    Celula *novaCelula,*aux, *ant;
    novaCelula = criaCelula();
    aux = *lista;
    printf("Nome:\n");

    fflush(stdin);
    gets(novaCelula->informa.nome);
    printf("Matricula:\n");

    fflush(stdin);
    gets(novaCelula->informa.matricula);
    printf("1a Nota:\n");
    scanf("%f",&novaCelula->informa.nota1);
    printf("2o Nota: ");
    scanf("%f",&novaCelula->informa.nota2);
    printf("3o Nota: ");
    scanf("%f",&novaCelula->informa.nota3);
    while(aux != NULL){
        if(strcmp(novaCelula->informa.matricula, aux->informa.matricula)==-
            1||(novaCelula->informa.matricula, aux->informa.matricula)==0){
            novaCelula->Prox = aux;
            break;
        }
        ant = aux;
        aux = aux->Prox;
    }
    if(aux==(*lista)){
        *lista = novaCelula;
    }else{
        ant->Prox = novaCelula;
    }
    return;

}

void insNome(Celula **lista){

    Celula *novaCelula,*aux, *ant;
    novaCelula = criaCelula();
    aux = *lista;
    printf("Nome:\n");

    fflush(stdin);
    gets(novaCelula->informa.nome);
    printf("Matricula:\n");

    fflush(stdin);
    gets(novaCelula->informa.matricula);
    printf("1a Nota:\n");
    scanf("%f",&novaCelula->informa.nota1);
    printf("2o Nota: ");
    scanf("%f",&novaCelula->informa.nota2);
    printf("3o Nota: ");
    scanf("%f",&novaCelula->informa.nota3);
    while(aux != NULL){
        if(strcmp(novaCelula->informa.nome, aux->informa.nome)<=0){
            novaCelula->Prox = aux;
            break;
        }
        ant = aux;
        aux = aux->Prox;
    }
    if(aux==(*lista)){
        *lista = novaCelula;
    }else{
        ant->Prox = novaCelula;
    }
    return;

}
void insNota(Celula **lista){

    Celula *novaCelula,*aux, *ant;
    novaCelula = criaCelula();
    aux = *lista;
    printf("Nome:\n");

    fflush(stdin);
    gets(novaCelula->informa.nome);
    printf("Matricula:\n");

    fflush(stdin);
    gets(novaCelula->informa.matricula);
    printf("1a Nota:\n");
    scanf("%f",&novaCelula->informa.nota1);
    printf("2o Nota: ");
    scanf("%f",&novaCelula->informa.nota2);
    printf("3o Nota: ");
    scanf("%f",&novaCelula->informa.nota3);
    while(aux != NULL){
        if((novaCelula->informa.nota1 + novaCelula->informa.nota2 + novaCelula->informa.nota3)/3 <= (aux->informa.nota1 + aux->informa.nota2 + aux->informa.nota3)/3){
            novaCelula->Prox = aux;
            break;
        }
        ant = aux;
        aux = aux->Prox;
    }
    if(aux==(*lista)){
        *lista = novaCelula;
    }else{
        ant->Prox = novaCelula;
    }
    return;

}

void imprimirlista(Celula **lista){
    Celula *aux;
    aux = (*lista);
    while(aux != NULL){
        printf("NOME: %s\n",aux->informa.nome);
        printf("MATRICULA: %s\n",aux->informa.matricula);
        printf("NOTA 1: %.2f\n",aux->informa.nota1);
        printf("NOTA 2: %.2f\n",aux->informa.nota2);
        printf("NOTA 3: %.2f\n",aux->informa.nota3);
        aux = aux->Prox;
    }
    return;

}

void liberalista(Celula **lista){
    Celula *data, *aux;
    aux = (*lista);
    while(aux != NULL){
        data = aux;
        aux = aux->Prox;
        free(data);
    }
    return;
}

int menu(){

    int opcao;
    printf("Olá, seja bem vindo!\n");
    printf("1.Inserir Nome\n");
    printf("2.Inserir Matricula\n");
    printf("3.Inserir Notas\n");
    printf("4.Imprimir Lista\n");
    printf("0.Sair\n");
    scanf("%d",&opcao);
    return opcao;

}

int main(){

    int escolha;
    Celula *lista;
    iniciaLista(&lista);
    menu();
    escolha = menu();
    do{
        switch(escolha){
            case 1:
                insNome(&lista);
                break;
            case 2:
                insMatricula(&lista);
                break;
            case 3:
                insertNota(&lista);
                break;
            case 4:
                imprimirlista(&lista);
                break;
            case 0:
                printf("Saindo");
        }
    }while(escolha == 0);
    system("pause");
    return 0;

}