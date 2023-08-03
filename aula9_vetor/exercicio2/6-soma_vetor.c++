#include <iostream>
#include <string>
using namespace std;

#define TAM_VETOR 5

int main() {
    int selecao[TAM_VETOR] = {1,3,2,0,2};
    int soma =0;

    for (int i = 0; i < TAM_VETOR; i++) {
        soma += selecao[i];
    }

    cout << "O total de gols marcados pela equipe foi: " << soma;
    return 0;
}
