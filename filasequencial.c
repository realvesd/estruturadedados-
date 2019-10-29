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
