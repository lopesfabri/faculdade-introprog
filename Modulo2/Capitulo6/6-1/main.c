// Programa 6-1 Réplica do Programa 4-2

#include <stdio.h>

int main()
{
    int soma=0, i=1;
    while(i<=4) {
        soma+= i*i;
        i++;
    }
    printf("Soma dos primeiros 4 quadrados: %d", soma);
}