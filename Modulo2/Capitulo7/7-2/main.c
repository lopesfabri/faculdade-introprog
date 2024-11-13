// Programa 7-2 Calculo do total e média, versão com vectores

#include <stdio.h>

int main()
{
    int diasDaSemana[7];
    int total = 0, i;

    printf("Segunda: ");
    scanf("%d", &diasDaSemana[0]);
    printf("Terca: ");
    scanf("%d", &diasDaSemana[1]);
    printf("Quarta: ");
    scanf("%d", &diasDaSemana[2]);
    printf("Quinta: ");
    scanf("%d", &diasDaSemana[3]);
    printf("Sexta: ");
    scanf("%d", &diasDaSemana[4]);
    printf("Sabado: ");
    scanf("%d", &diasDaSemana[5]);
    printf("Domingo: ");
    scanf("%d", &diasDaSemana[6]);

    for(i=0; i<=7; i++)
        total += diasDaSemana[i];
    printf("Soma: %d\n", total);
    printf("Media: %d\n", total/7.0);
}