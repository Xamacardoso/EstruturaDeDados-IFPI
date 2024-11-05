// ⦁	Sobre o código abaixo:

#include <stdio.h>
#include <stdlib.h>

// Definindo a estrutura do nó
typedef struct Node {
    int data;
    struct Node* next;
} Node;

// Coloca um nó com determinado valor no fim da lista.
// Recebe um ponteiro pra ponteiro de nó e um inteiro pra colocar no valor do novo nó
void append(Node** head_ref, int new_data) {
    Node* new_node = (Node*)malloc(sizeof(Node)); // ponteiro pro novo nó
    Node* p = *head_ref; // ponteiro AUXILIAR que aponta pra o endereco referencia de head_ref

    new_node->data = new_data; // coloca o inteiro no novo nó
    new_node->next = NULL; // o proximo é nulo

    // se a lista estiver vazia ela agora aponta pro novo nó, pra dizer que agora tem um nó dentro dela
    if (*head_ref == NULL) {
        *head_ref = new_node;
        return;
    }

    // vai até o fim da lista
    while (p->next != NULL) {
        p= p->next;
    }
    
    // faz com que o ultimo nó aponte para o novo nó.
    p->next = new_node;
    return;
}

// Função para imprimir a lista
void printList(Node* node) {
    while (node != NULL) {
        printf(" %d ", node->data);
        node = node->next;
    }
}

int main() {
    Node* head = NULL; // ponteiro para a lista. aponta pra null inicialmente
    append(&head, 1);
    append(&head, 2);
    append(&head, 3);
    append(&head, 4);
    printf("Lista encadeada: ");
    printList(head);

    return 0;
}

/*
 ⦁	O que será impresso ao final do programa?
 R = 1,2,3,4
 ⦁	Se o algoritmo está incluindo no final da lista, Faça uma função que inclua no início da lista.
 ⦁	Se o algoritmo está incluindo no inicio da lista, Faça uma função que inclua no final da lista.
 */