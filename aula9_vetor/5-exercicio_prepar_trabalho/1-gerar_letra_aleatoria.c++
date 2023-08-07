/* **Programa 1 - Geração de Letra Aleatória:**
   - Crie um programa que gere uma letra aleatória do alfabeto (A a Z) utilizando a função `gerarLetraAleatoria`.
   - Imprima a letra gerada na tela.
*/
#include <iostream>
#include <random>
#include <vector>
#include <string>
using namespace std;

char gerarLetraAleatoria(const vector<char>& alfabeto) {

    random_device rd; 
    mt19937 gen(rd());

    uniform_int_distribution<> dis(0, alfabeto.size() -1);
    int posicao_vet_alfabeto = dis(gen); // vai receber o valor gerado aleatoriamente

    // letra_aleatoria.push_back(alfabeto[posicao_vet_alfabeto]);

    return alfabeto[posicao_vet_alfabeto];


}

int main() {
    vector<char>alfabeto = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    char gerar_letra = gerarLetraAleatoria(alfabeto);

    cout<< "A letra aleatoria é: " << gerar_letra << endl;
    return 0;
}