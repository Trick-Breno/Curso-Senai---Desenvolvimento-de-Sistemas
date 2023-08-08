/*Programa 5 - Jogando Novamente:**
   - Crie um programa que permita ao jogador jogar novamente.
   - Caso o jogador queira continuar, faça um novo sorteio de uma letra e repita o processo.
   - Caso contrário, encerre o programa.*/

#include <iostream>
#include <random>
#include <vector>
using namespace std;

char gerarLetraAleatoria(const vector<char>& alfabeto) {
    random_device rd; 
    mt19937 gen(rd());

    uniform_int_distribution<> dis(0, alfabeto.size() - 1);
    int posicao_vet_alfabeto = dis(gen);

    return alfabeto[posicao_vet_alfabeto];
}

int main() {
    vector<char> alfabeto = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
    char letra_usuario;
    int numero;

    do {
        char letra_sorteada = gerarLetraAleatoria(alfabeto);
        vector<char> contar_tentativas;

        while (letra_usuario != letra_sorteada && contar_tentativas.size() < 5) {
            cout << "Digite uma letra: ";
            cin >> letra_usuario;
            contar_tentativas.push_back(letra_usuario);
        }

        if (letra_usuario == letra_sorteada) {
            cout << "Acertou!" << endl;
        } else {
            cout << "Errou!" << endl;
        }

        cout << "A letra sorteada foi " << letra_sorteada << endl;
        cout << "O usuário utilizou " << contar_tentativas.size() << " tentativas" << endl;

        cout << "Deseja jogar novamente? (1 para Sim, 0 para Não): ";
        cin >> numero;

    } while (numero == 1);

    cout << "Obrigado por jogar!" << endl;

    return 0;
}

