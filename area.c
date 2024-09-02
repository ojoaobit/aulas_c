// CALCULAR AREA E PERIMETRO DO QUADRADO
#include <stdio.h>
#include <stdlib.h>

int main() {
float lado, area, perimetro;

printf("Digite o comprimentro do lado do quadrado: ");
scanf("%f", &lado);

area = lado * lado;
perimetro = 4 * lado;

printf("Area do quadrado: %.2f\n", area);
printf("Perimetro do quadrado: %.2f\n", perimetro);

return 0;
}
