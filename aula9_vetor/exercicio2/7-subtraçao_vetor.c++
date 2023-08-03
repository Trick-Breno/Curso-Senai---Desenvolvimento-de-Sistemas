#include <iostream>
#include <string>
using namespace std;

#define TAM_VETOR 5

int main() {
    int golsFeitos[TAM_VETOR] = {1,3,2,1,2};
    int golsSofridos[TAM_VETOR] = {0,2,0,1,1};
    int saldoGols = 0;

    for (int i = 0; i < TAM_VETOR; i++) {
        saldoGols += golsFeitos[i] - golsSofridos[i];
        
    }

    cout << "Saldo de gols: " << saldoGols;
    return 0;
}
