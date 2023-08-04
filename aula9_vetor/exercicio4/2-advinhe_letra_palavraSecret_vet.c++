#include <iostream>
#include <random>
#include <vector>
using namespace std;

int main() {
    vector<string>opcoes = {"lapis", "braço", "dedo"}; // opçoes de palavras aleatorias
    vector<string>palavra_secret; //ira receber a palavra de opçoes
    string buscar_letra;

    // num aleatorio
    random_device rd; 
    mt19937 gen(rd());

    uniform_int_distribution<> dis(0, 2);
    int numero_aleatorio = dis(gen); // vai receber o valor gerado aleatoriamente

    palavra_secret.push_back(opcoes[numero_aleatorio]); // palavra_secret recebe a palavra de opçao de acordo com o numero sorteado


    return 0;
}


    // for (size_t i = 0; i < palavra_secret.size(); i++) {
    //     cout << palavra_secret[i];

    // }

