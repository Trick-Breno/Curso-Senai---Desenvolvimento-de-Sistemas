#include <iostream>

int main () {
int a  = 5;
int b = 3;

bool igual = (a == b); //false
bool diferente = (a != b); //true
bool maior = (a > b); //true
bool menor = (a < b); //false
bool maiorOuIgual = (a >= b); //true
bool menorOuIgual = (a <= b); //false

 std::cout << igual << std::endl;
 std::cout << diferente << std::endl;
 std::cout << maior << std::endl;
 std::cout << menor << std::endl;
 std::cout << maiorOuIgual << std::endl;
 std::cout << menorOuIgual << std::endl;
 
     return 0;
}

