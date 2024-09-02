// QUANTAS HORAS SE PASSOU DO INICIO DO DIA ATE A HORA INFORMADA
#include<stdio.h>
#include<locale.h>

int main () {
int horas, minutos;
setlocale(LC_ALL,"portuguese");

printf("QUAL A HORA ATUAL? (formato 24h)\n");
scanf("%d", &horas);

minutos = horas*60;
printf("DO INICIO DO DIA ATE A HORA INFORMADA\nSE PASSARAM: %d minutos", minutos);

return 0;
}
