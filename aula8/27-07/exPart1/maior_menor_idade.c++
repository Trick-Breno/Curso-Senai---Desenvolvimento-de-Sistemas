#include <iostream>
#include <limits>
#include <windows.h>
using namespace std;

int idade;

void inserirIdade(){
    cout << "Digite sua idade: ";

    while (true) {
        cin >> idade;

        if (cin.fail()) {
            cout << "Digite uma idade válida";

            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        } else {
            break;
        }
    }
}

void maiorOUmenor_idade(){
    if (idade >= 18) {
        cout << "Você é maior de idade";
    } else {
        cout << "Você é menor de idade";
    }
}

int main(){
    SetConsoleOutputCP(CP_UTF8);

    inserirIdade();
    maiorOUmenor_idade();

    return 0;
}