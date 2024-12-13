#include <stdio.h>
#include <math.h>

#define MAXVECTOR 10

int main()
{
    float valor[MAXVECTOR];
    float media=0, variancia=0;
    int n, i;

    printf("Quantos valores tem o vector: ");
    scanf("%d", &n);
    if(n<=0 || n>MAXVECTOR)
    {
        printf("Programa compilado para permitir no maximo %d elementos.\n", MAXVECTOR);
        return 0;
    }

    /* introdução de valores */
    for(i=0; i<n; i++)
    {
        printf("Valores [%d]: ", i);
        scanf("%f", &valor[i]);
    }

    /* cálculos */
    for(i=0; i<n; i++)
        media+=valor[i];
        media/=n;
        for(i=0; i<n; i++)
            variancia+=(media-valor[i])*(media-valor[i]);
            variancia/=n;

    printf("Media: %g\n", media);
    printf("Desvio padrao: %g\n", sqrt(variancia));
}