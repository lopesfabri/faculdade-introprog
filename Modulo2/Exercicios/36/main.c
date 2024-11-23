#include <stdio.h>

// Função auxiliar para gerar números pseudoaleatórios
unsigned int randaux() {
    static long seed = 1;
    return (((seed = seed * 214013L + 2531011L) >> 16) & 0x7fff);
}

// Função para encontrar um elemento no vetor
int findElement(int v[], int size, int element) {
    for (int i = 0; i < size; i++) {
        if (v[i] == element) {  
            return i;  
        }
    }
    return -1; // Retorna -1 se o elemento não estiver no vetor
}

int main() {
    int v[1000], i, n;

    printf("Digite o maior numero aleatorio permitido (N): \n");
    scanf("%d", &n);
    n++;  

    for (i = 0; i < 1000; i++) {
        v[i] = randaux() % n;
    }

    printf("\nOs 10 primeiros elementos do vetor (0 a %d) sao:\n", n - 1);
    for (i = 0; i < 10; i++) {
        printf("%d ", v[i]);
    }
    printf("\n");  

    // Busca o número 2 no vetor
    int posicao = findElement(v, 1000, 2);

    printf("\nResultado da busca:\n");
    if (posicao == -1) {
    printf("-1\n");  
    } else {
    printf("%d\n", posicao);
    }

    return 0;
}
