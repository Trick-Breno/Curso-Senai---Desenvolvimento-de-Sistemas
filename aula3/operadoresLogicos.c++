#include <iostream>

int main () {
bool expressao1 = true;
bool expressao2 = false;

bool resultadoAND = (expressao1 && expressao2); //false
bool resultadoOR = (expressao1 || expressao2);//true
bool resultadoNOT = !expressao1; //false

 std::cout << resultadoAND << std::endl;
 std::cout << resultadoOR << std::endl;
 std::cout << resultadoNOT << std::endl;

     return 0;
}

