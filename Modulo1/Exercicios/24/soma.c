#include <stdio.h>

int main()
{
    int n, i, soma;

    printf("Calculo da soma dos primeiros N numeros.\nIndique N:");
    scanf("%d", & n);

    soma = 0;
    i=1;
    while(i<=n)
    {
        soma+=i;
        printf("  \nadicionar %d, parcial %d", i, soma);
        i++;
    }
    printf("\nTotal: %d\n", soma);
}