/*
 * Outra soluação recursiva para o problema de ordenar o vetor v[0..n-1]
 *
 *
 *
*/
#include <stdio.h>

/* Ao receber v, i e n tais que i < n e devolve o elemento máximo de v[i..n-1] */
int maxR(int v[], int i, int n) {
  if (i == n - 1) return v[i];
  else {
    int x;
    x = maxR(v, i + 1, n);
    if (x > v[i]) return x;
    else return v[i];
  }
}


/* Ao receber v e n >= 1 esta função devolve o elemento máximo de v[0..n-1] */
int max(int v[], int n) {
  return maxR(v, 0, n);
}

int main(void) {
  int v[] = {45, 2, 100};
  printf("O elemento máximo do vetor é: %d\n", max(v, 3));
  return 0;
}
