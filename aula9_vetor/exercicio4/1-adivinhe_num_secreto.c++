#include <iostream>
#include <random>
#include <vector>
using namespace std;

int main() {
    int num;

    random_device rd;
    mt19937 gen(rd());

    uniform_int_distribution<> dis(1, 100);
    
    int numero_aleatorio = dis(gen);

    cout << "Tente acertar o numero secreto" << endl;
 do {
        cin >> num;

        if (num < numero_aleatorio) {
            cout << "ERROU! digite um número maior" << endl;
        } else if (num > numero_aleatorio) {
            cout << "ERROU! digite um número menor" << endl;

        } else {
            cout << "PARABÉNS você acertou";

        }
    } while (num != numero_aleatorio);
    

    return 0;
}
