#include <stdio.h>

void torre(int casas){    //cria a função torre
  if(casas > 0){          //condição para executar
    printf("Torre para direita.\n");  //imprime movimento
    torre(casas - 1);     //código para criar e sair do loop
  }
}

void bispo(int casas){  //cria função bispo
  if(casas > 0){        //condição para executar
      for (int i = 1; i < 3; i++)  //loop externo q repete 2 vezes
      {
        printf("Bisco para cima,"); //imprime o movimento
        while (i > 0) //loop interno, executado somente 1 vez
        {
          printf(" direita.\n");  //imprimo o movimento na mesma linha
          break;      //para o loop interno
        }
      }
    bispo(casas - 1); //código para criar e sair do loop (função)
  }
}

void rainha(casas){ //cria a funçãi rainha
  if(casas > 0){    //condição para executar
    printf("Rainha para esquerda.\n"); //imprime movimento
    rainha(casas - 1);  //código para criar e sair do loop
  }
}

int main(){
  int casas;
  //Apresentação do jogo
  printf("Bem vindo ao jogo de Xadrez!\n");
  printf("Neste jogo você pode escolher mover apenas 3 peças: Torre, Bispo e Rainha.\n");
  printf("A Torre se move horizontal ou vertical.\n");
  printf("O Bispo: na diagonal.\n");
  printf("A Rainha: qualquer direção.\n");
  printf("O Cavalo: em L.\n\n");

  //Pede ao usuário quantas casas deve se deslocar
  printf("A Torre irá se deslocar para direita, digite quantas casas: ");
  scanf("%d", &casas);
  torre(casas);   // chama a função torre
  

  //Pede ao usuário quantas casas deve se deslocar
  printf("Agora o Bispo irá se deslocar para cima e direita, digite quantas casas: ");
  scanf("%d", &casas);
  if(casas % 2 != 0) printf("Bispo para cima, direita.\n"); //caso casas for impar, vai imprimi 1 vez para n haver erro
  casas = casas / 2;    //Subtrai metade da quantidade para q haja necessidade de loop dentro da função
  bispo(casas); //chama a função bispo
  
  //Pede ao usuário quantas casas deve se deslocar
  printf("A Rainha irá se deslocar para esquerda, digite quantas casas: ");
  scanf("%d", &casas);
  rainha(casas);  //chama a função rainha
  

  //Indica que o cavalo irá se mover
  printf("O Cavalo irá se deslocar para baixo e esquerda.\n");

  //Imprime o movimento do cavalo
  for(int i = 1; i < 2 && i > 0; i++){ //loop externo
    while (i < 3)   //loop interno
    {
      printf("Cavalo para cima.\n");
      i++;
    }
    printf("Cavalo para direita.\n");
  }
  
  return 0;
}
