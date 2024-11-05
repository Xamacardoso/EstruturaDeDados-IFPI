#include <stdio.h>

void x(char *str1, char *str2) {
    while (*str1) {
        str1++;
    }
    while (*str2) {
        *str1 = *str2;
        str1++;
        str2++;
    }
    *str1 = '\0';
}

int main() {
    char str1[100] = "Hello ";
    char str2[] = "World!";
    x(str1, str2);
    printf(" %s\n", str1);
    return 0;
}

// O final do código exibe "Hello World!".

/* A função x está concatenando duas strings, str1 e str2.
O resultado da concatenação é passado para str1. */