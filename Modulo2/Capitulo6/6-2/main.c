// Programa 6-2 Soma dos primeiros 4 quadrados naturais com o ciclo "for".

#include <stdio.h>

int main()
{
    int soma=0, i;
    for(i=1; i<=4; i++)
        soma+= i*i;

    printf("Soma dos primeiros 4 quadrados: %d", soma);
}