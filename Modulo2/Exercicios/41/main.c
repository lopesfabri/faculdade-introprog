#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char input[256];  // Buffer para armazenar a string de entrada
    char *pt;         // Ponteiro para o strtok
    double soma = 0.0; // Variável para armazenar a soma

    // Solicita ao usuário a entrada de números reais
    printf("Digite os numeros separados por espacos: \n");
    fgets(input, sizeof(input), stdin); // Lê a linha de entrada

    // Usando strtok para separar os números na string
    pt = strtok(input, " ");
    while (pt != NULL) {
        soma += atof(pt); // Converte a string para número real e adiciona à soma
        pt = strtok(NULL, " "); // Avança para o próximo número
    }

    // Exibe o resultado da soma em notação científica com precisão 15
    printf("%.15g\n", soma);

    return 0;
}
