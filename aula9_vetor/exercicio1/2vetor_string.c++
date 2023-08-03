#include <iostream>
using namespace std;

#define SIZE 5

int main() {
    string elementos[SIZE];
    string fruta;

    cout << "Digite " << SIZE << " frutas:" << endl;

    for ( int i = 0; i < SIZE; i++) {
        cin >> elementos[i];
        
    }
    cout << "Elementos do vetor:" << endl;

    for ( int i = 0; i < SIZE; i++) {
        cout << elementos[i]<< " ";
    }
    

    return 0;
}
