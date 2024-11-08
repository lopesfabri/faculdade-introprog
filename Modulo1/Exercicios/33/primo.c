#include <stdio.h>

int main() {
    int divisor, n;

    printf("Funcao que verifica se um numero N e' primo:\nIndique N: ");
    scanf("%d", &n);

    if (n < 1) {
        printf("Erro: o numero tem de ser maior que zero.\n");
    } else {
        int primo = 1;  // Assume inicialmente que o número é primo

        // Loop para verificar divisores de 2 até que divisor * divisor seja maior que n
        divisor = 2;
        while (divisor * divisor <= n) {
            // Verifica se o divisor atual divide n
            if (n % divisor == 0) {
                printf("%d\n", divisor); // Imprime o menor divisor encontrado
                primo = 0; // Marca como não primo
                break; // Sai do loop após encontrar o divisor
            }
            divisor++;
        }

        // Se primo == 1, então nenhum divisor foi encontrado e n é primo
        if (primo) {
            printf("0\n");
        }
    }

    return 0;
}