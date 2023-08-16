/*3. **Exercício:** Implemente uma versão do Bubble Sort que ordene em ordem decrescente.
   **Dica:** Altere a condição de troca para que elementos maiores sejam trocados.
*/
#include <iostream>

// Bubble Sort
void bubbleSort(int arr[], int size) {
    for (int i = 0; i < size -1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] < arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j +1];
                arr[j +1] = temp;
            }
        }
    }

}

int main() {
    int size = 5;
    int arr[size] = {83,48,19,0,49};

    bubbleSort(arr, size);

    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
    return 0;
}