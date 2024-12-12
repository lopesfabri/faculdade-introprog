#include <stdio.h>
#include <stdlib.h>

void iniciarJogo();
void mostrarSequencia(int sequencia[], int tamanho, int jogadorAtual, int final);
void realizarJogada(int sequencia[], int *tamanho, int *jogadorAtual, int *vezInsercao, int entradaUsuario, int *numJogadas);
int verificarSequenciaVitoria(int sequencia[], int tamanho, int entradaUsuario);
int verificarSequenciaValida(int sequencia[], int tamanho, int entradaUsuario);
void alternarJogador(int *jogadorAtual);
void removerElemento(int sequencia[], int *tamanho, int indice);
void inserirElemento(int sequencia[], int *tamanho, int indice, int valor);
void manipularVezEJogador(int *vezInsercao, int *jogadorAtual, int incrementarVez);

int main()
{
    iniciarJogo();
    return 0;
}

void iniciarJogo()
{
    int entradaUsuario, sequencia[100], tamanho = 0, jogadorAtual = 1;
    int vezInsercao = 0;
    int numJogadas = 0;

    printf("Indique K: ");
    scanf("%d", &entradaUsuario);

    if (entradaUsuario < 2 || entradaUsuario > 100)
    {
        printf("K tem de ser entre %d e %d.\n", 2, 100);
        return;
    }

    sequencia[tamanho++] = entradaUsuario / 2;
    sequencia[tamanho++] = entradaUsuario / 2;

    while (1)
    {
        mostrarSequencia(sequencia, tamanho, jogadorAtual, 0);

        realizarJogada(sequencia, &tamanho, &jogadorAtual, &vezInsercao, entradaUsuario, &numJogadas);

        if (!verificarSequenciaValida(sequencia, tamanho, entradaUsuario))
        {
            mostrarSequencia(sequencia, tamanho, jogadorAtual, 1);
            if (jogadorAtual == 1)
            {
                printf("Jogador A perdeu.\n");
            }
            else
            {
                printf("Jogador B perdeu.\n");
            }
            break;
        }

        if (verificarSequenciaVitoria(sequencia, tamanho, entradaUsuario))
        {
            mostrarSequencia(sequencia, tamanho, jogadorAtual, 1);
            if (jogadorAtual == 1)
            {
                printf("Jogador A ganhou.\n");
            }
            else
            {
                printf("Jogador B ganhou.\n");
            }
            break;
        }

        if (numJogadas == entradaUsuario)
        {
            mostrarSequencia(sequencia, tamanho, jogadorAtual, 1);
            printf("Empate.\n");
            break;
        }
    }
}

void mostrarSequencia(int sequencia[], int tamanho, int jogadorAtual, int final)
{
    printf("Sequencia: ");
    for (int i = 0; i < tamanho; i++)
    {
        printf("%d ", sequencia[i]);
    }
    if (!final)
    {
        if (jogadorAtual == 1)
        {
            printf("[Joga A]\n");
        }
        else
        {
            printf("[Joga B]\n");
        }
    }
    else
    {
        printf("\n");
    }
}

void realizarJogada(int sequencia[], int *tamanho, int *jogadorAtual, int *vezInsercao, int entradaUsuario, int *numJogadas)
{
    int indice, valor;
    printf("Jogada (indice valor): ");
    scanf("%d %d", &indice, &valor);

    if (indice >= *tamanho)
    {
        sequencia[*tamanho] = valor;
        (*tamanho)++;
        manipularVezEJogador(vezInsercao, jogadorAtual, 0);
    }
    else if (valor == 0)
    {
        removerElemento(sequencia, tamanho, indice);
        manipularVezEJogador(vezInsercao, jogadorAtual, 1);
    }
    else if (valor < 0)
    {
        valor = abs(valor);
        inserirElemento(sequencia, tamanho, indice, valor);
        if (*vezInsercao < 1)
        {
            (*vezInsercao)++;
        }
        else
        {
            *vezInsercao = 0;
        }
    }
    else
    {
        sequencia[indice] = valor;
        manipularVezEJogador(vezInsercao, jogadorAtual, 0);
    }

    (*numJogadas)++;
}

void manipularVezEJogador(int *vezInsercao, int *jogadorAtual, int incrementarVez)
{
    if (incrementarVez)
    {
        if (*vezInsercao < 1)
        {
            (*vezInsercao)++;
        }
        else
        {
            *vezInsercao = 0;
            alternarJogador(jogadorAtual);
        }
    }
    else
    {
        *vezInsercao = 0;
        alternarJogador(jogadorAtual);
    }
}

void removerElemento(int sequencia[], int *tamanho, int indice)
{
    for (int i = indice; i < *tamanho - 1; i++)
    {
        sequencia[i] = sequencia[i + 1];
    }
    (*tamanho)--;
}

void inserirElemento(int sequencia[], int *tamanho, int indice, int valor)
{
    for (int i = *tamanho; i > indice; i--)
    {
        sequencia[i] = sequencia[i - 1];
    }
    sequencia[indice] = valor;
    (*tamanho)++;
}

void alternarJogador(int *jogadorAtual)
{
    if (*jogadorAtual == 1)
    {
        *jogadorAtual = 2;
    }
    else
    {
        *jogadorAtual = 1;
    }
}

int verificarSequenciaVitoria(int sequencia[], int tamanho, int entradaUsuario)
{
    int somaDiferencas = 0;
    for (int a = 0; a < tamanho; a++)
    {
        for (int b = a + 1; b < tamanho; b++)
        {
            somaDiferencas += abs(sequencia[a] - sequencia[b]);
        }
    }

    return somaDiferencas == entradaUsuario;
}

int verificarSequenciaValida(int sequencia[], int tamanho, int entradaUsuario)
{
    int soma = 0, produto = 1;

    for (int i = 0; i < tamanho; i++)
    {
        soma += sequencia[i];
        produto *= sequencia[i];
    }

    if (soma <= entradaUsuario && produto >= entradaUsuario)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
