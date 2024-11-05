#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;

// Definindo a estrutura do nó
typedef struct Node {
    int data;
    struct Node* next;
} Node;

// Coloca um nó com determinado valor no início da lista.
// Recebe um ponteiro pra ponteiro de nó e um inteiro pra colocar no valor do novo nó
void appendStart(Node** head_ref, int new_data) {
    Node* new_node = (Node*)malloc(sizeof(Node)); // ponteiro pro novo nó
    new_node->data = new_data; // coloca o inteiro no novo nó
    new_node->next = *head_ref; // faz com que o novo nó aponte para o primeiro nó da lista.
    *head_ref = new_node; // faz com que o inicio da lista agora seja o novo elemento.
    return;
}

// Função para imprimir a lista
void printList(Node* node) {
    // Percorre os valores do ponteiro até ser nulo
    while (node != NULL) {
        printf("%d ", node->data); // imprime o valor do nó apontado agora
        node = node->next; // passa pro próximo nó
    }
}

int main() {
    Node* head = NULL; // ponteiro para a lista. aponta pra null inicialmente
    int nElements;
    cout << "Digite quantos nós deve ter a lista: ";
    cin >> nElements;

    int temp; // variavel temporaria para guardar um valor para a criação de um novo nó
    for (int i = 0; i < nElements; i++){
        cout << "Digite agora o novo valor do começo da lista: ";
        cin >> temp;
        appendStart(&head, temp); // Cria um novo nó;        
    }
    cout << "Lista encadeada: ";
    printList(head);

    return 0;
}

/*
 ⦁	O que será impresso ao final do programa?
 R = 1,2,3,4
 ⦁	Se o algoritmo está incluindo no final da lista, Faça uma função que inclua no início da lista.
 ⦁	Se o algoritmo está incluindo no inicio da lista, Faça uma função que inclua no final da lista.
 */