#include <iostream>

int main() {
    // declaração e inicialização das variaveis
    int numero1 = 5;
    int numero2 = 8;
    int numero3 = 12;
    float media;

    //calculo da media
    media = (numero1 + numero2 + numero3) / 3.0;

    //exibição do resultado
    std::cout << "A média dos números é: " << media << std::endl;
     return 0;
}