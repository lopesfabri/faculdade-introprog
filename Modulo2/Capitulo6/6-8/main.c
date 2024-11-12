//Programa 6-8 Função DiaDoMes com "switch" do Programa 5-4

#include <stdio.h>

int DiaDoMes(int mes, int ano)
{
    switch(mes)
    {
        case 2:
            if(Bissexto(ano))
                return 29;
            else
                return 28;
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            return 31;
        default:
            return 30;
    }
}