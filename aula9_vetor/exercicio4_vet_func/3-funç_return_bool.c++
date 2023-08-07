/*Escreva uma função que receba uma palavra secreta e uma letra e retorne um vetor de booleanos indicando quais posições na palavra contêm a letra.

    * A função deve receber uma palavra secreta e uma letra como argumentos.
    * A função deve retornar um vetor de booleanos, com um booleano para cada posição na palavra secreta.
    * O booleano para cada posição deve ser verdadeiro se a letra estiver na posição, e falso se a letra não estiver na posição.*/
   
#include <iostream>
#include <vector>
#include <string>

std::vector<bool> encontrarLetraNaPalavra(const std::string& palavra, char letra) {
    std::vector<bool> posicoes(palavra.size(), false);

    for (size_t i = 0; i < palavra.size(); i++) {
        if (palavra[i] == letra) {
            posicoes[i] = true;
        }
    }

    return posicoes;
}

int main() {
    std::string palavra_secreta = "abacaxi";
    char letra_procurada = 'a';

    std::vector<bool> posicoes_encontradas = encontrarLetraNaPalavra(palavra_secreta, letra_procurada);

    // Exibir as posições da letra encontrada
    std::cout << "Posições da letra " << letra_procurada << " na palavra: ";
    for (bool encontrada : posicoes_encontradas) {
        std::cout << (encontrada ? "true" : "false") << " ";
    }
    std::cout << std::endl;

    return 0;
}
