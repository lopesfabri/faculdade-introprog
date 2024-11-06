// Calcular o numero de Euler e, atraves da utilizacao da serie de Taylor.

#include <stdio.h>

int main() {
    int K, i;
    double soma = 1.0, fatorial = 1.0;

    scanf("%d", &K);

    for (i = 1; i <= K; i++) {
        fatorial *= i;
        soma += 1.0 / fatorial;
    }

    printf("Resultado: %.16g\n", soma);
}
