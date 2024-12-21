// Programa  10-2 Réplica do Programa 9-1

#include <stdio.h>

int FactorialR(int n)
{
    if (n<2)
        return 1;
    return FactorialR(n-1)*n;
}

int FactorialI(int n)
{
    int i, resultado=1;
    for (i=2; i<=n; i++)
        resultado*=i;
    return resultado;
}

int main()
{
    int n=1000;
    printf("Factorial de %d: %d = %d", n, FactorialR(n), FactorialI(n));
}