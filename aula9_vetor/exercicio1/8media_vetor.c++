#include <iostream>
using namespace std;

#define SIZE 10

int main() {
    int numeros[SIZE] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int soma = 0;

    for (int i = 0; i < SIZE; i++) {
        soma += numeros[i];
    }
    
    float media = static_cast<float>(soma) / SIZE;

    cout << "a media é " << media;

    return 0;
}