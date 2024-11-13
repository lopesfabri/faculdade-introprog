// Programa 7-5 Função DiasDoMes com um vector inicializado na declaração

#include <stdio.h>

int DiasDoMes(int mes, int ano)
{
    int diasDoMes[] =
    {
        31,28,31,30,31,30, /* Janeiro a Junho */
        31,31,30,31,30,31 /* Julho a Dezembro */
    };

    if(mes==2 && Bissexto(ano))
        return 29;
    return diasDoMes[mes-1];
}