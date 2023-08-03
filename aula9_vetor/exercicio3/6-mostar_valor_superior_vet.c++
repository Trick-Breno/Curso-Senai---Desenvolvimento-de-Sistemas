// #include <iostream>
// #include <vector>
// #include <windows.h>
// using namespace std;

// int main() {
//     SetConsoleOutputCP(CP_UTF8);

//     vector<float>massa_estrelas = {23, 2.02, 2.1, 1.79, 13, 0.12, 300};
//     float superior_massa_sol = 3;

//     for (size_t i = 0; i < massa_estrelas.size(); i++) {
//         if(massa_estrelas[i] > superior_massa_sol) {
//             superior_massa_sol = massa_estrelas[i];
//         }
//     }
//     cout << superior_massa_sol;
//     return 0;
// }

#include <iostream>
#include <vector>
#include <windows.h>
using namespace std;

int main() {
    SetConsoleOutputCP(CP_UTF8);

    vector<float>massa_estrelas = {23, 2.02, 2.1, 1.79, 13, 0.12, 300};
    

    for (size_t i = 0; i < massa_estrelas.size(); i++) {
        if (massa_estrelas[i] > 3) {
            cout << massa_estrelas[i] << ", ";
        }
    }


    return 0;
}