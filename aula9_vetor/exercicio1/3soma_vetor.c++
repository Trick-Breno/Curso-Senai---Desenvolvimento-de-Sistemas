#include <iostream>
using namespace std;

#define SIZE 10

int main() {
    int elementos[SIZE];
    int soma = 0;

    cout << "Digite " << SIZE << " números:" << endl;

    for ( int i = 0; i < SIZE; i++) {
        cin >> elementos[i];
    }
    cout << "Soma dos elementos do vetor:" << endl;

    for ( int i = 0; i < SIZE; i++) {
        soma += elementos[i];
    }

    cout << soma << " ";

    return 0;
}
