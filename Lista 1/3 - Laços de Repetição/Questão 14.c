#include <stdio.h>

int main() {
    int m, n;

    while (1) {
        scanf("%d %d", &m, &n);

        if (m <= 0 || n <= 0)
            break;

        int inicio = m < n ? m : n;
        int fim = m > n ? m : n;
        int soma = 0;

        for (int i = inicio; i <= fim; i++) {
            printf("%d ", i);
            soma += i;
        }

        printf("Sum=%d\n", soma);
    }

    return 0;
}
