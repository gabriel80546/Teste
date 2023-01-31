#include "header.h"

int main() {
  int i, c, h;
  char* tabuleiro;
  tabuleiro = inicializar(tabuleiro);
  for(i = 0; i < 4; i++) {
    c = rand() % 9 + 0;
    printf("computador = %i\n", c);
    printf("Onde você quer jogar? R: ");
    scanf("%d", &h);
    tabuleiro[c] = 'O';
    tabuleiro[h] = 'X';
    mostrarTabuleiro(tabuleiro);
  }
  return 0;
}
