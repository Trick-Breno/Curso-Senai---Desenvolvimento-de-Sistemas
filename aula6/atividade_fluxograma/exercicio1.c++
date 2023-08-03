#include <iostream>
#include <limits> 
#include <windows.h>
using namespace std;

char operador;
int num1;
int num2;
int resultado;

void escolherOperador(){
    cout << "Escolha o tipo de operação que deseja realizar" <<endl;

    while (true) {
        cin >> operador;

        if (operador == '+' ||operador == '-' ||operador == '*' ||operador == '/'   ) {
            break;
        } else {
            cout << "Operador incompatível. Por favor, digite novamente: \n";

        }
    }

}

void escolherNum1(){
    cout << "Escolha o primeiro número para a operação" <<endl;

    while (true) {
        cin >> num1;

       if (cin.fail()) {
            cout << "Digite um número válido: \n";

            // Limpa o estado de erro de cin e descarta o restante da entrada inválida
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        } else {
            break;
        }
    }
}

void escolherNum2(){
    cout << "Escolha o segundo número para a operação." <<endl;

    while (true) {
        cin >> num2;

        if (cin.fail()) {
            cout << "Digite um número valido: \n";

            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        } else {
            break;
        }
    }
}

void resultOperacao() {
    resultado = (operador == '+') ? num1 + num2 :
                (operador == '-') ? num1 - num2 :
                (operador == '*') ? num1 * num2 :
                (operador == '/' && num2 != 0) ? num1 / num2:
                0;
}

    

int main() {
    SetConsoleOutputCP(CP_UTF8);

    escolherOperador();
    escolherNum1();
    escolherNum2();
    resultOperacao();

    cout << "Resultado da operação: " << resultado << endl;


    return 0;
}