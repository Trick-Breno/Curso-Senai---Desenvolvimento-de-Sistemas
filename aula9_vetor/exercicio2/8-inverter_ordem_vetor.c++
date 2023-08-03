#include <iostream>
#include <string>
using namespace std;

#define TAM_VETOR 6

int main() {
    int dias_d_jogos[TAM_VETOR] = {1,4,7,10,13,16};

    cout << "Ordem inversa: ";
    for (int i = 5; i >= 0; i--) {
    cout << dias_d_jogos[i] << ", ";
    }

    return 0;
}
