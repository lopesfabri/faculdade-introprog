// Programa 10-4 Concatena as strings introduzidas, utilizando apenas a memória necessária

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAXSTR 255

char *Concatenar(char *str, char *str2)
{
    char *pt;
    /* duplicar str2 se str é nulo*/
    if (str==NULL)
    {
        pt=(char *)malloc(strlen(str2)+1);
        if (pt!=NULL)
            strcpy(pt,str2);
    } else {
        pt=(char *)malloc(strlen(str)+strlen(str2)+1);
        if (pt!=NULL)
        {
            strcpy(pt,str);
            strcat(pt,str2);
            free(str);
        }
    }
    return pt;
}

int main()
{
    char *texto=NULL, str[MAXSTR];
    do {
        gets(str);
        texto=Concatenar(texto,str);
    } while (strlen(str)>0);
    printf("%s",texto);
    free(texto);
}