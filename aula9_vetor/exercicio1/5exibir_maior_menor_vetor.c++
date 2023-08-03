#include <iostream>
using namespace std;

#define SIZE 7

int main() {
    int elementos[SIZE];

    cout << "Digite " << SIZE << " numeros:" << endl;

    for ( int i = 0; i < SIZE; i++) {
        cin >> elementos[i];
    }

    int menor = elementos[0];
    int maior = elementos[0];

    for ( int i = 1; i < SIZE; i++) {
        if (elementos[i] < menor) {
        menor = elementos[i];
        }

        if (elementos[i] > maior) {
            maior = elementos[i];
        }
    }

    cout << "O menor elemento é: " << menor << endl;
    cout << "O menor elemento é: " << maior << endl;

    return 0;
}
