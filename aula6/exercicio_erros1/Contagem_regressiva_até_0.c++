#include <iostream>
using namespace std;

int main() {
   int count = 5;
   while (count >= 0) {
        cout << count << endl;
        count--; // o count deve conter um decremento e não um incremento
   }

   return 0;
}