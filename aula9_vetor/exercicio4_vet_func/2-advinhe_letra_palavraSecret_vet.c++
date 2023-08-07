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

    /*sintaxe do range-based for loop*/
    /* este for separa cada elemento de "palavra_secreta" e "char elemento" ira receber cada elemento. */
    for (char elemento : palavra_secret[0]) {
        letras.push_back(elemento); // os elementos serão adc no vetor letras
    }

    vector<char>letras_digitadas; 
    vector<char>letras_encontradas;
    vector<char>letras_ja_usadas;
    char buscar_letra;
    string advinhar_palavra;

    // loop para que o programa seja executado ate que o usuário acerte a palavra secreta
    do {
        //palavras usadas será exibida se ela nao estiver vazia
        if (!letras_ja_usadas.empty()) {
            cout << "\nLetras ja usadas: ";
            for (size_t i = 0; i < letras_ja_usadas.size(); i++) {
                cout << letras_ja_usadas[i] << ", "; 
            }
        }

        /* o usuário digita uma letra, depis a letra digitada é adc a letras digitadas e 
        letras ja usadas para que posteriormente seja mostrado estes dados */
        cout << endl;
        cout << "\nDigite uma letra: ";
        cin >> buscar_letra; 
        letras_digitadas.push_back(buscar_letra);
        letras_ja_usadas.push_back(buscar_letra);        

        // se a letra digitada for encontrada, ela será adc a letras encontradas
        for (int i = 0; i < letras.size(); i++) {
            if (letras_digitadas[0] == letras[i] ) {
                letras_encontradas.push_back(letras[i]);
            }
        }

        /* neste ponto do programa, os valores letras digitadas tem que ser excluidas, para que no proximo loop, nao seja adc letras repetidas nos vetores letras digitadas e letras encontradas */
        letras_digitadas.clear();

        // informar se a letra digitada foi encontrada ou não
        if (!letras_encontradas.empty()) {
            cout << "\nLetras encontradas: ";
            for (size_t i = 0; i < letras_encontradas.size(); i++) {
                cout << letras_encontradas[i] << " ";
            }
            cout << endl;
        } else {
            cout << "\nNenhuma letra encontrada." << endl;
        }

        // o usuário deve tentar acertar a palavra secreta
        cout << "\nQual a palavra secreta? ";
        cin >> advinhar_palavra;
        if (advinhar_palavra != palavra_secret[0]) {
        cout << "\nERROU! Tente novamente";
        }

    } while (advinhar_palavra != palavra_secret[0]);
    cout << "PARABENS VOCE ACERTOU";

    return 0;
}