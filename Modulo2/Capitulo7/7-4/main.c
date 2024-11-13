// Programa 7-4 Calcular o tamanho de uma string

#include <stdio.h>

int strlen(char str[])
{
    int i;
    for(i=0; str[i]!=0; i++);
    return i;
}

int main()
{
    char str[10];
    printf("Introduza uma string: ");
    gets(str);
    printf("A string %s, tem %d caracteres.", str, strlen(str));
}