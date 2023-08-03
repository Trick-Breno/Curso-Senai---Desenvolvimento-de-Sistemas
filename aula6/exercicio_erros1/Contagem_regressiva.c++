#include <iostream>
using namespace std;

int main() {
   int count = 10;
   do {
        cout << count << endl;
        count--; // o correto é um decremento e não incremento
   } while (count > 0);

   return 0;
}