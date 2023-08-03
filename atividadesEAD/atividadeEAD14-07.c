
#include <stdio.h>
#include <stdlib.h>

struct Item {
   char name[20];
   float price;
};

void printItems(struct Item items[], int count) {
   printf("Itens registrados:\n");
   for (int i = 0; i < count; i++) {
        printf("%d. Nome: %s - Preço: %.2f\n", i + 1, items[i].name, items[i].price);
   }
   printf("\n");
}

int main() {
   struct Item items[100];
   int count = 0;
   int option;

   do {
        printf("Sistema de Lista de Itens\n");
        printf("Escolha uma opção:\n");
        printf("1. Adicionar item\n");
        printf("2. Imprimir itens\n");
        printf("3. Sair\n");
        scanf("%d", &option);

        if (option == 1) {
            if (count < 100) {
                printf("Digite o nome do item: ");
                scanf("%s", items[count].name);
                printf("Digite o preço do item: ");
                scanf("%f", &items[count].price);
                count++;
                printf("Item adicionado com sucesso!\n");
            } else {
                printf("Limite máximo de itens atingido.\n");
            }
        } else if (option == 2) {
            if (count > 0) {
                printItems(items, count);
            } else {
                printf("Não há itens registrados.\n");
            }
        } else if (option != 3) {
            printf("Opção inválida. Tente novamente.\n");
        }

   } while (option != 3);

   return 0;
}
