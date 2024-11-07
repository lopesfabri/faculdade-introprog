#include <stdio.h>

int main() {
    double montante;

    printf("Introduza um montante em euros, podendo ter centimos:");
    scanf("%lf", &montante);

    // Arredondamento para o valor inteiro mais próximo de centavos
    int centavos = (int)(montante * 100 + 0.5); // Cast para converter tipo e arredondando para o valor mais proximo

    for (int i = 0; i < 8; i++) {
        int moeda, moedas;

        switch (i) {

            case 0: moeda = 200; break;
            case 1: moeda = 100; break;
            case 2: moeda = 50; break;
            case 3: moeda = 20; break;
            case 4: moeda = 10; break;
            case 5: moeda = 5; break;
            case 6: moeda = 2; break;
            case 7: moeda = 1; break;
        }

        moedas = centavos / moeda;
        centavos %= moeda;

        if (moedas > 0) {
            if (moeda >= 100) {
                printf("%d euro%s: %d\n", moeda / 100, (moeda == 100 ? "" : "s"), moedas);
            } else {
                printf("%d centimo%s: %d\n", moeda, (moeda == 1 ? "" : "s"), moedas);
            }
        }
    }
}
