// Programa 8-6 Procura a primeira ocorrência de uma string em outra (strstr)

#include <stdio.h>
#include <string.h>

char *strstr1(char *find, char *str)
{
    int i;
    /* percorrer toda a string str */
    while(*str!=0)
    {
        /* tentar fazer match a começar em str */
        for(i=0; str[i]!=0 && find[i]!=0 && find[i]==str[i]; i++);
        /* se chegou ao fim da string de procura, então há match */
        if(find[i]==0)
            /* retornar o início do match */
                return str;
        /* incrementar o início da string */
        str++;
    }

    return NULL;
}

int main()
{
    char str[]="percorrer toda a string str";
    char find[10];
    char *resultado;

    printf("Introduza a string de procura:");
    fgets(find,10,stdin);
    find[strlen(find)-1]=0; /* remoção do caracter da mudança de linha */
    resultado=strstr1(find,str);
    printf("Resultado: %s\n", resultado);
}