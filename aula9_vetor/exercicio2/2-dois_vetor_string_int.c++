#include <iostream>
#include <string>
using namespace std;

#define SIZE 8

int main() {
    string nome_paises[SIZE] = {
        "Estados Unidos",
        "Alemanha",
        "Noruega",
        "Japão",
        "Brasil",
        "Suécia",
        "Inglaterra",
        "Austrália"        
    };

int titulos[SIZE] = {3, 2, 1, 1, 0, 0, 0, 0};


    for (int i = 0; i < SIZE; i ++) {
        if (titulos[i] == 0) {
            cout <<nome_paises[i] << ", ";
        }
    }
    return 0;
}
