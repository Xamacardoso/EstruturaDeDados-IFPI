#include <stdio.h>
#include <string.h>

int main(){
    char nome1[20];
    char nome2[20];
    printf("Digite um nome para nome1: ");
    scanf("%19s", nome1);
    printf("Ótimo, agora digite um nome para nome2: ");
    scanf("%19s", nome2);

    if (!strcmp(nome1, nome2)){
        puts("nome1 e nome2 SAO iguais!");
        return 0;
    }

    puts("nome1 e nome2 NAO sao iguais.");
    return 1;
}