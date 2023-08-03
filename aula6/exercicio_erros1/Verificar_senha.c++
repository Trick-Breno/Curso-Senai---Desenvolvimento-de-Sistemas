#include <iostream>
#include <string>

using namespace std;

int main() {
   string password;
   do {
        cout << "Digite a senha: ";
        cin >> password;
   } while (password == "secreto"); // para no looping se repetir a senha deve ser diferente de "secreto" e nao igual

   cout << "Senha correta!" << endl;
   return 0;
}