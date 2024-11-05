#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct aluno{
    int mat;
    char nome[30];
} TAluno;

TAluno lista[20];
int ultimo = 0;

void mostra(){
    for (int i = 0; i < ultimo; i++){
        printf("Index %d - Matricula %d | Nome: %s\n", i,lista[i].mat, lista[i].nome);
    }
}

void remover(int procurado){
    // printf("Ultimo: %d", ultimo);
    if (ultimo){
        for (int i = procurado; i < ultimo; i++){
            lista[i] = lista[i+1];
        }
        ultimo--;
        return;
    }
    puts("Lista vazia!");
}

void inserir(TAluno novo){
    if (ultimo < 20){
        lista[ultimo] = novo;
        ultimo++;
        return;
    }
    puts("Lista cheia!");
}

int main(){
    for (int i = 0; i < 20; i++){
        TAluno novo = {i, "Joao"};
        inserir(novo);
    }
    mostra();
    remover(3);
    mostra();
}