#include <stdio.h>

unsigned int randaux() 
{
    static long seed = 1;
    return (((seed = seed * 214013L + 2531011L) >> 16) & 0x7fff);
}

// Função para imprimir os primeiros n números de um vetor
void PrintInts(int *v, int n, const char *suffix) {
    for (int i = 0; i < n; i++) {
        printf("%d ", v[i]);
    }
    printf("%s", suffix);
}

// Função genérica para ordenar o vetor `array` de tamanho `size`
void Sort(int *v, int size) {
    int swapped;
    do {
        swapped = 0;
        for (int i = 0; i < size - 1; i++) {
            if (v[i] > v[i + 1]) {
                int temp = v[i];
                v[i] = v[i + 1];
                v[i + 1] = temp;
                swapped = 1; // Marca que houve troca
            }
        }
    } while (swapped); 
}


int main() {
    int v[1000], i, n;

    scanf("%d", &n);
    n++;

    // Preenche o vetor com valores aleatórios no intervalo [0, max_random_value - 1]
    for (i = 0; i < 1000; i++) {
        v[i] = randaux() % n;
    }

    PrintInts(v, 10, "\n");

    Sort(v, 1000);

    PrintInts(v, 10, "\n");
}
