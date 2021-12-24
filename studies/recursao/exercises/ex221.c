/*
 * Resolução do exercício 2.2.1: "Escreva uma versão iterativa da função maximo.".
 */
#include <stdio.h>

/*
 * A função recebe um vetor v[0..n-1] e devolve um elemento máximo de v.
 */
int maximo(int v[], int n) {
  int x = v[0];
  for (int i = 1; i < n; i++)
    if (v[i] > x)
      x = v[i];
  return x;
}

int main(void) {
  int nums[] = {1, 2, 3};
  int n = 3;

  printf("%d\n", maximo(nums, n));

  return 0;
}
