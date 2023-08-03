#include <iostream>
using namespace std;

#define SIZE 8

int main() {
    int elementos[SIZE];

    cout << "Digite " << SIZE << " numeros:" << endl;

    for ( int i = 0; i < SIZE; i++) {
        cin >> elementos[i];
    }
    
    cout << "Elementos pares do vetor:" << endl;

    for ( int i = 0; i < SIZE; i++) {
        if (elementos[i] % 2 == 0) {
        cout << elementos[i] << ", ";
        }
    }

    return 0;
}
