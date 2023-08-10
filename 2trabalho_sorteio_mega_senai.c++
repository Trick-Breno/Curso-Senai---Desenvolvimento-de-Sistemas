/*Trabalho: Sorteio Mega Senai
participantes: Patrick Breno de Souza*/

#include <iostream>
#include <random>
#include <vector>
#include <algorithm>
using namespace std;

//função para gerar 6 numeros aleatorios entre 1 e 60
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

    //organizar os numeros em ordem crescente
    sort(resul_sorteio.begin(), resul_sorteio.end());

    return resul_sorteio;
}

// funçao para om usuário criar sua aposta com 6 numeros
vector<int>criarAposta() {
    vector<int>numeros_apostados;
    int numero;

    cout << "\nDigite 6 numeros entre 1 e 60 para criar aposta:\n";
    while (numeros_apostados.size() < 6) {

        {//loop até que o usuário forneça um número valido      
        while (true) 
            cin >> numero;

            /* evitar que o usuário digite algo que não seja numero ou
            um numero menor que 0 ou maior que 60*/
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

//funçao para processar os dados e retornar o numero de acertos
vector<int>processarDados(const vector<int>& numeros_aposta, const vector<int>& numeros_sorteio) {
    vector<int>acertos;

    for (int i = 0; i < numeros_aposta.size(); i++) { //percorre os numeros das apostas
        for (int j = 0; j < numeros_sorteio.size(); j++) { // percorre os numeros sorteados
            if (numeros_aposta[i] == numeros_sorteio[j]) { // os numeros da aposta que fore, iguais aos sorteados, irao para o vetor acertos
                acertos.push_back(numeros_aposta[i]); // adc os numeros acertados ao vetor acertos
                break;
            }
        }
    }
    return acertos;
}

int main() {
    vector<int>acertos; //recebera o número de acertos
    int tentativas = 0; // receberá o numero de tentativas ate acetar os 6 numeros
    int jogarNovamente = 1;

    /*o jogo irá se repetir ate que o usuário acerte os 6 numeros
    ou ate que o usuário decida parar*/
    while(acertos.size() <6 && jogarNovamente == 1) {
        
        cout << "\n" <<endl;
        vector<int>numeros_sorteados = resultadoSorteio();
        cout << "\nsorteados: " << endl; 
        for(int i = 0; i < numeros_sorteados.size(); i++) {
        cout << numeros_sorteados[i] << ", ";
        
        }

        vector<int>numeros_aposta = criarAposta();

        acertos = processarDados(numeros_aposta, numeros_sorteados);
        cout << "Número de acertos: " << acertos.size();

        tentativas++;

        if(acertos.size() == 6) {
            cout << "\nPARABÉNS! VOCÊ ACERTOU TODOS OS NÚMEROS." <<endl;
            cout << "Você precisou de " << tentativas << " tentativas para acertar os numeros." << endl;

        } else {
            cout << "\nsorteados: " << endl; 
            for(int i = 0; i < numeros_sorteados.size(); i++) {
            cout << numeros_sorteados[i] << ", ";
            }
            cout << "\n" <<endl;
            cout << "\nDeseja jogar novamente? (digite 1 para sim ou 2 para não): ";
            while (true) {//loop até que o usuário forneça um número valido
                cin >> jogarNovamente;

                /* evitar que o usuário digite algo que não seja numero ou
                um numero menor que 0 ou maior que 2*/
            if (cin.fail() || jogarNovamente < 0 || jogarNovamente > 2) {
                    cout << "Opção invalida. Tente novamente:" <<endl;

                    cin.clear();
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                } else {
                    break;
                }
            }

        }

        if (jogarNovamente == 2) {
            cout << "\nObrigado por jogar, volte quando quiser.";
        }
    }
    return 0;
}
