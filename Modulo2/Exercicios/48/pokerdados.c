#include <stdio.h>
#include <stdlib.h>

unsigned int randaux()
{
    static long seed = 1;
    return(((seed = seed * 214013L + 2531011L) >> 16) & 0x7fff);
}

const char* poker5dados(int dados[5])
{
    int i, j;
    int contagem[6] = {0};  

    for (i = 0; i < 5; i++) {
        contagem[dados[i] - 1]++;
    }

    int pares = 0, trios = 0, quadrados = 0;
    
    for (i = 0; i < 6; i++) {
        if (contagem[i] == 2) pares++;
        if (contagem[i] == 3) trios++;
        if (contagem[i] == 4) quadrados++;
        if (contagem[i] == 5) return "poker real"; 
    }

    for (i = 0; i < 2; i++) {
        int sequencia_valida = 1;
        for (j = 0; j < 5; j++) {
            if (contagem[(i + j) % 6] == 0) {
                sequencia_valida = 0;
                break;
            }
        }
        if (sequencia_valida) return "sequência";
    }

    if (quadrados == 1) return "poker quadruplo"; 
    if (trios == 1 && pares == 1) return "fullen";  
    if (trios == 1) return "trio"; 
    if (pares == 2) return "duplo par";  
    if (pares == 1) return "par";  

    return "nada";  
}

int main() {
    int N, i;
    int dados[5];

    scanf("%d", &N);
    for (i = 0; i < N; i++) {
        randaux(); 
    }
    
    for (i = 0; i < 5; i++) {
        dados[i] = 1 + randaux() % 6; 
        printf("%d ", dados[i]);
    }

    printf("(%s)", poker5dados(dados));
    
    return 0;
}