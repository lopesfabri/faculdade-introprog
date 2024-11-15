// Programa 8-1 Tentativa de implementação de uma função para trocar o valor de duas variáveis

#include <stdio.h>

int Troca(int x, int y)
{
    int aux=x;
    x=y;
    y=aux;
}

int main()
{
    int x=123, y=321;
    Troca(x,y);
    printf("x: %d y: %d",x,y);
}