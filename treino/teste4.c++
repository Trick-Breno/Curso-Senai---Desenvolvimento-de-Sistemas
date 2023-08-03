#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    vector<string> planetas = {"Mercúrio", "Vênus", "Terra", "Marte", "Júpiter", "Saturno", "Urano", "Netuno", "Plutão", "Éris"};
    vector<int> distancias = {57, 108, 149, 228, 778, 1427, 2871, 4497, 5914, 22794};

    int distancia_minima = distancias[0];
    int distancia_maxima = distancias[0];
    string planeta_mais_proximo = planetas[0];
    string planeta_mais_distante = planetas[0];

    for (size_t i = 1; i < distancias.size(); ++i) {
        if (distancias[i] < distancia_minima) {
            distancia_minima = distancias[i];
            planeta_mais_proximo = planetas[i];
        }

        if (distancias[i] > distancia_maxima) {
            distancia_maxima = distancias[i];
            planeta_mais_distante = planetas[i];
        }
    }

    cout << "Planeta mais próximo do Sol: " << planeta_mais_proximo << " (" << distancia_minima << " milhões de km)" << endl;
    cout << "Planeta mais distante do Sol: " << planeta_mais_distante << " (" << distancia_maxima << " milhões de km)" << endl;

    return 0;
}
