#include <iostream>
#include <vector> 
#include <windows.h>
using namespace std;


int main() {
    SetConsoleOutputCP(CP_UTF8);
    
    vector<double>magnitude = {-1.46, -0.72, -0.27, -0.04, 0.03, 0.08};
    double soma = 0;

    for (int i = 0; i < magnitude.size(); i++) {
        soma += magnitude[i];
    }

    double media = soma / magnitude.size();

    cout << "A magnitude media das estrelas é de "  << media;
    return 0;
}
