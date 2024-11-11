// Programa 5-3 Determina se um ano é normal ou bissexto utilizando funções

#include <stdio.h>

int Bissexto(int ano)
{
    return ano%4==0 && ano%100!=0 || ano%400==0;
}

int main()
{
    int ano;
    printf("Indique ano:");
    scanf("%d", &ano);

    if(Bissexto(ano))
        printf("Bissexto");
    else
        printf("Normal");
}
