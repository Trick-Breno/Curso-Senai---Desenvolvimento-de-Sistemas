#include <iostream>
#include <vector> 
#include <windows.h>
using namespace std;


int main() {
    SetConsoleOutputCP(CP_UTF8);
    
    vector<int>temperatura = {130, 167, 40, 31, 9, 17, 73, 25};
    int soma = 0;


    for (int i = 0; i < temperatura.size(); i++) {
        soma += temperatura[i];
    }

    cout << "A massa total dos planetas é de "  << soma;
    return 0;
}
