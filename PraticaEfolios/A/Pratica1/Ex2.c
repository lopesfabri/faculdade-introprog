#include <stdio.h>

unsigned int randaux() {
    static long seed = 1;
    seed = seed * 214013L + 2531011L;
    return (seed >> 16) & 0x7fff;
}

void Baralhar(char *v[], int n) {
    int i, j;
    char *aux;
    for (i = 0; i < n - 1; i++) {
        j = i + randaux() % (n - i);
        aux = v[i];
        v[i] = v[j];
        v[j] = aux;
    }
}

void ExibirTabela(char *baralho[]) {
    printf("\t[1]\t[2]\t[3]\t[4]\t[5]\t[6]\t[7]\t[8]\n");

    for (int linha = 0; linha < 8; linha++) {
        printf("[%d]\t", linha + 1);
        for (int coluna = 0; coluna < 8; coluna++) {
            int index = coluna * 8 + linha;
            printf("%s\t", baralho[index]);
        }
        printf("\n");
    }
}

int main() {
    char *baralho[] = {
        "+1A", "+1B", "+1C", "+1D", "+2A", "+2B", "+2C", "+2D", "+3A", "+3B", "+3C", "+3D", "+4A", "+4B", "+4C", "+4D",
        "-1A", "-1B", "-1C", "-1D", "-2A", "-2B", "-2C", "-2D", "-3A", "-3B", "-3C", "-3D", "-4A", "-4B", "-4C", "-4D",
        "*1A", "*1B", "*1C", "*1D", "*2A", "*2B", "*2C", "*2D", "*3A", "*3B", "*3C", "*3D", "*4A", "*4B", "*4C", "*4D",
        "/1A", "/1B", "/1C", "/1D", "/2A", "/2B", "/2C", "/2D", "/3A", "/3B", "/3C", "/3D", "/4A", "/4B", "/4C", "/4D"
    };

    int desperdicio;

    printf("Digite um numero: ");
    scanf("%d", &desperdicio);

    for (int i = 0; i < desperdicio; i++) {
        randaux();
    }

    Baralhar(baralho, 64);

    printf("\n");
    ExibirTabela(baralho);

    return 0;
}
