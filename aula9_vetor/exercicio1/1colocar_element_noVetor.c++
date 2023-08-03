#include <iostream>
using namespace std;

#define SIZE 5

int main() {
    int elementos[SIZE];

    cout << "Digite " << SIZE << " números:" << endl;

    for ( int i = 0; i < SIZE; i++) {
        cin >> elementos[i];
    }

    cout << "Elementos do vetor:" << endl;
    for ( int i = 0; i < SIZE; i++) {
        cout << elementos[i]<< " ";
    }
    

    return 0;
}

// #include <iostream>
// #include <vector>
// using namespace std;

// int main() {
//     vector<int>elementos;
//     int num;

//     cout << "Digite 5 números:" << endl;

//     while (elementos.size() < 5) {
//         cin >> num;
//         elementos.push_back(num);
//     }

//     for ( int i = 0; i < 5; i++) {
//         cout << elementos[i]<< " ";
//     }
    

//     return 0;
// }
