/*Programa 3 - Jogando o Jogo:**
   - Crie um programa que faça o sorteio de uma letra aleatória do alfabeto utilizando a função `gerarLetraAleatoria`.
   - Permita que o jogador chute a letra até acertar ou atingir um limite de tentativas (por exemplo, 5 tentativas).
   - Ao final, informe ao jogador se ele acertou ou não.
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

int main () {
    // vector<char>alfabeto = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};

    vector<char>alfabeto = {'a','b'};
    char letra_sorteada = gerarLetraAleatoria(alfabeto);
    char letra_usuario;
    vector<char>contar_tentativas;

    cout << letra_sorteada << endl;
    cout << "digite uma letra: ";

    do {
        cin >> letra_usuario;
        contar_tentativas.push_back(letra_usuario);

    } while (letra_usuario != letra_sorteada && contar_tentativas.size() < 3 );

    if(letra_usuario == letra_sorteada) {
        cout << "acertou";
    } else {
        cout << "errou";
    }



    return 0;
}
