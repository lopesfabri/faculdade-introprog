// 33 - Faça um programa que indique o número de argumentos recebidos na linha de comando.

#include <stdio.h>

int strlen1(char str[])
{
    int i;
    for(i=0; str[i]!=0; i++);
    return i;
}

int main()
{
    char str[10];
    fgets(str,10,stdin);
    printf("%d", strlen1(str));
}