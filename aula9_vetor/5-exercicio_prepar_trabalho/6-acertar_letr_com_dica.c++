/*Programa 6 - Dica para o Jogador:**
   - Crie um programa que forneça uma dica ao jogador antes do início do jogo, informando se a letra sorteada é uma vogal ou uma consoante.
   - Utilize condicionais para verificar se a letra sorteada é uma vogal (A, E, I, O, U) ou uma consoante.*/

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

    if (letra_sorteada == 'a' || letra_sorteada == 'e' || letra_sorteada == 'i' || letra_sorteada == 'o' || letra_sorteada == 'u') {
            cout << "A letra sorteada é uma vogal." << endl;
        } else {
            cout << "A letra sorteada é uma consoante." << endl;
    }

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
