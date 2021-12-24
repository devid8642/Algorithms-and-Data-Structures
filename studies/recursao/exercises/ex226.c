/*
 * O exercicio quer um programa para testar a função maximo, e uma outra função para conferir a resposta da função maximo.
 */

#include <stdio.h>

int maximoR(int v[], int n) {
  if (n == 1)
    return v[0];
  else {
    int x;
    x = maximoR(v, n - 1);
    if (x > v[n-1])
      return x;
    else
      return v[n-1];
  }
}

int maximo(int v[], int n) {
  int x = v[0];
  for (int i = 1; i < n; i++)
    if (v[i] > x)
      x = v[i];
  return x;
}

int main(void) {
  int nums[3];
  printf("Digite três números inteiros:\n");
  scanf("%d %d %d", &nums[0], &nums[1], &nums[2]);
  printf("O resultado da função máximo foi: %d\n", maximoR(nums, 3));
  printf("O resultado da função iterativa foi: %d\n", maximo(nums, 3));
  return 0;
}
