#include <stdio.h>
int main() {
    printf("DEC\t HEX\t CARACTERE\n");
    for (int i = 32; i <= 126; i++) {
        printf("%d\t %X\t %c\n", i, i, i);
    }
    return 0;
}