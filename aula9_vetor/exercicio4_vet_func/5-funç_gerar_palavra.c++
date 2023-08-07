/*Crie uma função que gera uma palavra secreta aleatória de um vetor de palavras predefinidas.

    * A função deve receber um vetor de palavras como argumento.
    * A função deve retornar uma palavra secreta aleatória do vetor de palavras.*/
#include <iostream>
#include <vector>
#include <random>
#include <string>

std::string gerarPalavraSecretaAleatoria(const std::vector<std::string>& palavras) {
    // Verificar se o vetor de palavras não está vazio
    if (palavras.empty()) {
        return ""; // Retorna uma string vazia se o vetor de palavras estiver vazio
    }

    // Gerar um número aleatório para selecionar uma palavra do vetor
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> dis(0, palavras.size() - 1);
    int indice_aleatorio = dis(gen);

    // Retornar a palavra secreta aleatória selecionada
    return palavras[indice_aleatorio];
}

int main() {
    std::vector<std::string> palavras = {"abacaxi", "banana", "laranja", "morango", "uva"};

    std::string palavra_secreta = gerarPalavraSecretaAleatoria(palavras);

    std::cout << "Palavra secreta aleatória: " << palavra_secreta << std::endl;

    return 0;
}

