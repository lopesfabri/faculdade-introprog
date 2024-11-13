// Programa 7-1 Calculo do total e média de um indicador por cada dia da semana

#include <stdio.h>

int main()
{
    int segunda, terca, quarta, quinta, sexta, sabado, domingo;
    int total;

    printf("Segunda: ");
    scanf("%d", &segunda);
    printf("Terca: ");
    scanf("%d", &terca);
    printf("Quarta: ");
    scanf("%d", &quarta);
    printf("Quinta: ");
    scanf("%d", &quinta);
    printf("Sexta: ");
    scanf("%d", &sexta);
    printf("Sabado: ");
    scanf("%d", &sabado);
    printf("Domingo: ");
    scanf("%d", &domingo);

    total = segunda + terca + quarta + quinta + sexta + sabado + domingo;
    printf("Soma: %d\n", total);
    printf("Media: %f\n", total/7.0);
}