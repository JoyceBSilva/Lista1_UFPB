#include <stdio.h>

int main() {
    int horaInicio, minutoInicio, horaFim, minutoFim;
    int inicioTotal, fimTotal, duracao, horas, minutos;

    scanf("%d %d %d %d", &horaInicio, &minutoInicio, &horaFim, &minutoFim);

    inicioTotal = horaInicio * 60 + minutoInicio;
    fimTotal = horaFim * 60 + minutoFim;

    if (fimTotal <= inicioTotal) {
        fimTotal += 24 * 60;
    }

    duracao = fimTotal - inicioTotal;

    horas = duracao / 60;
    minutos = duracao % 60;

    printf("%d hora(s) e %d minuto(s)\n", horas, minutos);

    return 0;
}
