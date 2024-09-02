#include <stdio.h>
#include <stdlib.h>

int main() {
int num1, num2, soma;
printf("DIGITE UM VALOR INTEIRO: ");
scanf("%d", &num1);
printf("DIGITE OUTRO VALOR INTEIRO: ");
scanf("%d", &num2);

soma = num1 + num2;
printf("A SOMA DE %d + %d = %d",num1, num2, soma);

return 0;
}