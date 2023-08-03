#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Digite um número: ";
    cin >> num;

    if (num >= 0 && num <= 10) { // faltou colocar os colchetes deois do if e else
        cout << "O número está no intervalo de 0 a 10." << endl;
    } else{
        cout << "O número não está no intervalo de 0 a 10." << endl;
    }
    return 0;
}