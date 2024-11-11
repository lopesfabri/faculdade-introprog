// Programa 5-2 Escolha de opções num menu, utilizando uma função

#include <stdio.h>

int Menu()
{
    int opcao;
    printf("\nMenu:\n1 - opcao escolhida A\n2 - opcao escolhida B\n3 - opcao escolhida C\n0 - sair");
    printf("\nOpcao: ");
    scanf("%d", &opcao);
    return opcao;
}

int main()
{
    int opcao;
    opcao=Menu();

    while(opcao>0)
    {
        if(opcao==1)
            printf("Opcao esolhida A");
        else if(opcao==2)
            printf("Opcao escolhida B");
        else if(opcao==3)
            printf("Opcao escolhida C");
        else
            printf("Opcao invalida!");

        opcao=Menu();
    }
    printf("Fim do programa.");
}
