#include <stdio.h>
#include <iostream>
using namespace std;

// Lst é um ponteiro para struct no
typedef struct no {
	int item;
	struct no *prox; // ponteiro pro proximo nó

} *Lst;

// Funcao no que devolve Lst, um ponteiro para nós
// Recebe como parametros: um inteiro x e um Lst p
Lst no(int x, Lst p){
	Lst n = (struct no*)malloc(sizeof(struct no)); // ponteiro para estruturas nó 
	n->item = x;
	n->prox = p; 
	return n;
}

main(){
	
	Lst p = (no(1,no(2,no(3,no(4,NULL)))));
	
	while (p){
		cout<<p->item<<endl;
		p=p->prox;
	}
	// Final imprime 1, 2, 3, 4
}
