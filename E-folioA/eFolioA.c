#include <stdio.h>
#include <stdlib.h>

void iniciarJogo();
void verificarSequenciaValida(int soma, int produto, int K);
int verificarSequenciaVitoria(int sequencia[], int i, int K);

int main()
{
    iniciarJogo();
    return 0;
}

void iniciarJogo()
{
    int K, sequencia[100], i, soma = 0, produto = 1;

    printf("Indique K: ");
    scanf("%d", &K);

    if (K < 2 || K > 100)
    {
        printf("K tem de ser entre 2 e 100.\n");
        return;
    }

    printf("Indique uma sequencia de numeros inteiros positivos, terminando com 0: ");
    for (i = 0; i < 100; i++)
    {
        scanf("%d", &sequencia[i]);
        if (sequencia[i] == 0)
            break;
    }

    if (verificarSequenciaVitoria(sequencia, i, K)) {
        printf("Sequencia vitoria\n");
        return;
    }

    for (int j = 0; j < i; j++)
    {
        soma += sequencia[j];
        produto *= sequencia[j];
    }

    verificarSequenciaValida(soma, produto, K);
}

void verificarSequenciaValida(int soma, int produto, int K)
{
    if (soma <= K && produto >= K)
    {
        printf("Sequencia valida.\n");
    }
    else
    {
        printf("Sequencia invalida.\n");
    }
}

int verificarSequenciaVitoria(int sequencia[], int i, int K)
{
    int somaDiferencas = 0;

    for (int a = 0; a < i; a++)
    {
        for (int b = a + 1; b < i; b++)
        {
            somaDiferencas += abs(sequencia[a] - sequencia[b]);
        }
    }

    return somaDiferencas == K;
}
