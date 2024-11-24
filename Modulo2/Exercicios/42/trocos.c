#include <stdio.h>

void calcular_troco(double montante) {
    // Vetores para armazenar os valores das moedas e seus respectivos textos
    int valores_moedas[] = {200, 100, 50, 20, 10, 5, 2, 1};
    char *textos_moedas[] = {
        "2 euros", "1 euro", 
        "50 centimos", "20 centimos", 
        "10 centimos", "5 centimos", 
        "2 centimos", "1 centimo"
    };

    // Arredondamento para centavos
    int centavos = (int)(montante * 100 + 0.5);

    for (int i = 0; i < 8; i++) {
        int moeda = valores_moedas[i];
        int quantidade = centavos / moeda;
        centavos %= moeda;

        if (quantidade > 0) {
            printf("%s: %d\n", textos_moedas[i], quantidade);
        }
    }
}

int main() {
    double montante;
    scanf("%lf", &montante);

    calcular_troco(montante);

    return 0;
}
