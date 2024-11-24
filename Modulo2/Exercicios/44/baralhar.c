#include <stdio.h>

unsigned int randaux() {
    static long seed = 1;
    return (((seed = seed * 214013L + 2531011L) >> 16) & 0x7fff);
}

void baralhar(int v[], int n) {
    int i, j, temp;
    for (i = 0; i < n; i++) {
        j = randaux() % (n - i) + i;
        
        temp = v[i];
        v[i] = v[j];
        v[j] = temp;
    }
}

int main() {
    int n, i;
    
    scanf("%d", &n);
    
    if (n < 10 || n > 1000) {
        return 1;
    }
    
    int v[n];
    for (i = 0; i < n; i++) {
        v[i] = i;
    }
    
    baralhar(v, n);

    for (i = 0; i < 10 && i < n; i++) {
        printf("%d ", v[i]);
    }
    printf("\n");
    
    return 0;
}