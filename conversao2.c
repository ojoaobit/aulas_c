// CONVERSAO OCTAL E HEXADECIMAL
#include <stdio.h>

int main() {

    int numeroDecimal;
    printf("DIGITE UM NUMERO DECIMAL: ");
    scanf("%d", &numeroDecimal);

    printf("NUMERO DA BASE DECIMAL: %d\n", numeroDecimal);
    printf("NUMERO DA BASE OCTAL: %o\n", numeroDecimal);
    printf("NUMERO DA BASE HEXADECIMAL: %X\n", numeroDecimal);

    return 0;
}
