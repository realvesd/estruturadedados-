#include <stdio.h>
#define MAX 5

// Tipo base dos elementos da lista
typedef struct elementos {
    char nome[50];
    int num;
} t_elemento;

// Estrutura da pilha
typedef struct pilha {
    t_elemento vetor[MAX];
    int topo;
} t_pilha;

t_pilha criar() {
    t_pilha pilha;

    pilha.topo = -1;

    return pilha;
}

int isVazia(t_pilha * pilha) {
    return (pilha->topo == -1);
}

int isCheia(t_pilha * pilha) {
    return (pilha->topo == MAX-1);
}

t_elemento getElementoTopo(t_pilha * pilha)
{
    t_elemento vazio = { "" } ;

    if (isVazia(pilha))
        return vazio; // erro
    else
        return pilha->vetor[pilha->topo];
}
int push(t_pilha *pilha, t_elemento valor)
{
    if (isCheia(pilha))
        return 0; // erro

    pilha->vetor[++pilha->topo] = valor;

    return 1; // sucesso
}

t_elemento pop(t_pilha * pilha)
{
    t_elemento vazio = { "" };

    if (isVazia(pilha))
        return vazio; // erro
    else
        return pilha->vetor[pilha->topo--];
}

int main(void) {
  t_pilha Pilhinha;
  t_elemento dado;
  int i;

//criando a pilha
  Pilhinha = criar();
//verifica se a pilha está vazia
  if (isVazia(&Pilhinha)) {
  printf("A pilha está vazia\n");
  }

//empilhar um elemento
  for (i = 0; i <= (MAX -1); i++) {
    printf("Que nome deseja acrescentar na pilha?\n");
    scanf("%s", dado.nome);
    push(&Pilhinha, dado);
  }

  //verifica se a pilha esta cheia
   if (isCheia(&Pilhinha)) {
 printf("A pilha está cheia\n");
  }
  //obter o elemento do topo da pilha
  dado = getElementoTopo(&Pilhinha);
  printf("O elemento do topo é: %s\n", dado.nome);
  
  //desempilhar o elemento do topo
  dado = pop(&Pilhinha);
  printf("O elemento do topo está sendo removido...\n");

  //exibir os elementos da pilha
  for (i = 0; i <= Pilhinha.topo; i++) {
    printf("Elementos da pilha: %s\n", Pilhinha.vetor[i].nome);
  }
