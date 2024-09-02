// LE 2 VALORES E DIZ QUAL NUMERO E MAIOR, MENOR OU IGUAL
#include <stdio.h>
#include <stdlib.h>

int main() {
int num1, num2;
printf("DIGITE UM VALOR INTEIRO: ");
scanf("%d", &num1);
printf("DIGITE OUTRO VALOR INTEIRO: ");
scanf("%d", &num2);

if (num1 > num2) {
    printf("O NUMERO %d E MAIOR QUE %d", num1, num2);
} else if (num2 > num1){
 printf("O NUMERO %d E MAIOR QUE %d", num2, num1);
} else {
    printf("OS NUMEROS SAO IGUAIS!");
}

return 0;
}
