#include <stdio.h>
#include <math.h>

unsigned int randaux() {
    static long seed = 1;
    seed = seed * 214013L + 2531011L; // Atualiza a seed
    return (unsigned int)((seed >> 16) & 0x7fff); // Retorna o valor pseudoaleatório
}

int main() {
    int N;

    // Entrada do número de elementos do vetor
    printf("Digite um numero: ");
    scanf("%d", &N);

    if (N < 10 || N > 1000) {
        printf("Erro: O numero deve estar entre 10 e 1000.\n");
        return 1;
    }

    float vetor[N];

    // Inicialização do vetor com valores da distribuição exponencial
    for (int i = 0; i < N; i++) {
        // Garantir valores uniformes no intervalo (0, 1], sem incluir 0
        float u = (randaux() % 10000 + 1) / 10000.0f; // Valores entre 0.0001 e 1.0000
        vetor[i] = -log(u); // Transformação exponencial negativa
    }

    // Encontrar o maior valor no vetor
    float max = vetor[0];
    for (int i = 1; i < N; i++) {
        if (vetor[i] > max) {
            max = vetor[i];
        }
    }

    // Exibir os 10 primeiros valores do vetor
    printf("Os 10 primeiros valores do vetor:\n");
    for (int i = 0; i < 10 && i < N; i++) {
        printf("%.2f ", vetor[i]);
    }
    printf("\n");

    // Exibir o maior valor do vetor
    printf("Maior valor do vetor: %.2f\n", max);

    return 0;
}
