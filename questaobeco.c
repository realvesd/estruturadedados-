#include	<stdio.h>
#include	<string.h>

#define	MAX 8

typedef struct str1{
	// t_elemento
	char	placa[10];
} t_elemento;

typedef struct str2 {
	// vetor de t_elemento de tamanho 8
	t_elemento	carros[8];
	// int topo	
	int			topo;
} t_pilha;

/**
 * Cria uma nova pilha, aloca a sua regiao de memoria,
 * inicializa o topo, e retorna a pilha criada.
 * 
 * @return Pilha inicializada
 */
t_pilha criar() {
    t_pilha pilha;

    pilha.topo = -1;

    return pilha;
}

/**
 * Verifica se a pilha esta cheia ou nao.
 * 
 * @param pilha ponteiro para a pilha, a pilha ja deve ter sido inicializada
 *
 * @return Verdadeiro (1) se a pilha estiver cheia, ou falso (0) caso contrario.
 */
int isCheia(t_pilha * pilha) {
    return (pilha->topo == MAX-1);
}

int isVazia(t_pilha * pilha) {
    return (pilha->topo == -1);
}

t_elemento pop(t_pilha * pilha)
{
    t_elemento vazio = { "" };

    if (isVazia(pilha))
        return vazio; // erro
    else
        return pilha->carros[pilha->topo--];
}
/**
 * Inserir um novo elemento no topo da pilha (empilhar)
 * 
 * @param pilha ponteiro para a pilha, a pilha ja deve ter sido inicializada
 * @param dado  elemento a ser inserido na pilha
 *
 * @return Falso(0) se a posiÁ„o for invalida ou se a pilha estiver cheia, caso contrario, retorna Verdadeiro(1)
 */
int push(t_pilha *pilha, t_elemento valor)
{
    if (isCheia(pilha))
        return 0; // erro

    pilha->carros[++pilha->topo] = valor;

    return 1; // sucesso
}


void entraCarros(t_pilha * pilha)
{
	t_elemento	pl;
	int			i;
	// entrada dos tres carros
	for (i = 0; i < 5; i++)
	{
		// pega a placa
		printf("Digite a placa do carro\n");
		scanf("%s", pl.placa);
		push (pilha, pl);
		fflush(stdin);
	}	
}

  void saemCarros(t_pilha * pilha)
{
  int topo = 2;
  int i;
  t_elemento dado;

	while (topo != -1)
	{

		dado = pop(pilha);
    printf("Placa do carro que saiu: %s\n", dado.placa);
    topo--;
		
	}	
}

int main()
{
	t_pilha		beco;
  t_elemento plaquinha;
  int topo;
  int i;

  beco = criar();
	// cria pilha
	entraCarros(&beco);
	
	// mostra o topo da pilha
	printf("TOPO = %s\n", beco.carros[beco.topo].placa);
	
	saemCarros(&beco);
	
  printf("Ficaram %d carros no beco\n", beco.topo +1);
}
