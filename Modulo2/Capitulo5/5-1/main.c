// Programa 5-1 Escolha de opções num menu

#include <stdio.h>

int main()
{
    int opcao;
    printf("\nMenu\n1 - opcao A\n2 - opcao B\n3 - opcao C\n0 - sair:");
    printf("\nOpcao: ");
    scanf("%d", &opcao);

    while(opcao>0)
    {
        if(opcao==1)
            printf("Opcao escolhida A");
        else if(opcao==2)
            printf("Opcao escolhida B");
        else if(opcao==3)
            printf("Opcao escolhida C");
        else
            printf("Opcao invalida");

        printf("\nMenu\n1 - opcao A\n2 - opcao B\n3 - opcao C\n0 - sair:");
        printf("\nOpcao: ");
        scanf("%d", &opcao);
    }
    printf("Fim do programa.");
}