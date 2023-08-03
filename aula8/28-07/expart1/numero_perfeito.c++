#include <iostream>
#include <limits>
#include <windows.h>
using namespace std;

bool verificarNumeroPerfeito(int num) {
    int somaDivisores = 0;

    //verifica os divisores do numero
    for (int i = 1; i <= num / 2; i++) {
        if ( num % i == 0) {
            somaDivisores += i;
        }
    }

    // retorna um valor true ou false
    return ( somaDivisores == num);
}

int obterNumeroInteiroPositivo() {
    int num;

    while (true) {
        cout << "Digite um número inteiro positivo: ";
        cin >> num;

        if (cin.fail() || num <= 0) {
            cout << "Entrada inválida. Digite apenas números inteiros positivos." << endl;

            // Limpa o estado de erro de cin e descarta o restante da entrada inválida
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        } else {
            return num;
        }
    }

}

int main() {
    SetConsoleOutputCP(CP_UTF8);

    int numero = obterNumeroInteiroPositivo();

    if (verificarNumeroPerfeito(numero)) {
        cout << numero << " é um número perfeito." << endl;
    } else {
        cout << numero << " não é um número perfeito." << endl;
    }
    return 0;
}