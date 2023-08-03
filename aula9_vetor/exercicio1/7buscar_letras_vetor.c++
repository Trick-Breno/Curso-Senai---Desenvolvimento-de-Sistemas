#include <iostream>
using namespace std;

#define SIZE 5

int main() {
    char elementos[SIZE];
    char buscarLetra;



    cout << "Digite " << SIZE << "letras do alfabeto" << endl;

    for (int i = 0; i < SIZE; i ++) {
        cin >> elementos[i];
    }

    cout << "Busque uma letra" <<endl;
    cin >> buscarLetra;

    bool encontrada = false;

    for (int i = 0; i < SIZE; i++) {
        if (elementos[i] == buscarLetra) {
           encontrada = true;
           break;
        } 
    }

    if (encontrada) {
        cout << "A letra " << buscarLetra << " foi encontrada";
    } else {
        cout << "A letra " << buscarLetra << " nao foi encontrada";
    }

    return 0;
}