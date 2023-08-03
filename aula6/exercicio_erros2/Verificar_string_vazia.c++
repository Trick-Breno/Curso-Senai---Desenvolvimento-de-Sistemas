#include <iostream>
using namespace std;

int main() {
    string text;
    cout << "Digite um texto: ";
    cin >> text;

    if (text != "") { // colocar os colchtes depois do if e else
        cout << "O texto não está vazio." << endl;
    }else {
        cout << "O texto está vazio." << endl;
    }
    return 0;
}