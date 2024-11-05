#include <stdio.h>

void bubbleSort(double *arr){
    int swapped;
    do {
        swapped = 0;
        for (int i = 0; i < 3 - 1; i++){
            if (arr[i] < arr[i+1]){
                double aux = arr[i+1];
                arr[i+1] = arr[i];
                arr[i] = aux;
                swapped = 1;
            }
        }
    } while (swapped);
} 

int main() {
    double lista[3];
    for (int i = 0; i < 3; i++){
        scanf("%lf",&lista[i]);
    }
    bubbleSort(lista);
    double a = lista[0];
    double b = lista[1];
    double c = lista[2];

    if (a >= (b + c)){
        puts("NAO FORMA TRIANGULO");
        return 0;
    } else if (a*a == b*b + c*c){
        puts("TRIANGULO RETANGULO");

    } else if (a*a > b*b + c*c){
        puts("TRIANGULO OBTUSANGULO");

    } else if (a*a < b*b + c*c){
        puts("TRIANGULO ACUTANGULO");

    } if (a == b && b == c) {
        puts("TRIANGULO EQUILATERO");
        return 0;
    } else if ((a == b && b != c) || (a == c && c != b) || (b == c && a != b)) {
        puts("TRIANGULO ISOSCELES");
    }

    return 0;
}