/* Implemente uma função que receba uma palavra secreta e um vetor de booleanos (representando a resposta do jogador) e retorne uma string com as letras adivinhadas corretamente e "_" para as letras ainda desconhecidas.

    * A função deve receber uma palavra secreta e um vetor de booleanos como argumentos.
    * A função deve retornar uma string, com uma letra para cada posição na palavra secreta.
    * A letra para cada posição deve ser a letra adivinhada corretamente, ou "_" se a letra não foi adivinhada corretamente.
*/
#include <iostream>
#include <vector>
#include <string>

std::string exibirPalavraAdivinhada(const std::string& palavra, const std::vector<bool>& adivinhado) {
    std::string palavra_adivinhada;

    for (size_t i = 0; i < palavra.size(); i++) {
        if (adivinhado[i]) {
            palavra_adivinhada += palavra[i];
        } else {
            palavra_adivinhada += "_";
        }
    }

    return palavra_adivinhada;
}

int main() {
    std::string palavra_secreta = "abacaxi";
    std::vector<bool> adivinhado = {true, false, true, false, false, true, false};

    std::string palavra_adivinhada = exibirPalavraAdivinhada(palavra_secreta, adivinhado);

    // Exibir a palavra adivinhada
    std::cout << "Palavra Adivinhada: " << palavra_adivinhada << std::endl;

    return 0;
}
