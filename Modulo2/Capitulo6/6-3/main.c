// Programa 6-3 Utilização alternativa do cilo "for" na soma dos 4 quadrados naturais

#include <stdio.h>

int main()
{
    int soma, i;
    for(i=1, soma=0; i<=4; i++)
        soma+= i*i;
    printf("Soma dos primeiros 4 quadrados: %d", soma);
}