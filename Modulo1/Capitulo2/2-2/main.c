/*
 * Programa 2-2 - Troca o valor de duas variáveis, sem variável auxiliar.
 */

#include <stdio.h>

int main()
{
    int x=3, y=7;

    x=x+y;
    y=x-y;
    x=x-y;

    printf("x: %d, y: %d", x, y);
}