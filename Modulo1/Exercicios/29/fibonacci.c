#include <stdio.h>

int main() {
    int N, n1, n2, i, resultado;

    printf("Calculo do valor da funcao Fibonacci:\nIndique N:");
    scanf("%d", &N);

    if (N == 1 || N == 2) {
        printf("Resultado: %d\n", N);
    } else {
        n1 = 1;
        n2 = 2;
        i = 3;
        while (i <= N) {
            resultado = n1 + n2;
            n1 = n2;
            n2 = resultado;
            printf("  Fib(%d) = %d\n", i, resultado);
            i++;
        }
        printf("Resultado: %d\n", resultado);
    }
}
