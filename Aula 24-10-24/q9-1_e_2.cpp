#include <stdio.h>

int x(char *str) {
    int y = 0; // inicializa o contador
    // enquanto ainda houver um caractere nao nulo
    while (*str) { 
        y++; // contador aumenta
        str++; // ponteiro aponta para o próximo caractere
    }
    return y; // retorna a quantidade de caracteres
}

int main() {
    char str[] = "Hello World";
    int w = x(str);
    printf("%d\n", w);
    return 0;
}

/*
⦁	O que será impresso ao final do programa? 
R = 11

⦁	O que a função X está fazendo?
R = Contando cada char que existe em str.
*/