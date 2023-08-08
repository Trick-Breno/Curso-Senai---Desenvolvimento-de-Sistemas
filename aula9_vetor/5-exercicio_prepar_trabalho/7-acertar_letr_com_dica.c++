#include <iostream>
#include <random>
#include <vector>
using namespace std;

char gerarLetraAleatoria(const vector<char>& alfabeto) {
    random_device rd; 
    mt19937 gen(rd());

    uniform_int_distribution<> dis(0, alfabeto.size() - 1); // Corrigindo o parêntese de fechamento
    int posicao_vet_alfabeto = dis(gen);

    return alfabeto[posicao_vet_alfabeto];
}

int main() {
    vector<char> alfabeto = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
    char letra_sorteada = gerarLetraAleatoria(alfabeto);
    char letra_usuario;
    vector<char> contar_tentativas;

    int posicao_anterior = -10; // Distante da letra sorteada
    int posicao_posterior = alfabeto.size() + 10; // Distante da letra sorteada

    for (int i = 0; i < alfabeto.size(); ++i) {
        if (alfabeto[i] < letra_sorteada) {
            posicao_anterior = i;
        }
        if (alfabeto[i] > letra_sorteada) {
            posicao_posterior = i;
            break;
        }
    }

    int intervalo = posicao_posterior - posicao_anterior - 1;

    if (intervalo <= 5) {
        cout << "Dica: A letra sorteada está entre as letras " << alfabeto[posicao_anterior] << " e " << alfabeto[posicao_posterior] << endl;
    } else {
        int letra_dica_pos = posicao_anterior + (intervalo / 8);

        cout << "Dica: A letra sorteada está entre as letras " << alfabeto[posicao_anterior + 2] << " e " << alfabeto[posicao_posterior - 2] << endl;
    }

    do {
        cout << "Digite uma letra: ";
        cin >> letra_usuario;
        contar_tentativas.push_back(letra_usuario);

    } while (letra_usuario != letra_sorteada && contar_tentativas.size() < 5);

    if (letra_usuario == letra_sorteada) {
        cout << "Acertou!" << endl;
    } else {
        cout << "Errou!" << endl;
    }

    cout << "A letra sorteada foi " << letra_sorteada << endl;
    cout << "O usuário utilizou " << contar_tentativas.size() << " tentativas" << endl;

    return 0;
}
