/*Trabalho: Sorteio Mega Senai
participantes: Patrick Breno de Souza*/

#include <iostream>
#include <random>
#include <vector>
#include <algorithm>
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

    sort(resul_sorteio.begin(), resul_sorteio.end());

    return resul_sorteio;
}

vector<int>criarAposta() {
    vector<int>numeros_apostados;
    int numero;

    cout << "\nDigite 6 numeros entre 1 e 60 para criar aposta:\n";
    while (numeros_apostados.size() < 6) {        
        while (true) {//loop até que o usuário forneça um número valido
            cin >> numero;

            /* (cin.fail() é para evitar que o usuário digite algo que não seja numero
            value > 0  é para evitar que o usuário digite um numero menor que 0*/
           if (cin.fail() || numero <= 0 || numero > 60) {
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

vector<int>processarDados(const vector<int>& numeros_aposta, const vector<int>& numeros_sorteio) {
    vector<int>acertos;

    for (int i = 0; i < numeros_aposta.size(); i++) {
        for (int j = 0; j < numeros_sorteio.size(); j++) {
            if (numeros_aposta[i] == numeros_sorteio[j]) {
                acertos.push_back(numeros_aposta[i]);
                break;
            }
        }
    }
    return acertos;
}
int main() {
    vector<int>resultado;
    int tentativas = 0;
    int opcao;

    while(resultado.size() <6 && opcao == 1) {
        
        cout << "\n" <<endl;
        vector<int>numeros_sorteados = resultadoSorteio();
        cout << "\nsorteados: " << endl; 
        for(int i = 0; i < numeros_sorteados.size(); i++) {
        cout << numeros_sorteados[i] << ", ";
        
        }

        vector<int>numeros_aposta = criarAposta();

        resultado = processarDados(numeros_aposta, numeros_sorteados);
        cout << "Número de acertos: " << resultado.size();

        tentativas++;
        if(resultado.size() == 6) {
            cout << "\nPARABÉNS! VOCÊ ACERTOU TODOS OS NÚMEROS." <<endl;
            cout << "Você precisou de " << tentativas << " tentativas para acertar os numeros." << endl;

        } else {
            cout << "\nsorteados: " << endl; 
            for(int i = 0; i < numeros_sorteados.size(); i++) {
            cout << numeros_sorteados[i] << ", ";
            }
        }

        cout << "\nDeseja jogar novamente? (digite 1 para sim ou 0 para não): ";
        cin >> opcao;


    }
    return 0;
}
