#include <iostream>
#include <random>
#include <vector>
#include <string>
using namespace std;

int main() {
    vector<string>opcoes = {"lapis", "braço", "dedo"}; // opçoes de palavras aleatorias
    vector<string>palavra_secret; //ira receber uma palavra do vetor "opçoes" no sorteio

    // num aleatorio
    random_device rd; 
    mt19937 gen(rd());

    uniform_int_distribution<> dis(0, 2);
    int numero_aleatorio = dis(gen); // vai receber o valor gerado aleatoriamente

    // palavra_secret receber uma palavra do vetor "opçao" de acordo com o numero sorteado
    palavra_secret.push_back(opcoes[numero_aleatorio]); 

    vector<char>letras; // será armazenada cada letra da palavra secreta

    // este for separa cada elemento de "palavra_secreta" e "char elemento" ira receber cada elemento.
    for (char elemento : palavra_secret[0]) {
        letras.push_back(elemento); // os elementos serão adc no vetor letras
    }

    // armazenar as letras digitadas pelo usuário
    vector<char>letras_digitadas; 
    vector<char>letras_encontradas;
    vector<char>letras_ja_usadas;
    char buscar_letra;
    string advinhar_palavra;

    // for (size_t i = 0; i < palavra_secret.size(); i++) {
    //     cout << palavra_secret[i] << endl;
    //}

    do {
        if (!letras_ja_usadas.empty()) {
            cout << "\nLetras ja usadas: ";
            for (size_t i = 0; i < letras_ja_usadas.size(); i++) {
                cout << letras_ja_usadas[i] << ", "; 
            }
        }
        cout << endl;
        cout << "\nDigite uma letra: ";
        cin >> buscar_letra;
        letras_digitadas.push_back(buscar_letra);
        letras_ja_usadas.push_back(buscar_letra);        

        for (int i = 0; i < letras.size(); i++) {
            if (letras_digitadas[0] == letras[i] ) {
                letras_encontradas.push_back(letras[i]);
            }
        }

        letras_digitadas.clear();

        if (!letras_encontradas.empty()) {
            cout << "\nLetras encontradas: ";
            for (char letra : letras_encontradas) {
                cout << letra << " ";
            }
            cout << endl;
        } else {
            cout << "\nNenhuma letra encontrada." << endl;
        }

        cout << "\nQual a palavra secreta? ";
        cin >> advinhar_palavra;
        if (advinhar_palavra != palavra_secret[0]) {
        cout << "\nERROU! Tente novamente";
        }

    } while (advinhar_palavra != palavra_secret[0]);
    cout << "PARABENS VOCE ACERTOU";

    //     cout << "Digite uma letra" << endl;
    //     cin >> buscar_letra;
    //     letras_digitadas.push_back(buscar_letra);


    //         cout << letras_encontradas[i];
    //     }
    // }

    return 0;
}


    // for (size_t i = 0; i < palavra_secret.size(); i++) {
    //     cout << palavra_secret[i];
    // }



    // vector<char>letras;
    // string palavra = palavra_secret[0];

    // for (char letra : palavra) {
    //     letras.push_back(letra);
    // }

    // cout << "letras de palavra:" << endl;
    // for ( char letra : palavra) {
    //     cout << letra << ", ";
    // }
