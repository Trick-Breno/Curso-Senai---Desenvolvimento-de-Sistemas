/*Programa 2 - Verificando se a Letra Existe:**
   - Crie um programa que peça ao usuário para digitar uma letra.
   - Utilize a função `verificarLetraNoAlfabeto` para verificar se a letra digitada existe no alfabeto.
   - Imprima na tela se a letra existe ou não.*/
#include <iostream>
#include <random>
#include <vector>
#include <string>
using namespace std;

char verificarLetraNoAlfabeto(vector<char>& alfabeto, char letra_usuario) {
    char encontrar_letra[0];

    for(int i = 0; i < alfabeto.size(); i++) {
        if (encontrar_letra[0] == alfabeto[i]) {
            encontrar_letra[i] = alfabeto[i];
        }
    }

    return encontrar_letra[0];
}

int main() {
    vector<char>alfabeto = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    char letra_usuario[0];

    cout << "Digite uma letra: ";
    cin >> letra_usuario;

    char verifition = verificarLetraNoAlfabeto(alfabeto, letra_usuario);

    cout << "A letra " << verifition;
    return 0;
}
