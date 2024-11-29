#include <stdio.h>

void iniciarJogo();

int main()
{
    iniciarJogo();
    return 0;
}

void iniciarJogo()
{
    int K, sequenciaInicial[2];

    printf("Indique K: ");
    scanf("%d", &K);

    if (K < 2 || K > 100)
    {
        printf("K tem de ser entre 2 e 100.");
        return;
    }
    sequenciaInicial[0] = K / 2;
    sequenciaInicial[1] = K / 2;
    printf("Sequencia: %d %d\n", sequenciaInicial[0], sequenciaInicial[1]);

}