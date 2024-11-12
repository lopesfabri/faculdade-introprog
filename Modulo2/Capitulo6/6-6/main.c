// Programa 6-6 Versão removendo a função Menu do Programa 6-5

#include <stdio.h>

int main()
{
    int opcao;
    do
    {
        printf("\nMenu:\n1 - opcao A\n2 - opcao B\n3 - opcao C\n0 sair");
        printf("\nOpcao:");
        scanf("%d", &opcao);

        if(opcao==1)
            printf("Opcao escolhida A");
        else if(opcao==2)
            printf("Opcao escolhida B");
        else if(opcao==3)
            printf("Opcao escolhida C");
        else if(opcao!=0)
            printf("Opcao invalida");
    } while(opcao>0);
    printf("Fim do programa.");
}