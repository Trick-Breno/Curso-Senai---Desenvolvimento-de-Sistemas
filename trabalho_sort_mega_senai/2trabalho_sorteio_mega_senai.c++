#include <iostream>
#include <random>
#include <vector>
using namespace std;

vector<int>resultadoSorteio() {
    vector<int>resul_sorteio;
    int numero_sorteado;

    while (resul_sorteio.size() < 6) {
        random_device rd; 
        mt19937 gen(rd());

        uniform_int_distribution<> dis(1, 60);
        numero_sorteado = dis(gen); // vai receber o valor gerado aleatoriament
        resul_sorteio.push_back(numero_sorteado);
    }

    return resul_sorteio;
}

vector<int>criarAposta() {
    vector<int>numeros_apostados;
    int numero;

    cout << "Digite 6 numeros entre 1 e 60 para criar aposta" <<endl;
    while (numeros_apostados.size() < 6) {        
        while (true) {//loop até que o usuário forneça um número valido
            cin >> numero;

            /* (cin.fail() é para evitar que o usuário digite algo que não seja numero
            value > 0  é para evitar que o usuário digite um numero menor que 0*/
            if (cin.fail() || numero > 60) {
                cout << "Valor inválido. Tente novamente:" <<endl;

                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
            } else {
                break;
            }
        }

        numeros_apostados.push_back(numero);

    }

    return numeros_apostados;
}

int main() {

    vector<int>numeros_aposta = criarAposta();

    cout << "numeros apostados\n";
    for(int i = 0; i < numeros_aposta.size(); i++) {
    cout << numeros_aposta[i] << ", ";
    }


    vector<int>resultado_sorteio = resultadoSorteio();

    cout << "\nsorteados\n";
    for(int i = 0; i < resultado_sorteio.size(); i++) {
    cout << resultado_sorteio[i] << ", ";
    }
    return 0;
}
