#include <stdio.h>
#include <math.h>

/*
 *
 * Resolução do exercício 1.2.4
 *
 * O exercício define o pixo de um número x qualquer como sendo o inteiro i tal que 
 * i <= x < i + 1. Logo em seguide pede-se que se escreva uma função lg que recebe um inteiro positivo
 * n e calcule o pixo de log n (na base 2).
 *
 */ 

int lg(int n);

int main(void) {

  printf("%d\n", lg(16));

  return 0;
}

/*
 * A função recebe um inteiro n e devolve o piso de log n (base 2)
 */
int lg(int n) {
  float x = log2(n);
  int i;
  /* i é sempre menor ou igual a x */
  for (i = 1; i <= x; i++)
    continue;
  return i-1;
}
