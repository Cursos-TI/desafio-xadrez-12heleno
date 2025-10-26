#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
int torre, rainha = 1 , bispo = 1;
// move a torre 5 casas para direita
       printf("Digite o valor do movimento da torre: ");
       scanf("%d\n", &torre);
       printf("Torre 5 casas a direita\n", torre);
      
       for (int i = 0; i < torre; i++) {
           printf("Direita\n"); // Direção do Movimento Torre
       }
//--------------------------------------------------------------------------
       printf("Rainha 8 casas a esquerda\n");
      
       do {


           printf("Esquerda\n", rainha);
           rainha++;


       } while (rainha <= 8);
//--------------------------------------------------------------------------
       printf("Bispo 5 casas a frente e direita\n");
          


       while (bispo <= 5)
       {
           printf("Bispo a frente e direita\n", bispo);
           bispo++;


       }


    return 0;
}
