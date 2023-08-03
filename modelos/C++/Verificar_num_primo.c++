#include <iostream>
using namespace std;

int main() {
   int num = 7;
   bool is_prime = true;
   int i = 2;
   while (i <= num) {
        if (num % i == 0) {
            is_prime = false;
            break;
        }
        i++;
   }
   if (is_prime) {
        cout << num << " é um número primo." << endl;
   } else {
        cout << num << " não é um número primo." << endl;
   }

   return 0;
}

// #include <iostream> 
// #include <limits>
// #include <windows.h>
// using namespace std;

// int num;
// int i;
// bool primo = true;

// //digitar um numero conferir se é um numero válido
// void digitarNum(){
//     cout << "Escolha um número: ";

//     while (true) {
//         cin >> num;

//         if (cin.fail()) {
//             cout << "Digite um número válido";

//             cin.clear();
//             cin.ignore(numeric_limits<streamsize>::max(), '\n');
//         } else {
//             break;
//         }
//     }
// }

// void numPrimo() {
//     for (i = 2; i <= num / 2; i++) {
//         if ( num % i == 0) {
//             primo = false;
//             break;
//         }
//     }

//     if (primo) {
//         cout << "O número " << num << " é primo." <<endl;
//     } else {
//         cout << "O número " << num << " não é primo" <<endl;
//     }
// }

// int main() {
//     SetConsoleOutputCP(CP_UTF8);

//     digitarNum();
//     numPrimo();

//     return 0;
// }