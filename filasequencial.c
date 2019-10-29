#include <stdio.h>
#define MAX 5

// Tipo base dos elementos da fila 
typedef struct elementos {
    char nome[50];	
} t_elemento;

typedef struct fila {
    t_elemento vetor[MAX]; // vetor que armazena a fila
    int inicio; // posicao do primeiro elemento
    int fim;    // posicao do ultimo elemento
    int quant_element;    // numero de elementos da fila
} t_fila;

t_fila criar()
{
    t_fila fila;

    fila.inicio = 0;
    fila.fim = -1;
    fila.quant_element = 0;


    return fila;
}

int isVazia (t_fila * fila)
{
    return (fila->quant_element == 0);
}

int isCheia(t_fila * fila)
{
    return (fila->quant_element == MAX);
}

int inserir (t_fila * fila, t_elemento valor)
{
    if (isCheia(fila))
        return 0;

    (fila->quant_element)++;
    fila->fim = (fila->fim + 1) % MAX;
    fila->vetor[fila->fim] = valor;
    return 1;
}

t_elemento remover(t_fila * fila)
{
    t_elemento valor = { "" } ;
    if (isVazia(fila))
        return valor; // Erro: fila vazia

    valor = fila->vetor[fila->inicio];
    fila->vetor[fila->inicio].nome[0] = '\0';// zera, opcional
    (fila->quant_element)--;
    fila->inicio = (fila->inicio + 1) % MAX;
    return valor;
}

void exibir(t_fila * fila) {
    int i;
    if (isVazia(fila)) {
        printf("Fila vazia\n");
        return;
    }

    printf("\nExibindo fila:\n");
    printf("inicio: %d\n", fila->inicio);
    printf("fim:    %d\n", fila->fim);
    for (i=0 ; i<MAX ; i++) {
        printf("%d::%s\n", i, fila->vetor[i].nome);
    }
}


int main(void) {
  //criar fila
  t_fila Filinha;
  t_elemento dado;

  Filinha = criar();

  //verifica se a fila esta esta vazia
  if (isVazia(&Filinha)) {
  printf("A fila está vazia\n");
  }

 //verifica se a fila está cheia
 if (isCheia(&Filinha)) {
 printf("A fila está cheia\n");
 }

 //inserir elemento na fila
 printf("Que nome deseja inserir na fila?\n");
 scanf("%s", dado.nome);
 
 inserir(&Filinha, dado);

 //remover da fila
 printf("Que nome deseja remover da fila?");
 scanf("%s", dado.nome);
 remover(&Filinha);
 
 //exibir a lista
 exibir(&Filinha);

 //esvaziar a fila
 remover(&Filinha);

 
 












  
}
