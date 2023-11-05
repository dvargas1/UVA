#include <stdio.h>
#define TRUE 1
#define FALSE 0

int verificarSePar(int n) {
  if (n % 2 == 0)
		return TRUE;
  return FALSE;
}

int main() {
  int n1, n2;
  int contadorPares;
  printf("Digite o primeiro número: ");
  scanf("%d", &n1);

  printf("Digite o segundo número: ");
  scanf("%d", &n2);

  for (; n1 <= n2; n1++) {
    if (verificarSePar(n1)) {
      printf("Esse número é par: %d \n ", n1);
      contadorPares++;
    } else {
      printf("Esse número é ímpar: %d \n ", n1);
    }
  }

  printf("Quantidade de total pares encontrados: %d\n", contadorPares);
}