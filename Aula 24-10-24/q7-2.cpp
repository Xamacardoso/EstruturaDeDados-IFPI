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
// Lst no(Lst p){
// 	Lst n = (struct no*)malloc(sizeof(struct no)); // ponteiro para estruturas nó 
// 	cin >> n->item;
// 	n->prox = p;
// 	return n;
// }

main(){
	
	int nElementos;
	cout << "Digite quantos elementos deseja: ";
	cin >> nElementos;
	Lst p = (struct no*)malloc(sizeof(struct no) * nElementos);
	for (int i = 0; i < nElementos; i++){
		cout << "Digite o valor do " << i+1 << "o. elemento: ";
		cin >> p[i].item;
		p[i].prox = i < nElementos-1 ? &p[i+1] : NULL;
	}
	
	while (p){
		cout<<p->item<<endl;
		p=p->prox;
	}
}
