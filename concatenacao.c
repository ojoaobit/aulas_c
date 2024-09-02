#include <stdio.h>
#include <string.h>

int main() {
    char nome[20];
    char sobrenome[20];
    char nomeCompleto[41]; //  (espaço) + 40 = 41

    // Inicializa o nomeCompleto
    nomeCompleto[0] = '\0';

    printf("DIGITE SEU NOME: ");
    scanf("%19s", nome);  // Limita a entrada a 19 caracteres + 1 para '\0'

    printf("DIGITE SEU SOBRENOME: ");
    scanf("%19s", sobrenome); 

    // Concatena o nome e o sobrenome
    strcat(nomeCompleto, nome);
    strcat(nomeCompleto, " ");
    strcat(nomeCompleto, sobrenome);

    printf("NOME COMPLETO: %s\n", nomeCompleto);

    return 0;
}
