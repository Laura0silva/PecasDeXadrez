#include <stdio.h>

int main(){
  int casas, i = 1;
  //Apresentação do jogo
  printf("Bem vindo ao jogo de Xadrez!\n");
  printf("Neste jogo você pode escolher mover apenas 3 peças: Torre, Bispo e Rainha.\n");
  printf("A Torre se move horizontal ou vertical.\n");
  printf("O Bispo: na diagonal.\n");
  printf("E a Rainha: qualquer direção.\n\n");

  //Pede ao usuário quantas casas deve se deslocar
  printf("A Torre irá se deslocar para direita, digite quantas casas: ");
  scanf("%d", &casas);
  //Imprime o movimento de acordo com a solicitação do usuário
  for(int i = 1; i <= casas; i++){
    printf("Torre para direita.\n");
  }

  //Pede ao usuário quantas casas deve se deslocar
  printf("Agora o Bispo irá se deslocar para cima e direita, digite quantas casas: ");
  scanf("%d", &casas);
  //Imprime o movimento de acordo com a solicitação do usuário
  while(i <= casas){
    printf("Bisco para cima, direita.\n");
    i++;
  }

  i = 1; //Reinicia o i para o próximo loop
  //Pede ao usuário quantas casas deve se deslocar
  printf("A Rainha irá se deslocar para esquerda, digite quantas casas: ");
  scanf("%d", &casas);
  //Imprime o movimento de acordo com a solicitação do usuário
  do
  {
    printf("Rainha para esquerda.\n");
    i++;
  } while (i <= casas);
  
  return 0;
}
