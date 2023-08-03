#include <iostream>
using namespace std;

#define SIZE 6

int main() {
    int elementos[SIZE];

    cout << "Digite " << SIZE << " números:" << endl;

    for (int i = 0; i < SIZE; i++) {
        cin >> elementos[i];
    }

    cout << "Elementos do vetor:" << endl;

    for ( int i = 5; i >= 0 ; i-- ) {
        cout << elementos[i];

    }
    

    return 0;
}
