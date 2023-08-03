#include <iostream>
using namespace std;

int main() {
   int sum = 0;
   int num = 1;
   while (num <= 10) {
        sum += num;
        num++; // faltou o incremento na variavel num
   }
   cout << "A soma dos 10 primeiros números é: " << sum << endl;

   return 0;
}