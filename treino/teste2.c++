#include <iostream>
#include <string>
#include <vector>


int main(){
   std::vector<std::string> names;

    std::string name;
    std::cout << "Digite um nome: ";
    getline(std::cin, name);
    names.push_back(name); // pushback
    std::cout << "Nome adicionado com sucesso!" << std::endl;

    return 0;
}
