#include <iostream>
using namespace std;

#define SIZE 10

int main() {
    int idade[SIZE] = {20, 21, 23, 25, 27, 30, 32, 35, 26, 24};
    int soma = 0;

    for (int i = 0; i < SIZE; i ++) {
        soma += idade[i];
    }

    float media = static_cast<float>(soma) / SIZE;

    cout << media;
    return 0;
}
