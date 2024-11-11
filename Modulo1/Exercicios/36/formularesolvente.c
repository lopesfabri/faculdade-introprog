#include <stdio.h>
#include <math.h>

int raizes_inteiras(int a, int b, int c) {
    double delta = b * b - 4 * a * c;
    if (delta < 0) return 0;

    double sqrt_delta = sqrt(delta);
    if (sqrt_delta != (int)sqrt_delta) return 0;

    double x1 = (-b + sqrt_delta) / (2.0 * a);
    double x2 = (-b - sqrt_delta) / (2.0 * a);

    return (x1 == (int)x1) && (x2 == (int)x2);
}

int main() {
    int a, b, c;
    int K;

    // Leitura dos coeficientes a, b, c
    if (scanf("%d %d %d", &a, &b, &c) != 3) {
        printf("Entrada invalida.\n");
        return 1;
    }

    // Leitura do valor de K
    if (scanf("%d", &K) != 1 || K <= 0) {
        printf("Valor de K invalido.\n");
        return 1;
    }

    // Loop para encontrar os coeficientes com raízes inteiras
    for (int i = -K; i <= K; i++) {
        if (i == 0) continue;
        for (int j = -K; j <= K; j++) {
            if (j == 0) continue;
            for (int k = -K; k <= K; k++) {
                if (k == 0) continue;
                if (raizes_inteiras(i, j, k)) {
                    printf("%d %d %d\n", i, j, k);
                }
            }
        }
    }

    return 0;
}
