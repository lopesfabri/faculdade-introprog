// 4-3 Imprime o código numérico correspondente a cada letra.

#include <stdio.h>

int main() {
    char c='a';

    while(c<='z')
    {
        printf("\nLetra: %c = %d", c, c);
        c++;
    }
}
