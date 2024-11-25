#include <stdio.h>
#include <string.h>

#define MAX 1000 

// Função para substituir todas as ocorrências de A por B na string base
void substituir(char *base, const char *A, const char *B) 
{
    char resultado[MAX] = ""; // String para armazenar o resultado
    char *posicao;            // Ponteiro para localizar A em base
    int lenA = strlen(A);     // Comprimento da string A
    int lenB = strlen(B);     // Comprimento da string B
    int indiceAtual = 0;      // Índice para percorrer a string base

    // Enquanto encontrar a string A na base
    while ((posicao = strstr(base + indiceAtual, A)) != NULL) 
    {
        // Copia o texto antes da ocorrência de A
        strncat(resultado, base + indiceAtual, posicao - (base + indiceAtual));

        // Adiciona a string B no lugar de A
        strcat(resultado, B);

        // Atualiza o índice atual para o final da ocorrência de A
        indiceAtual = (posicao - base) + lenA;
    }

    // Copia o restante da string base para o resultado
    strcat(resultado, base + indiceAtual);

    // Atualiza a string base com o resultado
    strcpy(base, resultado);
}

int main() {
    char base[MAX];
    char A[100], B[100];

    printf("texto a transformar troco o \"o\" por \"os\"\n");

    // Entrada de dados
    fgets(base, MAX, stdin);
    base[strcspn(base, "\n")] = '\0'; // Remove o caractere de nova linha

    fgets(A, 100, stdin);
    A[strcspn(A, "\n")] = '\0'; // Remove o caractere de nova linha

    fgets(B, 100, stdin);
    B[strcspn(B, "\n")] = '\0'; // Remove o caractere de nova linha

    // Chama a função para realizar a substituição
    substituir(base, A, B);

    // Saída do resultado
    printf("%s\n", base);

    return 0;
}
