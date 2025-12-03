#include <stdio.h>

int main() {
    int a, b, c;
    int x, y, z;

    scanf("%d %d %d", &a, &b, &c);

    x = a;
    y = b;
    z = c;

    if (a > b) { int t = a; a = b; b = t; }
    if (b > c) { int t = b; b = c; c = t; }
    if (a > b) { int t = a; a = b; b = t; }

    printf("Ordem crescente:\n");
    printf("%d\n%d\n%d\n", a, b, c);

    printf("\n");

    printf("Ordem original:\n");
    printf("%d\n%d\n%d\n", x, y, z);

    return 0;
}
