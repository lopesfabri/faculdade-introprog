#include <stdio.h>

// Função para ordenar o vetor usando o algoritmo de seleção (Selection Sort)
void Sort(int arr[], int size) {
    int i, j, min_idx, temp;
    for (i = 0; i < size - 1; i++) {
        min_idx = i;
        for (j = i + 1; j < size; j++) {
            if (arr[j] < arr[min_idx]) {
                min_idx = j;
            }
        }
        // Troca os valores
        temp = arr[min_idx];
        arr[min_idx] = arr[i];
        arr[i] = temp;
    }
}

// Função para remover elementos duplicados de um vetor ordenado
int RemoveDups(int arr[], int size) {
    if (size == 0) return 0;

    int j = 0; // Índice para armazenar elementos únicos

    for (int i = 1; i < size; i++) {
        if (arr[i] != arr[j]) {
            j++;
            arr[j] = arr[i];
        }
    }

    return j + 1; // Retorna o novo tamanho do vetor
}

// Função randaux para gerar números pseudo-aleatórios
unsigned int randaux()
{
  static long seed = 1;
  return (((seed = seed * 214013L + 2531011L) >> 16) & 0x7fff);
}

int main()
{
    int v[1000], i, n;

    scanf("%d", &n);
    n++;

    // Gera 1000 números aleatórios e os armazena no vetor v
    for (i = 0; i < 1000; i++) {
        v[i] = randaux() % n;
    }

    // Imprime os 10 primeiros números antes da ordenação
    printf("10 primeiros antes de ordenar:\n");
    for (i = 0; i < 10; i++) {
        printf("%d ", v[i]);
    }
    printf("\n");

    // Ordena o vetor
    Sort(v, 1000);

    // Remove duplicados
    int new_size = RemoveDups(v, 1000);

    // Imprime os 10 primeiros números após a ordenação e remoção de duplicados
    printf("10 primeiros após ordenar e remover duplicados:\n");
    for (i = 0; i < 10 && i < new_size; i++) {
        printf("%d ", v[i]);
    }
    printf("\n");

    return 0;
}
