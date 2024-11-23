#include <stdio.h>

// Função recursiva para calcular o MDC
int mdc(int x, int y) 
{
    if (y == 0) {
        return x;
    } else {
        return mdc(y, x % y);
    }
}

int main() 
{
    int x, y;
    scanf("%d %d", &x, &y);
    
    printf("%d\n", mdc(x, y));
    
    return 0;
}