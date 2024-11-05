#include <stdio.h>
#include <iostream>
using namespace std;

// Lst é um ponteiro para struct no
typedef struct no {
	int item;
	struct no *prox; // ponteiro pro proximo nó

} *Lst;

// Funcao no que devolve Lst, um ponteiro para nós
// Recebe como parametros: um Lst p
Lst no(int x,Lst p){
	Lst n = (struct no*)malloc(sizeof(struct no)); // ponteiro para estruturas nó 
	n->item = x;
	n->prox = NULL; // adiciona um item no fim da lista, entao o proximo é nulo

	// Se a lista tiver vazia, retorna o novo elemento
	if (!p){
		return n;
	}

	Lst temp = p;

	// vai até o fim da lista
	while (temp -> prox) {
		temp = temp -> prox;
	}

	temp -> prox = n;
	return p;
}

int main(){
	
	int nElementos, temp;
	cout << "Digite quantos elementos deseja: ";
	cin >> nElementos;
	Lst p = NULL;

	for (int i = 0; i < nElementos; i++){
		cout << "Digite o valor do " << i+1 << "o. elemento: ";
		cin >> temp;
		p = no(temp, p);
	}

	while (p){
		cout<<p->item<<endl;
		p=p->prox;
	}

	return 0;
}
