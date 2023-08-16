/***Exercício:** Modifique o Bubble Sort para que ele pare de fazer comparações quando nenhum elemento for trocado em uma iteração.
   **Dica:** Introduza uma variável de troca para rastrear se houve alguma troca na iteração atual.
*/
// #include <iostream>

// void bubbleSort(int arr[], int size) {
//     bool troca; // Variável de troca para rastrear se houve alguma troca na iteração atual

//     for (int i = 0; i < size - 1; i++) {
//         troca = false; // Inicializa a variável de troca como falsa para cada iteração

//         for (int j = 0; j < size - i - 1; j++) {
//             if (arr[j] > arr[j + 1]) {
//                 // Trocar os elementos arr[j] e arr[j+1]
//                 int temp = arr[j];
//                 arr[j] = arr[j + 1];
//                 arr[j + 1] = temp;

//                 troca = true; // Indica que houve uma troca nesta iteração
//             }
//         }

//         // Se não houve nenhuma troca nesta iteração, o array já está ordenado
//         if (!troca) {
//             break;
//         }
//     }
// }

// int main() {
//     int size;
//     std::cout << "Digite o tamanho do array: ";
//     std::cin >> size;

//     int arr[size];
//     std::cout << "Digite os elementos do array:" << std::endl;
//     for (int i = 0; i < size; i++) {
//         std::cin >> arr[i];
//     }

//     bubbleSort(arr, size);

//     std::cout << "Array ordenado:" << std::endl;
//     for (int i = 0; i < size; i++) {
//         std::cout << arr[i] << " ";
//     }

//     return 0;
// }

#include <iostream>
using namespace std;

void bubbleSort(int arr[], int size) {
    bool troca;

    for (int i = 0; i < size -1; i++) {
        troca = false;

        for (int j = 0; j < size -i -1; j++) {
            if (arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;

                troca = true;
            }
        }

        if (!troca) {
            break;
        }
    }
}
int main () {
    int size = 5;
    int arr[size] = {21,23,59,11,13};

    bubbleSort(arr, size);

    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
}