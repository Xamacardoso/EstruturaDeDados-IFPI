#include <stdio.h>

int main() {
    char nome1[20];
    char nome2[20];
    printf("Digite um nome para nome1: ");
    scanf("%19s", nome1);
    printf("Ótimo, agora digite um nome para nome2: ");
    scanf("%19s", nome2);

    for (int i = 0; i < 20; i++) {
        if (nome1[i] != nome2[i]) {
            puts("nome1 e nome2 NAO sao iguais.");
            return 1;
        }
        if (nome1[i] == '\0' || nome2[i] == '\0') {
            break;
        }
    }

    puts("nome1 e nome2 SAO iguais!");
    return 0;
}
