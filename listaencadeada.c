#include <stdio.h>
#include <stdlib.h>

typedef struct elementos {
    char nome[50];
    // Outros elementos
} t_elemento;


// Estrutura lista
typedef struct no {
    t_elemento dado;  // elemento contendo os dados
    struct no  * prox; // ponteiro para o proximo elemento
} t_no; // tipo da estrutura

// define t_lista como sendo um outro nome para "t_no *"
typedef t_no* t_lista;  

// Criar uma lista vazia, alocando o nó
t_no * criaNo() {
    t_no * no = (t_no*) malloc(sizeof(t_no));

    if (no)
        no->prox = NULL;

    return no;
}
// Verificar se uma lista está vazia
int isVazia(t_lista lista) {
    return (lista == NULL);
}

// Descobrir o tamanho da lista
int getTamanho(t_lista lista) {
    int n = 0;
    while (lista != NULL) {
        lista = lista->prox;
        n++;
    }
    return n;
}
//Inserir um elemento na lista
int inserir(t_lista *lista, int pos, t_elemento dado) {
    t_no * p, * novo;
// Obter no da lista
    t_no * getNo(t_lista lista, int pos) {
    // Retorna 0 se posicao invalida. Do contrario, retorna o elemento
    int n = 0;

    if (pos<0)
        return 0; // erro: posicao invalida

    while (lista != NULL) {
        if (n==pos)
            return lista;
        lista = lista->prox;
        n++;
    }
    return 0; // erro: posicao invalida
}


    // inserção na primeira posicao ou em lista vazia
    if (pos == 0) {
        novo = criaNo();
        if (novo == NULL)
            return 0; // erro: memoria insuficiente
        novo->dado = dado;
        novo->prox = *lista;
        *lista = novo;
        return 1;
            p = getNo(*lista, pos-1);
    if (p == NULL)
         return 0; // erro: posicao invalida 
    novo = criaNo();
    if (novo == NULL)
        return 0; // erro: memoria insuficiente
    novo->dado = dado;
    novo->prox = p->prox;
    p->prox = novo;

    return 1;

    }

int main(void) {

int i;
t_lista lNomes;
t_elemento dado;
    
for (i = 0; i < 3; i++) { //criando loop para pegar os 3 nomes
    printf("Digite um nome\n");
    scanf("%s", &dado.nome);
    (if (!inserir(&lNomes, i, dado)) { 
        printf("Erro\n");
    }
    

criaNo();



  
  return 0;
}
