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
    
    int num_letras;
    cout << "Digite a quantidade de letras a serem sorteadas: ";
    cin >> num_letras;

    int acertos = 0;
    int erros = 0;

    for (int i = 0; i < num_letras; ++i) {
        char letra_sorteada = gerarLetraAleatoria(alfabeto);
        char letra_usuario;

        cout << "\nTentativa " << i + 1 << "/" << num_letras << endl;
        
        cout << "Dica: Entre as letras " << alfabeto[0] << " e " << alfabeto[alfabeto.size() - 1] << endl;

        cout << "Digite uma letra: ";
        cin >> letra_usuario;

        if (letra_usuario == letra_sorteada) {
            cout << "Acertou!" << endl;
            acertos++;
        } else {
            cout << "Errou! A letra sorteada era: " << letra_sorteada << endl;
            erros++;
        }
    }

    cout << "\nPlacar final: " << endl;
    cout << "Acertos: " << acertos << endl;
    cout << "Erros: " << erros << endl;

    return 0;
}
