// CONVERTENDO METRO EM DECIMETRO, CENTIMETRO E MILIMETRO
#include <stdio.h>
int main () {

int metro, decimetro, centimetros, milimetro;
printf("DIGITE O NUMERO EM METROS: ");
scanf("%d", &metro);
decimetro = metro * 10;
centimetros = metro * 100;
milimetro = metro * 1000;

printf("%d METROS sao %d DECIMETROS!\n", metro, decimetro);
printf("%d METROS sao %d CENTIMETROS!\n", metro, centimetros);
printf("%d METROS sao %d MILIMETROS!", metro, milimetro);

    return 0;
}
