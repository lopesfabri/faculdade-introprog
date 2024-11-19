// 35 Gerar 10 números pseudo-aleatórios, entre 0 e o valor máximo, de acordo com a seguinte fórmula: x(n+1)=mod(a*x(n)+b,m),

#include <stdio.h>

#define RAND_A 231533
#define RAND_B 82571
#define RAND_M 428573

int main()
{
    unsigned int seed, N;

    scanf("%u", &seed);
    scanf("%u", &N);

    unsigned int current = seed;
    unsigned int next, random_number;

    for (int i = 0; i < 10; i++) {
        next = (RAND_A * current + RAND_B) % RAND_M; // Calcula o próximo valor pseudo-aleatório

        // Gera números no intervalo [0, N]
        random_number = next % (N + 1); // até N

        printf("%u ", random_number);

        // Atualiza o valor de current para o próximo valor
        current = next;
    }
    printf("\n");
}
