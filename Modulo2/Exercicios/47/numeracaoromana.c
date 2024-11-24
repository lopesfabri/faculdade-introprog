#include <stdio.h>
#include <string.h>

void arabico_para_romano(int arabico, char *romano) {
    int valores_romanos[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    char *simbolos_romanos[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
    
    romano[0] = '\0';
    
    for (int i = 0; i < 13; i++) {
        while (arabico >= valores_romanos[i]) {
            strcat(romano, simbolos_romanos[i]);
            arabico -= valores_romanos[i];
        }
    }
}

int romano_para_arabico(const char *romano) {
    int valores_romanos[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    char *simbolos_romanos[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
    
    int arabico = 0;
    int i = 0;
    int j;
    
    while (romano[i] != '\0') {
        for (j = 0; j < 13; j++) {
            int len = strlen(simbolos_romanos[j]);
            if (strncmp(&romano[i], simbolos_romanos[j], len) == 0) {
                arabico += valores_romanos[j];
                i += len;
                break;
            }
        }
    }
    
    return arabico;
}

int main() {
    int numero_arabico;
    char numero_romano[20];

    scanf("%d", &numero_arabico);
    
    char romano[20] = "";
    arabico_para_romano(numero_arabico, romano);
    printf("%s\n", romano);

    scanf("%s", numero_romano);
    
    int arabe = romano_para_arabico(numero_romano);
    printf("%d\n", arabe);
    
    return 0;
}
