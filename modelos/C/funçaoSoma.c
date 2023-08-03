#include <stdio.h>
int somar (int num1, int num2) {

int resultado = num1 + num2;

return resultado;
}

int subtrair ( int num1, int num2) {

    int resultado = num1 - num2;

    return resultado;
}

int main() {

    int numero1, numero2;

    printf("Digite o primeiro numero:");
    scanf("%d", &numero1);

    printf("Digite o segundo numero:");
    scanf("%d", &numero2);

    int resultadoSoma = somar(numero1, numero2);
    int resultadoSubtracao = subtrair (numero1, numero2);

    printf("A soma é: %d\n", resultadoSoma); 
    printf("A subtração é: %d\n", resultadoSubtracao); 

    return 0;
}





















// int main(){

//     int num1;
//     int num2;


//     std::cout << "Escolha um numero: ";
//     std::cin >> num1;

//     std::cout << "Escolha outro numero: ";
//     std::cin >> num2;

//     int soma = num1 + num2;
//     int subtracao = num1 - num2;
//     int multiplicacao = num1 * num2;

//     std::cout << soma << std::endl;
//     std::cout <<  subtracao << std::endl;
//     std::cout << multiplicacao << std::endl;


//     return 0;
// }
