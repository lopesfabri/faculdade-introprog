#include <stdio.h>
#include <math.h>

// Função para calcular o fatorial de um número (n!).
double fatorial(int n) {
    double resultado = 1.0;
    for (int i = 2; i <= n; i++) {
        resultado *= i;
    }
    return resultado;
}

int main() {
    int k = 0, numeroDeIteracoes;
    double valorPi = 2.0 * sqrt(2.0) / 9801.0, somaDosTermos = 0.0, termoSerie;

    printf("Insira o numero de iteracoes: ");
    scanf("%d", &numeroDeIteracoes);

    // Loop para calcular os termos da série até o número de iterações fornecido.
    while (k <= numeroDeIteracoes) {
        termoSerie = 1103 + 26390 * k;  // Calcula o numerador para cada k.

        double fatorial4k = fatorial(4 * k);  // Fatorial de (4 * k).
        double fatorialK = fatorial(k);  // Fatorial de k.

        termoSerie *= fatorial4k;  // Multiplica o numerador pelo fatorial de (4 * k).
        termoSerie /= pow(fatorialK, 4);  // Divide pelo fatorial de k elevado a 4.
        termoSerie /= pow(396, 4 * k);  // Divide pelo fator (396^(4 * k)).

        somaDosTermos += termoSerie;  // Adiciona o termo à soma total.

        k++;
    }

    valorPi *= somaDosTermos;  // Multiplica o valor de PI pela soma dos termos.
    valorPi = 1.0 / valorPi;  // Inverte o valor de PI.

    printf("%.16f\n", valorPi);

    return 0;
}
