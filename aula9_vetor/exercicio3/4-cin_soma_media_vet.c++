#include <iostream>
#include <vector> 
#include <windows.h>
using namespace std;


int main() {
    SetConsoleOutputCP(CP_UTF8);
    
    vector<int>temperatura;
    int graus;
    int soma = 0;

    cout << "Insira as temperaturas" << endl;
    for (int i = 1; i < 5; i++) {
        cin >> graus;
        temperatura.push_back(graus);
    }


    for (int i = 0; i < temperatura.size(); i++) {
        soma += temperatura[i];
    }

    double media = static_cast<double>(soma) / temperatura.size();

    cout << "A temperatura média dos planetas é de "  << media << " graus celsius";
    return 0;
}
