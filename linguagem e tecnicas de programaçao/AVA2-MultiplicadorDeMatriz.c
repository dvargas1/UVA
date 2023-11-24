#include <stdio.h>

int main() {
    // Declarando a matriz de 3x3
    int matriz[3][3];

    // Populando a matriz com os valores digitados pelo usuário
    printf("Digite os elementos da matriz 3x3:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Matriz[%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    // Imprimindo a matriz criada pelo usuário
    printf("\nMatriz criada pelo usuário:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }

    // Multiplicando cada elemento por cinco
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            matriz[i][j] *= 5;
        }
    }

    // Imprimindo o resultado
    printf("\nMatriz resultante (cada elemento multiplicado por cinco):\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}