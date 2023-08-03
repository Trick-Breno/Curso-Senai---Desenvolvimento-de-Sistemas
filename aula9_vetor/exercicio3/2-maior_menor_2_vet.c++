#include <iostream>
#include <vector>
#include <string>
#include <windows.h>
using namespace std;

int main() {
    SetConsoleOutputCP(CP_UTF8);

    vector<string>planetas = { "Vênus", "Mercúrio", "Terra", "Marte", "Júpiter", "Saturno",
    "Netuno", "Urano"};
    vector<int>distancia = { 108, 57, 149, 228, 778, 1427, 4497, 2871};

    int distancia_MIN = distancia[0];
    int distancia_MAX = distancia[0];
    string planeta_PROX = planetas[0];
    string planeta_DISTANT = planetas[0];

    for (size_t i = 0; i < distancia.size(); i++) {
        if (distancia[i] < distancia_MIN) {
            distancia_MIN = distancia[i];
            planeta_PROX = planetas[i];
        }

        if (distancia[i] > distancia_MAX) {
            distancia_MAX = distancia[i];
            planeta_DISTANT = planetas[i];
        }
    } 

    cout << "\nO planeta mais próximo do sol é " << planeta_PROX << " que está a uma distância de "
    << distancia_MIN << " milhões de KM\n" << endl;

    cout << "O planeta mais distante do sol é " << planeta_DISTANT << " que está a uma distância de "
    << distancia_MAX << " milhões de KM";

    return 0;
}