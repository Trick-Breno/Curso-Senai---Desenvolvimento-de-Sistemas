#include <iostream>
#include <algorithm> /*possibilita a utilização da função "sort()", que é usada para ordenar os elementos no vetor*/
#include <vector> 
using namespace std;


int main() {
    vector<string>planetas = {"Saturno", "Jupter", "Venus", "Urano", "Terra"};
    
    sort(planetas.begin(), planetas.end());

    for (int i = 0; i < planetas.size(); i++) {
        cout << planetas[i];
        if (i < planetas.size() - 1) {
            cout << ", ";
        }
    }

    return 0;
}
