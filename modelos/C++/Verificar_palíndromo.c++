#include <iostream>
using namespace std;

int main() {
   string word = "level";
   bool is_palindrome = true;
   int i = 0;
   while (i < word.length()) {
        if (word[i] != word[word.length() - i - 1]) {
            is_palindrome = false;
        }
        i++;
   }
   if (is_palindrome) {
        cout << word << " é um palíndromo." << endl;
   } else {
        cout << word << " não é um palíndromo." << endl;
   }

   return 0;
}


//correçao do chat
// #include <iostream>
// #include <cctype> // Biblioteca necessária para usar a função tolower
// using namespace std;

// int main() {
//     string word = "Level";
//     bool is_palindrome = true;
//     int i = 0;

//     // Converter todas as letras para minúsculas antes de fazer a comparação
//     for (char& c : word) {
//         c = tolower(c);
//     }

//     while (i < word.length() / 2) {
//         if (word[i] != word[word.length() - i - 1]) {
//             is_palindrome = false;
//             break; // Se encontrar uma letra diferente, não é um palíndromo, podemos sair do loop.
//         }
//         i++;
//     }

//     if (is_palindrome) {
//         cout << word << " é um palíndromo." << endl;
//     } else {
//         cout << word << " não é um palíndromo." << endl;
//     }

//     return 0;
// }
