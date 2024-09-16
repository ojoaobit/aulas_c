#include <stdio.h>

int main() {
    int num;
    
    printf("Digite um numero inteiro: ");
    scanf("%d", &num);

    if (num % 2 == 0) {
        printf("%d e par.\n", num);
    } else {
        printf("%d e impar.\n", num);
    }

    return 0;
}

