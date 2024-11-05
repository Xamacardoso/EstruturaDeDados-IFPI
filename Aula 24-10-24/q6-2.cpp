// 6.2 Inclua os valores no vetor agora através da leitura do teclado.
//  OBS: lEIA O VALOR DE item através do teclado e 
// inclua no vetor de maneira que o ponteiro prox deve apontar sempre para o proximo elemento do vetor.

#include <stdio.h>
#include <iostream>
using namespace std;

typedef struct no {
	int item;
	struct no *prox;
}No;


main(){
	No v[4];
	No elem;
    cout << sizeof(v) / sizeof(No) << endl;
    int parada = sizeof(v) / sizeof(No);

	for (int i = 0; i < parada; i++){
        scanf("%d", &elem.item);
        elem.prox = i == parada - 1 ? NULL : &v[i+1];
        v[i] = elem;
    }

    // v[3].prox = NULL;
    
    for (No *i = v; i; i = i -> prox){
        printf("O valor equivale a %d\n",i -> item);
    }
}
