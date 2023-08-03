#include <iostream>
using namespace std;

int main() {
   string text = "Loop For";
   for (int i = 0; i <= text.length(); i++) { // char é uma palavra reservada, nao pode ser usada como nome de variavel
        cout << text[i] << endl;
   }

   return 0;
}