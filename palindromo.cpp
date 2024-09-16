#include <stdio.h>
#include <string.h>
#include <ctype.h>

int isPalindrome(char str[]) {
    int l = 0;  
    int h = strlen(str) - 1;  


    while (l < h) {
        // Ignorar caracteres que não são letras ou números
        if (!isalnum(str[l])) {
            l++;
        } else if (!isalnum(str[h])) {
            h--;
        } else {
        
            if (tolower(str[l]) != tolower(str[h])) {
                return 0; 
            }
            l++;
            h--;
        }
    }
    return 1;
}

int main() {
    char str[100];

    printf("Digite uma string: ");
    fgets(str, 100, stdin);

    str[strcspn(str, "\n")] = '\0';

    if (isPalindrome(str)) {
        printf("'%s' e um palindromo.\n", str);
    } else {
        printf("'%s' nao e um palindromo.\n", str);
    }

    return 0;
}

