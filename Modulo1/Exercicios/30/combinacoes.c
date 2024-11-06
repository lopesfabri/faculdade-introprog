#include <stdio.h>

int main()
{
    int N, R, i, divisor, resultado;

    printf("Calculo das combinacoes de N, R a R:\n");
    printf("Indique N:");
    scanf("%d", &N);
    printf("Indique R:");
    scanf("%d", &R);

    resultado = 1;
    divisor = 1;
    for (i = N - R + 1; i <= N; i++) {
        // Mostra a multiplicação parcial
        printf("%d*%d=", resultado, i);
        resultado *= i;  // Multiplica o resultado pelo valor atual de i
        printf("%d, ", resultado);

        // Mostra a divisão parcial
        printf("%d/%d=", resultado, divisor);
        resultado /= divisor; // Divide pelo divisor atual
        printf("%d\n", resultado);

        divisor++;  // Incrementa o divisor para o próximo valor
    }

    printf("Resultado: %d\n", resultado);
}
