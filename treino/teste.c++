#include <iostream>
#include <string>
#include <vector>
#include <Windows.h> // Incluída a biblioteca para configuração do console

using namespace std;

int main() {
    // Configurando a codificação UTF-8 para o console no Windows
    SetConsoleOutputCP(CP_UTF8);

    string vet[3] = {"nay", "trick", "frank"};

    for (int i = 0; i < 3; i++ ) {
        cout << vet[i] << ", ";1
    }
    cout << endl;

    return 0;
}