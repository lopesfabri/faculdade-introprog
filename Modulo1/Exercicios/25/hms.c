// 25 - Calcule o número de segundos que passaram desde o início do dia.

#include <stdio.h>

int main() {
    int horas, minutos, segundos, total_segundos;
    printf("Calculo do numero de segundos desde o inicio do dia.\nHora:");
    scanf("%d", & horas);
    printf("Minuto:");
    scanf("%d", & minutos);
    printf("Segundos:");
    scanf("%d", & segundos);

    total_segundos = (horas * 3600) + (minutos * 60) + segundos;

    printf("Numero de segundos desde o inicio do dia: %d", total_segundos);
}
