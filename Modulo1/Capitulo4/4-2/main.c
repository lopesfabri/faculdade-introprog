// 4-2 Soma dos primeiros 4 quadrados naturais utilizando um ciclo.

#include <stdio.h>

int main() {

    int soma=0, i=1;

    while(i<=4) {
        soma+=i*i;
        i++;
    }

    printf("Soma dos primeiros 4 quadrados: %d", soma);
}
