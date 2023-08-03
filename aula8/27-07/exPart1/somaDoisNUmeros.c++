#include <iostream>
#include <limits>
#include <windows.h>
using namespace std;

int num1;
int num2;
int soma;

void escolherNumero1() {
    cout << "Escolha o primeiro numero para a soma: ";

    while (true) {
        cin >> num1;

        if (cin.fail()) {
            cout << "Digite um valor válido";

            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        } else {
            break;
        }
    }
}

void escolherNumero2() {
    cout << "Digite o segundo número para a soma: ";

    while (true) {
        cin >> num2;

        if (cin.fail()) {
            cout << "Digite um número válido";

            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        } else {
            break;
        }
    }
}


int main() {
    SetConsoleOutputCP(CP_UTF8);

    escolherNumero1();
    escolherNumero2();
    soma = num1 + num2;

    cout << "O resultado da soma é: " << soma;

    return 0;
}