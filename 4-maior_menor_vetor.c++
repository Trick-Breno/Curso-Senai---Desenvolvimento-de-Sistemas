#include <iostream>
using namespace std;

#define SIZE 6

int main() {
    float altura[SIZE];

    cout << "Digite a altura" << endl;
    
    for (int i = 0; i < SIZE; i ++) {
        cin >> altura[i];
    }

    float menor = altura[0];
    float maior = altura[0];

    for (int i = 0; i < SIZE; i ++) {
        if (altura[i] < menor) {
            menor = altura[i];
        }
        
        if (altura[i] > maior) {
            maior = altura[i];
        }
    }

    cout << "O menor elemento é: " << menor << endl;
    cout << "O maior elemento é: " << maior << endl;


    return 0;
}