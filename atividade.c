// PEDE NOME E IMPRIME O NOME DIGITADO
#include<stdio.h>
int main()
{
    char nome[30];
    printf("Informe seu nome: ");
    fgets(nome, sizeof(nome), stdin); //stdin dispositivo de entrada: teclado
    printf("----- Nome Digitado: ");
    puts(nome); 
    return 0;
}


