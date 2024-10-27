#include <stdio.h>

int main()
{
    int n, i, produto;

    printf("Calculo do produto dos primeiros N numeros.\nIndique N:");
    scanf("%d", & n);

    produto = 1;
    i = 1;
    while(i<=n)
    {
        produto*=i;
        printf("  Factorial (%d) = %d\n", i, produto);
        i++;
    }
    printf("Resultado: %d\n", produto);
}
