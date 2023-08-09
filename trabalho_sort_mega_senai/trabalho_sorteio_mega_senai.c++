#include <iostream>
#include <random>
#include <vector>
using namespace std;

int gerarNumero() {

    random_device rd; 
    mt19937 gen(rd());

    uniform_int_distribution<> dis(1, 60);
    int numero_sorteado = dis(gen); // vai receber o valor gerado aleatoriament
    
    return numero_sorteado;
}

int main() {
    vector<int>resultado_sorteio;

    
    while (resultado_sorteio.size() < 6) {
    int sorteado = gerarNumero();
    resultado_sorteio.push_back(sorteado);
    }



    cout << "sorteados\n";
    for(int i = 0; i < resultado_sorteio.size(); i++) {
    cout << resultado_sorteio[i] << ", ";
    }

    return 0;
}