#include <iostream>

using namespace std;
int mat;
float nota;
string nome;
int main(){
    cout << "Digite a matrícula: ";
    cin >> mat;
    cout << "Digite o nome: ";
    cin >> nome;
    cout << "Digite a nota: ";
    cin >> nota;

    cout << mat << "--" << nome << "--" << nota << endl;
    cout << "FIM";
}