#include <stdio.h>

#define	MAX 10
// Tipo base dos elementos da lista
typedef struct elementos {
    char nome[50];
    // Outros elementos
} t_elemento;

// Estrutura da lista
typedef struct lista {
    t_elemento vetor[MAX];//vet que armazena elem. da pilha
    int n; // posicao (indice) do ultimo elemento da lista
} t_lista; // tipo lista

t_lista criar() {
    t_lista lista;

    lista.n = -1;

    return lista;
}

// Deslocar para esquerda
int deslocaEsquerda(t_lista * lista, int pos) {
    int i;

    for (i < (lista -> n); i = pos; i++)
        lista->vetor[i] = lista->vetor[i+1];

    return 1;
}


int main() {

 criar(); 
}
