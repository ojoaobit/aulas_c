// TABUADA DE UM NUMERO DADO PELO USUARIO
#include <stdio.h>

int main() {

int numero, i;
printf("DIGITE UM NUMERO INTEIRO: ");
scanf("%d", &numero);

printf("TABUADA DO: %d\n", numero);
for (i = 0;i <=10; i++) {
    printf("%d x %d = %d\n", numero, i, numero * i);
}

return 0;
}
