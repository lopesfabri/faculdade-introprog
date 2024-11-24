#include <stdio.h>
#include <string.h>
#define BUFFER 100

unsigned int randaux() {
    static long seed = 1;
    return (((seed = seed * 214013L + 2531011L) >> 16) & 0x7fff);
}

void MostraLamberta(char tabuleiro[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        unsigned int num = randaux();  
        if (num % 2 == 0) {
            tabuleiro[i] = 'O';  
        } else {
            tabuleiro[i] = 'X';  
        }
    }
    
    tabuleiro[tamanho] = '\0';
    
    printf("%s\n", tabuleiro);
}

int main() {
    int tamanho, saltos;
    
    scanf("%d %d", &tamanho, &saltos);
    
    char tabuleiro[BUFFER];
    
    for (int i = 0; i < saltos; i++) {
        randaux();  
    }
    
    MostraLamberta(tabuleiro, tamanho);
    
    return 0;
}
