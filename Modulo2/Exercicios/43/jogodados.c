#include <stdio.h>

unsigned int randaux() {
    static long seed = 1;
    return (((seed = seed * 214013L + 2531011L) >> 16) & 0x7fff);
}

int main() {
    int num_jogos, num_lancamentos;

    scanf("%d", &num_jogos);
    scanf("%d", &num_lancamentos);

    int total_pontos = 0;

    for (int jogo = 1; jogo <= num_jogos; jogo++) {
        int pontos = 0, anterior = 0;
        int negativo = 0;

        printf(" ");

        for (int lancamento = 0; lancamento < num_lancamentos; lancamento++) {
            int dado = (randaux() % 6) + 1; 
            printf("%d ", dado);

            if (lancamento > 0 && dado == anterior) {
                negativo = 1; 
                pontos += dado; 
                break;
            }

            pontos += dado; 
            anterior = dado; 
        }

        if (negativo) {
            pontos = -pontos; 
        }

        total_pontos += pontos;
        printf("Pontos: %d\n", pontos);
    }

    printf("%d\n", total_pontos);

    return 0;
}
