#include <iostream>
#include <limits> 
#include <windows.h>
using namespace std;

char operador;
int num1;
int num2;
int resultado;

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