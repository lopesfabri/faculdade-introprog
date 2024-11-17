#include <stdio.h>

int main() {
    char *baralho[] =
   {
        "+1A", "+1B", "+1C", "+1D", "+2A", "+2B", "+2C", "+2D", "+3A", "+3B", "+3C", "+3D", "+4A", "+4B", "+4C", "+4D",
        "-1A", "-1B", "-1C", "-1D", "-2A", "-2B", "-2C", "-2D", "-3A", "-3B", "-3C", "-3D", "-4A", "-4B", "-4C", "-4D",
        "*1A", "*1B", "*1C", "*1D", "*2A", "*2B", "*2C", "*2D", "*3A", "*3B", "*3C", "*3D", "*4A", "*4B", "*4C", "*4D",
        "/1A", "/1B", "/1C", "/1D", "/2A", "/2B", "/2C", "/2D", "/3A", "/3B", "/3C", "/3D", "/4A", "/4B", "/4C", "/4D",
        "\0"
   };

    int carta;
    printf("Digite um numero:");
    scanf("%d", &carta);

    if(carta < 0 || carta >= 64) {
        printf("Carta invalida\n");
    } else {
    printf("%s",baralho[carta]);
    }
}