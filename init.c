#include "header.h"

char* inicializar(char* tabuleiro) {
  int i;

  srand(time(NULL));
  int c = rand() % 100 + 1;
  printf("Hello, World! c = %i\n", c);
  tabuleiro = (char*)calloc(9, sizeof(char));
  for(i = 0; i < 9; i++) {
    tabuleiro[i] = '?';
  }
  return tabuleiro;
}
