#include <stdio.h>

int main() {

  int n1, n2;

  printf("Digite o primeiro número: ");
  scanf("%d", &n1);

  printf("Digite o segundo número: ");
  scanf("%d", &n2);

  int soma = n1 + n2;
  int subtracao = n1 - n2;
  int multiplicacao = n1 * n2;
  float divisao = (float)n1 / n2;

  printf("Soma: %d\n", soma);
  printf("Subtração: %d\n", subtracao);
  printf("Multiplicação: %d\n", multiplicacao);
  printf("Divisão: %.2f\n", divisao);

  return 0;
}
