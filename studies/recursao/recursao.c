/*
 * Algoritmos recursivos são muito comuns na computação. Eles tem a seguinte propriedade: cada instância do problema contém uma instância menor do mesmo problema. Uma instância é um exemplo do problema, um recorte. Algoritmos com estrura recursiva podem ser implementados da seguinte forma: Se a instância do problema é pequena resolve-a diretamente, se não reduz-se a instância a uma insância menor aplica-lhe o metódo e volta-se a instância original.
 *
 * Para elucidar melhor considere o exemplo de encontrar um número máximo no vetor v[0..n-1], com n >= 1. Se n = 1 então o elemento máximo é v[0] senão então o elemento máximo é o elemento máximo entre v[0..n-2] e v[n-1]. 
 *
 */

/*
 * A função recebe um vetor de inteiros v[0..n-1] e devolve um máximo elemento desse vetor.
*/
#include <stdio.h>

int maximo(int v[], int n) {
  if (n == 1)
    return v[0];
  else {
    int x = maximo(v, n-1);
    if (x > v[n-1])
      return x;
    else
      return v[n-1];
  }
}

int main (void) {
  int nums[] = {1, 2, 3};
  printf("%d\n", maximo(nums, 3));
  return 0;
}
