// Programa 6-7 Versão com "switch" do Programa 6-6

#include <stdio.h>

int main()
{
    int opcao;
    do {
        printf("\nMenu:\n1 - opcao A\n2 - opcao B\n3 - opcao C\n0 - sair");
        printf("\nOpcao:");
        scanf("%d", &opcao);

        switch(opcao)
        {
            case 1:
                printf("Opcao escolhida A");
            break;
            case 2:
                printf("Opcao escolhida B");
            break;
            case 3:
                printf("Opcao escolhida C");
            break;
            case 0:
                break;
            default:
                printf("Opcao invalida");
        }
    } while(opcao>0);
    printf("Fim do programa.");
}