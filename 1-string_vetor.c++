#include <iostream>
#include <algorithm> 
using namespace std;

#define SIZE 5

int main() {
    string campeoes[SIZE] = {"Estados Unidos", "Noruega", "Alemanha", "Japão", "Brasil"};

    sort(campeoes, campeoes + SIZE);

    for (int i = 0; i < SIZE; i ++) {
        cout << campeoes[i] << ", ";
    }
    return 0;
}
