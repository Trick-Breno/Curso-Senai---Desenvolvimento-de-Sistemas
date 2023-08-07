/*Desenvolva uma função que leia as dicas do jogo de um arquivo e as forneça ao jogador durante o jogo.

    * A função deve ler as dicas do jogo de um arquivo.
    * A função deve fornecer as dicas ao jogador durante o jogo.*/
#include <iostream>
#include <fstream>
#include <vector>
#include <string>

std::vector<std::string> lerDicasDoArquivo(const std::string& nome_arquivo) {
    std::vector<std::string> dicas;
    std::string linha;

    std::ifstream arquivo(nome_arquivo);
    if (arquivo.is_open()) {
        while (std::getline(arquivo, linha)) {
            dicas.push_back(linha);
        }
        arquivo.close();
    } else {
        std::cout << "Erro ao abrir o arquivo " << nome_arquivo << std::endl;
    }

    return dicas;
}

int main() {
    std::string nome_arquivo = "dicas.txt";
    std::vector<std::string> dicas = lerDicasDoArquivo(nome_arquivo);

    // Exibir as dicas para o jogador
    std::cout << "Dicas do jogo:" << std::endl;
    for (const std::string& dica : dicas) {
        std::cout << dica << std::endl;
    }

    return 0;
}
