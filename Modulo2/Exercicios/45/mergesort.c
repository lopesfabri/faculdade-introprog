#include <stdio.h>

#define MAXVECTOR 1000000

unsigned int randaux()
{
  static long seed=1;
  return(((seed = seed * 214013L + 2531011L) >> 16) & 0x7fff);
}

// Função para realizar a fusão das duas metades ordenadas
void merge(int v[], int left, int middle, int right) {
    int i, j, k;
    int n1 = middle - left + 1;
    int n2 = right - middle;
    
    // Criar os vetores temporários
    int L[n1], R[n2];
    
    // Copiar os dados para os vetores temporários L[] e R[]
    for (i = 0; i < n1; i++)
        L[i] = v[left + i];
    for (j = 0; j < n2; j++)
        R[j] = v[middle + 1 + j];
    
    // Mesclar os vetores temporários de volta no vetor original
    i = 0; // Inicializa o índice para o vetor L
    j = 0; // Inicializa o índice para o vetor R
    k = left; // Inicializa o índice para o vetor original
    
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            v[k] = L[i];
            i++;
        } else {
            v[k] = R[j];
            j++;
        }
        k++;
    }
    
    // Copiar os elementos restantes de L[], se houver algum
    while (i < n1) {
        v[k] = L[i];
        i++;
        k++;
    }
    
    // Copiar os elementos restantes de R[], se houver algum
    while (j < n2) {
        v[k] = R[j];
        j++;
        k++;
    }
}

// Função recursiva para realizar o merge sort
void mergeSort(int v[], int left, int right) {
    if (left < right) {
        // Encontrar o ponto médio
        int middle = left + (right - left) / 2;
        
        // Ordenar as duas metades
        mergeSort(v, left, middle);
        mergeSort(v, middle + 1, right);
        
        // Mesclar as duas metades ordenadas
        merge(v, left, middle, right);
    }
}

int main() {
    int i, n;
    // Vetor estático para evitar usar memória no stack
    static int v[MAXVECTOR];
    
    // Ler o valor máximo de n para os números aleatórios
    scanf("%d", &n);
    n++;
    
    // Preencher o vetor com números aleatórios
    for (i = 0; i < MAXVECTOR; i++)
        v[i] = randaux() % n;
    
    // Ordenar o vetor usando merge sort
    mergeSort(v, 0, MAXVECTOR - 1);
    
    // Imprimir os quartis
    printf("%d %d %d", v[MAXVECTOR / 4], v[MAXVECTOR / 2], v[3 * MAXVECTOR / 4]);
    
    return 0;
}
