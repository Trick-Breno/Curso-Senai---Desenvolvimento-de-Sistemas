#include <iostream>
#include <limits>
#include <vector>
#include <windows.h>
using namespace std;

int main() {
    SetConsoleOutputCP(CP_UTF8);

    vector<int>numeros;
    int num;

    cout << "Digite os numeros (digite 0 para parar):" << endl;

    do {
        cin >> num;
        numeros.push_back(num);
    } while (num != 0);

    int soma = 0;

    for (int i = 0; i < numeros.size() -1; i++) {
        soma += numeros[i];
    }

    float media = static_cast<float>(soma) / (numeros.size() -1);
    cout << media;
    return 0;
}