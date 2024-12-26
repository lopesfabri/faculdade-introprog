// Programa 11-4 Versão do registo de pessoas, mais legível e eficiente

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAXSTR 255

typedef struct
{
    int ano, mes , dia;
} TData;

typedef struct
{
    char *nome;
    char sexo;
    TData nascimento;
    char *morada;
    char *email;
    long telefone;
} TPessoa;

void LerPessoa(TPessoa *pessoa)
{
    char str[MAXSTR];
    printf("Nome: ");
    gets(str);
    pessoa->nome=(char*)malloc(strlen(str)+1);
    strcpy(pessoa->nome,str);
    printf("Sexo: ");
    scanf("%c", &pessoa->sexo);
    printf("Data de nascimento (dd-mm-aaaa): ");
    scanf("%d-%d-%d",
        &pessoa->nascimento.dia,
        &pessoa->nascimento.mes,
        &pessoa->nascimento.ano);
    printf("Morada: ");
    gets(str);
    gets(str);
    pessoa->morada=(char*)malloc(strlen(str)+1);
    strcpy(pessoa->morada,str);
    printf("Email: ");
    gets(str);
    pessoa->email=(char*)malloc(strlen(str)+1);
    strcpy(pessoa->email,str);
    printf("Telefone: ");
    scanf("%ld", &pessoa->telefone);
}

void MostraPessoa(TPessoa *pessoa)
{
    printf("\nNome: %s\nSexo: %c\nData de Nascimento: %d-%d-%d\n",
        pessoa->nome, pessoa->sexo,
        pessoa->nascimento.dia,
        pessoa->nascimento.mes,
        pessoa->nascimento.ano);
    printf("Morada: %s\nEmail: %s\nTelefone: %ld\n",
        pessoa->morada,
        pessoa->email,
        pessoa->telefone);
}

void Libertar(TPessoa *pessoa)
{
    free(pessoa->nome);
    free(pessoa->morada);
    free(pessoa->email);
}

int main()
{
    TPessoa pessoa;
    LerPessoa(&pessoa);
    MostraPessoa(&pessoa);
}