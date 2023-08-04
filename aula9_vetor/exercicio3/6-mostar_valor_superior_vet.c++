#include <iostream>
#include <vector>
using namespace std;

int main() {

    vector<float>massa_estrelas = {23, 2.02, 2.1, 1.79, 13, 0.12, 300};
    int superior_massa_sol = 0;
    

    for (size_t i = 0; i < massa_estrelas.size(); i++) {
        if (massa_estrelas[i] > 3) {
            superior_massa_sol++;
        }
    }

    cout << superior_massa_sol;

    return 0;
}