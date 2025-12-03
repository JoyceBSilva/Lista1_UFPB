#include <stdio.h>

int main() {
    int valor, maior = -1000000, posicao = 0;

    for (int i = 1; i <= 10; i++) {
        scanf("%d", &valor);

        if (valor > maior) {
            maior = valor;
            posicao = i;
        }
    }

    printf("Maior: %d\nPosicao: %d\n", maior, posicao);

    return 0;
}
