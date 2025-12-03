#include <stdio.h>

int main() {
    double distancia;

    scanf("%lf", &distancia);

    double tempo_horas = distancia / 150.0;
    double tempo_minutos = tempo_horas * 60.0;

    printf("%.2lf minutos\n", tempo_minutos);

    return 0;
}
