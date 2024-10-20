// Programa 3-1 Determina se o número é par ou ímpar

#include <stdio.h>

int main()
{
    int numero;
    printf("Insira um numero: ");
    scanf("%d", &numero);

    if(numero%2==0)
        printf("Par");
    else
        printf("Impar");
}