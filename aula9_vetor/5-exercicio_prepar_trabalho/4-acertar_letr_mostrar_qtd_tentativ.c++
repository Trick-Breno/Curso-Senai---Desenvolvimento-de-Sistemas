/*Programa 4 - Exibindo Resultados:**
   - Crie um programa que, após o jogador acertar a letra ou esgotar o limite de tentativas, exiba a letra sorteada e a quantidade de tentativas que o jogador utilizou.
*/
#include <iostream>
#include <random>
#include <vector>
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
    vector<char>alfabeto = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    char letra_sorteada = gerarLetraAleatoria(alfabeto);
    char letra_usuario;
    vector<char>contar_tentativas;

    do {
        cout << "digite uma letra: ";
        cin >> letra_usuario;
        contar_tentativas.push_back(letra_usuario);

    } while (letra_usuario != letra_sorteada && contar_tentativas.size() < 5 );

    if(letra_usuario == letra_sorteada) {
        cout << "Acertou!" << endl;
    } else {
        cout << "Errou!" <<endl;
    }

    cout << "A letra sorteada foi " << letra_sorteada <<endl;
    cout << "O usuário utilizou " << contar_tentativas.size() << " tenrativas";


    return 0;
}
