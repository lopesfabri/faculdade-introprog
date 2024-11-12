// Programa 6-5 Versão com ciclos "do-while" do Programa 5-2

#include <stdio.h>

int Menu()
{
    int opcao;
    printf("\nMenu\n1 - opcao A\n2 - opcao B\n3 - opcao C\n0 - sair");
    printf("\nOpcao:");
    scanf("%d", &opcao);
    return opcao;
}

int main()
{
    int opcao;
    do {
        opcao=Menu();
        if(opcao==1)
            printf("Opcao escolhida A");
        else if(opcao==2)
            printf("Opcao escolhida B");
        else if(opcao==3)
            printf("Opcao escolhida C");
        else if (opcao!=0)
            printf("Opcao invalida");
    } while(opcao>0);
    printf("Fim do programa.");
}