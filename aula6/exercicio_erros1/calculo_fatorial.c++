#include <iostream>
using namespace std;

int main() {
   int num = 5;
   int factorial = 1;
   int i = 1;
   do {
        factorial *= i;
        i++; // o incremento estava na posião errada

   } while (i < num);
   cout << "O fatorial de " << num << " é " << factorial << endl;

   return 0;
}