#include <iostream>
#include <stdio.h>

using namespace std;

int main(){
    string nome1;
    string nome2;

    cin >> nome1;
    cin >> nome2;

    string res = nome1 == nome2 ? "Sao iguais!" : "Sao diferentes!";
    cout << "Nome1: " << nome1 << endl;
    cout << "Nome2: " << nome2 << endl;
    cout << "Resultado: " << res << endl;
    return 0;
}