#include <iostream>
using namespace std;


const int TAMANHO_ESTOQUE = 100;

struct Produto {
    string nome;
    int codigo;
    float preco;
    int quantidade;
};

Produto estoque[TAMANHO_ESTOQUE];
int totalProdutos = 0; // Variável que controla o número total de produtos registrados no estoque

void registrarEntrada() {
    // Solicitar informações sobre o novo produto e armazenar no estoque
    cout << "Informe o nome do produto: ";
    cin >> estoque[totalProdutos].nome;

    cout << "Informe o código do produto: ";
    cin >> estoque[totalProdutos].codigo;

    cout << "Informe o preço do produto: ";
    cin >> estoque[totalProdutos].preco;

    cout << "Informe a quantidade do produto: ";
    cin >> estoque[totalProdutos].quantidade;

    totalProdutos++;
}

void registrarVenda() {
    int codigoProduto;
    // Solicitar informações sobre o produto vendido
    cout << "Informe o código do produto: ";
    cin >> codigoProduto;

    // Procurar o produto no estoque
    int indiceProduto = -1;
    for (int i = 0; i < totalProdutos; i++) {
        if (estoque[i].codigo == codigoProduto) {
            indiceProduto = i;
            break;
        }
    }

    if (indiceProduto != -1) {
        // Verificar a disponibilidade do produto
        if (estoque[indiceProduto].quantidade > 0) {
            cout << "Produto disponível! Realize o registro da venda." << endl;
            estoque[indiceProduto].quantidade--;
        } else {
            cout << "Produto esgotado!" << endl;
        }
    } else {
        cout << "Produto não encontrado!" << endl;
    }
}


void gerarRelatorio() { // exibe um relatório do estoque, mostrando o nome, código e quantidade de cada produto registrado.
    for (int i = 0; i < totalProdutos; i++) {
        cout << "Nome: " << estoque[i].nome << endl;
        cout << "Código: " << estoque[i].codigo << endl;
        cout << "Quantidade: " << estoque[i].quantidade << endl;
        cout << "-----------------------------" << endl;
    }
}

int main() { //O código acima implementa um menu de opções em um programa principal 
    int opcao;
    do {
        cout << "===== MENU =====" << endl;
        cout << "1. Registrar entrada de produto" << endl;
        cout << "2. Registrar venda de produto" << endl;
        cout << "3. Gerar relatório de estoque" << endl;
        cout << "4. Sair" << endl;
        cout << "Escolha uma opção: ";
        cin >> opcao;

        if (opcao == 1) {
            registrarEntrada();
        } else if (opcao == 2) {
            registrarVenda();
        } else if (opcao == 3) {
            gerarRelatorio();
        }
    } while (opcao != 4);

    return 0;
}


   