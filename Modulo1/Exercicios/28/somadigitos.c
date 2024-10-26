// 28 Calcule a soma dos quadrados dos dígitos de um número introduzido pelo utilizador.

#include <stdio.h>

int main()
{
    int n, soma, digito, n_inicial;

    printf("Calculo da soma do quadrado dos digitos de um numero:\nNumero: ");
    scanf("%d", &n);

    n_inicial = n;
    soma=0;
    while(n > 0)
    {
        digito = n % 10;
        soma += digito * digito;
        n = n / 10;
        printf("n=%d; soma=%d\n", n_inicial, soma);
        n_inicial /= 10;
    }
    printf("Resultado: %d\n ", soma);
}

