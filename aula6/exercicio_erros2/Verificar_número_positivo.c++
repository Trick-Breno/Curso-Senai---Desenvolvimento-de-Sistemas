#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Digite um número: ";
    cin >> num;

    if (num > 0) { // faltou colocar chave no que ira acontecer no if e else
        cout << "O número é positivo." << endl;
    } else {
        cout << "O número é negativo ou zero." << endl;
    }
    return 0;
}