#include <iostream>
#include <string>
using namespace std;

#define TAM_VETOR 7

int main() {
    char pais[TAM_VETOR]= {'c', 'e', 's', 'a', 'c', 'f', 'n'};
    char buscarPais;

    cout << "Digite a sigla do país: ";
    cin >> buscarPais;

    bool encontrado = false;

    for (int i = 0; i < TAM_VETOR; i++) {
        if (buscarPais == pais[i]) {
            encontrado = true;
            break;
        }
    }

    if (encontrado) {
        cout << "País encontrado";
    } else {
        cout << "País não encontrado";
    }
    return 0;
}
