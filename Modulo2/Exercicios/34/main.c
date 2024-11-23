#include <stdio.h>
#include <string.h>

#define MAXSTR 255

void strinv(char *str)
{
    int inicio = 0;
    int fim = strlen(str) - 1;

    while(inicio < fim)
    {
        char temp = str[inicio];
        str[inicio] = str[fim];
        str[fim] = temp;
        inicio++;
        fim--;
    }
}

int main()
{
    char str[MAXSTR];
    fgets(str,MAXSTR,stdin);
    str[strlen(str)-1]=0;
    strinv(str);
    printf("%s", str);
}