#include <stdio.h>

int main() {
    int n;

    printf("Escreva um numero para decompor em somas de tres parcelas.\nNumero:");
    scanf("%d", &n);

    int digito = 0;
    // Percorre os valores de a e b
    for (int a = n - 1; a >= 1; a--) {
        for (int b = a; b >= 1; b--) {
            int c = n - a - b; // Calcula o valor de c
            if (c >= 1 && c <= b) { // Verifica se a condição a >= b >= c é atendida
                printf(" %d+%d+%d\n", a, b, c); // Imprime a combinação válida
                digito++; // Conta a combinação válida
            }
        }
    }

    printf("Numero de somas: %d\n", digito);

    return 0;
}
