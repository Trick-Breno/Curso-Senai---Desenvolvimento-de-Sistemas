/*Escreva uma função que conte quantas vezes uma letra aparece na palavra secreta.

    * A função deve receber uma palavra secreta e uma letra como argumentos.
    * A função deve retornar o número de vezes que a letra aparece na palavra secreta.
*/
#include <iostream>
#include <string>

int contarLetraNaPalavra(const std::string& palavra, char letra) {
    int contador = 0;

    for (char caractere : palavra) {
        if (caractere == letra) {
            contador++;
        }
    }

    return contador;
}

int main() {
    std::string palavra_secreta = "abacaxi";
    char letra_procurada = 'a';

    int vezes_letra_aparece = contarLetraNaPalavra(palavra_secreta, letra_procurada);

    std::cout << "A letra '" << letra_procurada << "' aparece " << vezes_letra_aparece << " vezes na palavra secreta." << std::endl;

    return 0;
}
