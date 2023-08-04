#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int>veloc_rotacao;
    int adc_velocidade;

    cout << "Digite a velocidade de rotaçao do planeta" << endl;
    for (size_t i = 0; i < 5; i++) {
        cin >> adc_velocidade;
        veloc_rotacao.push_back(adc_velocidade);
    }

    for (size_t i = 0; i < veloc_rotacao.size(); i++) {
        
    }
    return 0;
}