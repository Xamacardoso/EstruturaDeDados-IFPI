#include <stdio.h>
int main(){
    // New Carro structure
    typedef struct Carro
    {
        int ano; //
        int ligado;
    } corsa;

    corsa carrin;
    carrin.ano = 1;

    printf("%d", carrin.ano);
}