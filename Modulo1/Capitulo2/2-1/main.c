/*
 * Programa 2-1 Troca o valor de duas variáveis, utilizando uma terceira auxiliar.
 */

#include <stdio.h>

int main() {
    int x=3;
    int y=7;
    int aux;

    aux=x;
    x=y;
    y=aux;

    printf("x: %d, y: %d", x, y);
}
