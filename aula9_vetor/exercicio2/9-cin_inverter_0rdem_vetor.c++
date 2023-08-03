#include <iostream>
using namespace std;

#define SIZE 6

int main() {
    string selecoes[SIZE];

    cout << "Digite " << SIZE << " seleções:" << endl;

    for (int i = 0; i < SIZE; i++) {
        cin >> selecoes[i];
    }

    cout << "Elementos do vetor:" << endl;

    for ( int i = 2; i >= 0 ; i-- ) {
        cout << selecoes[i] << ", ";

    }
    
    return ;
}
