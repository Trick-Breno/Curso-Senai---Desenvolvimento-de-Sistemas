#include <iostream>
#include <limits>
#include <windows.h>
using namespace std;

// funçao para o usuario inserir um valor, e garantir que o valor é numérico
int recebeFahrenheit(){
    int graus;

    cout << "Qual a temperatura: ";

    //enquanto o usuario nao digitar um valor numérico, o loop irá se repetir
    while (true) {
        cin >> graus;

        if (cin.fail()) {
            cout << "Digite um valor numérico: ";

            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        } else {
            break;
        }
    }
    
    return graus;
} 

//esta funçao recebe o valor do usuário e converte em graus celsius
int converterParaCelsius(int graus) {
    int converter = (graus - 32) * 5 / 9;

    return converter;
}

int main(){
    SetConsoleOutputCP(CP_UTF8);

    //a raviavel recebe o valor da funçao "entradaGraus"
    int temperatura_f = recebeFahrenheit();
    int grausCelsius =  converterParaCelsius(temperatura_f); //a funçao recebe o valor da variavel temperatura_F

    cout << "A temperatura em graus Celsius é " << grausCelsius;

    return 0;
}