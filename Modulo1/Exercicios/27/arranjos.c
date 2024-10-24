// 27 Calculo dos arranjos de N, R a R: multiplicar os números de N-R+1 até N.

#include <stdio.h>

int main() {
    int N, R, i, resultado;

    printf("Calculo dos arranjos de N, R a R:\n");
    printf("Indique N:");
    scanf("%d", &N);
    printf("Indique R:");
    scanf("%d", &R);

    // Validação de entrada
    if (N <= R || R <= 0) {
        printf("Erro: N tem de ser maior que R e este maior que 0.\n");
        return 1; // Encerra o programa se houver erro
    }

    resultado = 1;
    i = N - R + 1;

    // Cálculo dos arranjos
    while ( i <= N) {
        resultado *= i; // Multiplicação progressiva
        printf("  i = %d; arranjos = %d\n", i, resultado);
        i++;
    }
    printf("Resultado: %d\n", resultado);
}
