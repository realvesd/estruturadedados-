#include <stdio.h>
#include <stdlib.h>

typedef struct elementos {
    char nome[50];
} t_elemento;

typedef struct no {
    t_elemento dado;
    struct no * prox;
} t_no;

typedef struct fila {
    t_no* inicio;
    int quant_element;
    t_no* final;
} t_fila;

t_fila * criaCabeca ()
{
    t_fila * fila = (t_fila*) malloc(sizeof(t_fila));

    if (fila) {
        fila->inicio = fila->final = NULL;
        fila->quant_element=0;
    }

    return fila;
}

t_no * criaNo() {
    t_no * no = (t_no*) malloc(sizeof(t_no));

    // verifica se houve memoria suficiente para alocar
    if (no)
        no->prox = NULL;

    return no;
}

int isVazia (t_fila * fila)
{
    return (fila->quant_element == 0);
}

int inserir (t_fila *fila, t_elemento valor) {
    t_no *novo;
    novo = criaNo();
    if (novo == NULL)
        return 0; // Erro: memoria insuficiente
    novo->dado = valor;
    if (isVazia(fila))
        fila->inicio = novo;
    else
        (fila->final)->prox = novo;
    fila->final = novo;
    fila->quant_element++;
    return 1;
}

t_elemento remover (t_fila *fila)
{
    t_no *aux;
    t_elemento valor = { "" } ;
    if (isVazia(fila))
        return valor; // Erro: fila vazia 
    valor = (fila->inicio)->dado;
    if (fila->inicio == fila->final)
        fila->final = NULL;
    aux = fila->inicio;
    fila->inicio = (fila->inicio)->prox;
    free(aux);
    fila->quant_element--;
    return valor;
}
t_elemento esvaziar(t_fila * fila){
	int i;
	t_no *aux;
	t_elemento valor = { "" } ;
	while(isVazia(fila)){
		valor = remover(fila);
	}
	return valor;

int main(void) {
  t_fila Filona;
  t_elemento dado;
  t_no nozinho;
  int i;

//criando cabeça de fila
  Filona = *criaCabeca();
  nozinho = *criaNo();
//verifica se a fila está vazia
if (isVazia(&Filona)) {
  printf("A fila está vazia\n");
} 
//adicionando nomes na fila
for(i = 0; i < 10; i++){
		printf("\nInsira um nome para adicionar a lista: ");
		scanf("%s", dado.nome);
		inserir(&Filona, dado);
} 
//removendo elementos da fila
printf("Que elemento deseja remover da fila?");
scanf("%s", dado.nome);
remover(&Filona);
//exibir fila
for(i = 0;i >= Filona.quant_element;i++){
		printf("\n%s", Filona.inicio->prox);
	}
  //esvaziando fila
esvaziar(&Filona);
} 
