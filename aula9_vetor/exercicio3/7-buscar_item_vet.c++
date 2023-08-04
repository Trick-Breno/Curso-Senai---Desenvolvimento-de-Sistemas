#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    vector<string>constelacoes = {"Órion", "Ursa Maior", "Cruzeiro do Sul", "cisne", "Escporpião"};
    string busca;

    cout << "Realizar busca (primeira letra de cada palavra deve ser maiúscula)" << endl;
    getline(cin, busca);

    bool encontrado = false;
    
    for (size_t i = 0; i < constelacoes.size(); i++) {
        if (busca == constelacoes[i]) {
            encontrado = true;
            break;
        }
    }

    if (encontrado) {
        cout << "A constelação " << busca << " foi encontrada";
    } else {
       cout << "A constelação " << busca << " não foi encontrada";
    }
    return 0;
}