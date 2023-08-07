/*Implemente uma função que permita ao jogador escolher o nível de dificuldade, definindo o número máximo de dicas e/ou o tamanho máximo da palavra secreta.

    * A função deve permitir ao jogador escolher o nível de dificuldade.
    * O nível de dificuldade deve definir o número máximo de dicas e/ou o tamanho máximo da palavra secreta.
*/
#include <iostream>
#include <string>
#include <vector>

std::vector<int> maximo_dicas = {3, 2, 1}; // Número máximo de dicas para cada nível
std::vector<int> tamanho_maximo_palavra = {5, 8, 12}; // Tamanho máximo da palavra para cada nível

int escolherNivelDificuldade() {
    std::cout << "Escolha o nível de dificuldade:" << std::endl;
    std::cout << "1. Fácil" << std::endl;
    std::cout << "2. Médio" << std::endl;
    std::cout << "3. Difícil" << std::endl;

    int opcao;
    std::cin >> opcao;

    // Verificar se a opção é válida
    while (opcao < 1 || opcao > 3) {
        std::cout << "Opção inválida. Escolha novamente: ";
        std::cin >> opcao;
    }

    return opcao - 1; // Ajustar para o índice correto no vetor (0 para Fácil, 1 para Médio, 2 para Difícil)
}

int main() {
    int nivel_escolhido = escolherNivelDificuldade();

    std::cout << "Nível de dificuldade escolhido:" << std::endl;
    std::cout << "Número máximo de dicas: " << maximo_dicas[nivel_escolhido] << std::endl;
    std::cout << "Tamanho máximo da palavra: " << tamanho_maximo_palavra[nivel_escolhido] << std::endl;

    return 0;
}
