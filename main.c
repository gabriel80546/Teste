#include "header.h"

int main() {
  int i;
  char* tabuleiro;
  tabuleiro = inicializar(tabuleiro);
  tabuleiro[4] = 'O';
  mostrarTabuleiro(tabuleiro);
  return 0;
}
