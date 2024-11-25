#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define MAX 16

int totalSolutions = 0; // Contador de soluções
int firstSolution[MAX]; // Armazena a primeira solução encontrada

// Função para verificar se a posição atual é segura
bool isSafe(int board[], int row, int col) 
{
    for (int i = 0; i < row; i++) {
        // Verifica ataques na mesma coluna ou na diagonal
        if (board[i] == col || abs(board[i] - col) == abs(i - row)) 
        {
            return false;
        }
    }
    return true;
}

// Função recursiva para resolver o problema das N-damas
void solveNQueens(int board[], int row, int n, bool *foundFirst) 
{
    if (row == n) { // Caso base: todas as damas foram colocadas
        totalSolutions++;
        if (!(*foundFirst)) { // Salvar a primeira solução encontrada
            for (int i = 0; i < n; i++)
            {
                firstSolution[i] = board[i];
            }
            *foundFirst = true;
        }
        return;
    }

    // Tenta colocar uma dama em cada coluna da linha atual
    for (int col = 0; col < n; col++) 
    {
        if (isSafe(board, row, col)) 
        {
            board[row] = col;
            solveNQueens(board, row + 1, n, foundFirst);
        }
    }
}

// Função para imprimir o tabuleiro
void printBoard(int board[], int n) 
{
    printf("+");
    for (int i = 0; i < n * 3 - 1; i++) printf("-");
    printf("+\n");

    for (int i = 0; i < n; i++) 
    {
        printf("|");
        for (int j = 0; j < n; j++) 
        {
            if (board[i] == j) 
            {
                printf(" # ");
            } else {
                printf(" . ");
            }
        }
        printf("|\n");
    }

    printf("+");
    for (int i = 0; i < n * 3 - 1; i++) printf("-");
    printf("+\n");
}

int main() 
{
    int n;
    scanf("%d", &n);

    if (n < 4 || n > 16) 
    {
        printf("Número inválido. O número deve estar entre 4 e 16.\n");
        return 1;
    }

    int board[MAX] = {0}; // Tabuleiro representado por um vetor
    bool foundFirst = false;

    solveNQueens(board, 0, n, &foundFirst);

    if (foundFirst) 
    {
        printBoard(firstSolution, n); // Mostra a primeira solução encontrada
    }
    printf("Total: %d\n", totalSolutions); // Mostra o número total de soluções

    return 0;
}