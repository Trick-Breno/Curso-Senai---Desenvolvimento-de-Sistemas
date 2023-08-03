#include <iostream>
#include <limits>
#include <string>
#include <sstream>
#include <windows.h>

using namespace std;

// Função genérica para obter um valor válido do usuário
template <typename T>
T getValidInput(const string& prompt) {
    T value;
    cout << prompt;

    //loop até que o usuário forneça um número valido
    while (true) {
        cin >> value;

        /* (cin.fail() é para evitar que o usuário digite algo que não seja numero
        value <= 0  é para evitar que o usuário digite um numero menor que 0*/
        if (cin.fail() || value <= 0) {
            cout << "Valor inválido. Tente novamente: ";

            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        } else {
            break;
        }
    }

    return value;
}

int main() {
    SetConsoleOutputCP(CP_UTF8);

// Solicita ao usuário que insira a base do retângulo e utiliza a função 'getValidInput' para obter um valor inteiro válido.
    int base = getValidInput<int>("Qual a base do retângulo: ");
    int altura = getValidInput<int>("Digite a altura do retângulo: ");
    int calculo = base * altura;

    // o resultado do calculo será impresso
    cout << "A área do retângulo é " << calculo << endl;

    return 0;
}
