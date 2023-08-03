#include <iostream>     // Entrada e saída padrão (cin e cout)
#include <string>       // Manipulação de strings
#include <vector>       // Contêiner de lista dinâmica
#include <algorithm>    // Funções para algoritmos de ordenação, busca, etc.
#include <fstream>      // Manipulação de arquivos de entrada/saída
#include <Windows.h>    // Funções específicas do Windows (configuração do console)
using namespace std;    //permite que o código utilize os elementos (funções, classes, etc.) sem precisar usar o prefixo "std::".

//Declaração da classe "FichaPersonagem" com atributos para definir as informações do personagem.
class FichaPersonagem {
public:
    string nome;
    string raca;
    string classe;
    int nivel;
    int pontosVida;
    int pontosAtaque;
    vector<string> habilidades;
    vector<string> equipamentos;
    vector<string> poderes;

    // aqui o usuário ira escolher uma opçao de raça, e cada opçao será atribuida a um numero usando o switch case
    void escolherRaca() {
        cout << "\nEscolha a raça do personagem:\n";
        cout << "1. Elfos Lunares\n";
        cout << "2. Anões das Profundezas\n";
        cout << "3. Nymphas Aquáticas\n";
        cout << "4. Centauros da Floresta\n";
        cout << "5. Draconianos Alados\n";
        int opcaoRaca;
        cin >> opcaoRaca;

        switch (opcaoRaca) {
            case 1:
                raca = "Elfos Lunares";
                break;
            case 2:
                raca = "Anões das Profundezas";
                break;
            case 3:
                raca = "Nymphas Aquáticas";
                break;
            case 4:
                raca = "Centauros da Floresta";
                break;
            case 5:
                raca = "Draconianos Alados";
                break;
            default:
            // Caso o usuário escolha uma opção inválida, exibe uma mensagem e pede para escolher novamente.
                cout << "Opção inválida. Escolha novamente.\n";
                escolherRaca();
                break;
        }
    }

    // aqui o usuário ira escolher uma opçao de classe, e cada opçao será atribuida a um numero usando o switch case
    void escolherClasse() {
        cout << "\nescolha a classe do personagem:\n";
        cout << "1. Guardião das Runas\n";
        cout << "2. Caçador de Sombras\n";
        cout << "3. Xamã Elemental\n";
        cout << "4. Engenheiro Mecânico\n";
        cout << "5. Sacerdote da Lua Profunda\n";
        int opcaoClasse;
        cin >> opcaoClasse;

        switch (opcaoClasse) {
            case 1:
                classe = "Guardião das Runas";
                break;
            case 2:
                classe = "Caçador de Sombras";
                break;
            case 3:
                classe = "Xamã Elemental";
                break;
            case 4:
                classe = "Engenheiro Mecânico";
                break;
            case 5:
                classe = "Sacerdote da Lua Profunda";
                break;
            default:
                cout << "Opção inválida. Escolha novamente.\n";
                escolherClasse();
                break;
        }
    }


    void escolherNivel() {
        // Exibe uma mensagem para o usuário informando que deve escolher o nível do personagem entre 1 e 5.
        cout << "\nNível do Personagem (1 a 5): ";
        // Lê o valor do nível informado pelo usuário e armazena na variável "nivel".
        cin >> nivel;
        // Verifica se o nível está fora do intervalo válido (1 a 5).
        if (nivel < 1 || nivel > 5) {
            // Caso o nível seja inválido, exibe uma mensagem de erro e pede para escolher novamente.
            cout << "Nível inválido. Escolha novamente.\n";
            escolherNivel();
        }
    }

    void escolherPontosVida() {
        cout << "\nPontos de Vida do Personagem (1 a 5): ";
        cin >> pontosVida;

        if (pontosVida < 1 || pontosVida > 5) {
            cout << "Pontos de Vida inválidos. Escolha novamente.\n";
            escolherPontosVida();
        }
    }

    void escolherPontosAtaque() {
        cout << "\nPontos de Ataque do Personagem (1 a 5): ";
        cin >> pontosAtaque;

        if (pontosAtaque < 1 || pontosAtaque > 5) {
            cout << "Pontos de Ataque inválidos. Escolha novamente.\n";
            escolherPontosAtaque();
        }
    }


    /* aqui o usuário pode escolher varias habilidades, e cada opçao será atribuida
    a um numero usando o switch case, o looping de escolha vai se repetindo ate que ele digite 0
    para parar de adicionar habilidades*/
    void escolherHabilidades() {
        cout << "\nEscolha as habilidades do personagem (digite '0' para parar):\n";
        cout << "1. Sombra Ardente\n";
        cout << "2. Vórtice da Eternidade\n";
        cout << "3. Manto da Invisibilidade\n";
        cout << "4. Punho Celestial\n";
        cout << "5. Canção da Cura\n";
        cout << "6. Olhar da Verdade\n";
        cout << "7. Rajada Glacial\n";
        cout << "8. Tempestade de Raios\n";
        cout << "9. Escudo Impenetrável\n";
        cout << "10. Invocação dos Antigos\n";

        int opcaoHabilidade;
        do {
            cin >> opcaoHabilidade;
            switch (opcaoHabilidade) {
                case 0:
                    break;
                case 1:
                    habilidades.push_back("Sombra Ardente");
                    break;
                case 2:
                    habilidades.push_back("Vórtice da Eternidade");
                    break;
                case 3:
                    habilidades.push_back("Manto da Invisibilidade");
                    break;
                case 4:
                    habilidades.push_back("Punho Celestial");
                    break;
                case 5:
                    habilidades.push_back("Canção da Cura");
                    break;
                case 6:
                    habilidades.push_back("Olhar da Verdade");
                    break;
                case 7:
                    habilidades.push_back("Rajada Glacial");
                    break;
                case 8:
                    habilidades.push_back("Tempestade de Raios");
                    break;
                case 9:
                    habilidades.push_back("Escudo Impenetrável");
                    break;
                case 10:
                    habilidades.push_back("Invocação dos Antigos");
                    break;
                default:
                    cout << "Opção inválida. Tente novamente.\n";
                    break;
            }
        } while (opcaoHabilidade != 0);
    }


    /* aqui o usuário pode escolher varios equipamentos, e cada opçao será atribuida
    a um numero usando o switch case, o looping de escolha vai se repetindo ate que ele digite 0
    para parar de adicionar equipamentos*/
    void escolherEquipamentos() {
        cout << "\nEscolha os equipamentos do personagem (digite '0' para parar):\n";
        cout << "1. Espada da Aurora\n";
        cout << "2. Arco Élfico\n";
        cout << "3. Escudo do Guardião\n";
        cout << "4. Luvas do Trovão\n";
        cout << "5. Elmo da Sabedoria\n";
        cout << "6. Armadura do Dragão\n";
        cout << "7. Anel da Cura\n";
        cout << "8. Botas Velozes\n";
        cout << "9. Amuleto da Invisibilidade\n";
        cout << "10. Cajado da Tempestade\n";

        int opcaoEquipamento;
        do {
            cin >> opcaoEquipamento;
            switch (opcaoEquipamento) {
                case 0:
                    break;
                case 1:
                    equipamentos.push_back("Espada da Aurora");
                    break;
                case 2:
                    equipamentos.push_back("Arco Élfico");
                    break;
                case 3:
                    equipamentos.push_back("Escudo do Guardião");
                    break;
                case 4:
                    equipamentos.push_back("Luvas do Trovão");
                    break;
                case 5:
                    equipamentos.push_back("Elmo da Sabedoria");
                    break;
                case 6:
                    equipamentos.push_back("Armadura do Dragão");
                    break;
                case 7:
                    equipamentos.push_back("Anel da Cura");
                    break;
                case 8:
                    equipamentos.push_back("Botas Velozes");
                    break;
                case 9:
                    equipamentos.push_back("Amuleto da Invisibilidade");
                    break;
                case 10:
                    equipamentos.push_back("Cajado da Tempestade");
                    break;
                default:
                    cout << "Opção inválida. Tente novamente.\n";
                    break;
            }
        } while (opcaoEquipamento != 0);
    }

    /* aqui o usuário pode escolher varios poderes, e cada opçao será atribuida
    a um numero usando o switch case, o looping de escolha vai se repetindo ate que ele digite 0
    para parar de adicionar poderes*/
    void escolherPoderes() {
        cout << "\nEscolha os poderes do personagem (digite '0' para parar):\n";
        cout << "1. Sopro da Fênix\n";
        cout << "2. Lâmina da Lua Crescente\n";
        cout << "3. Escudo de Éter\n";
        cout << "4. Chamado das Quimeras\n";
        cout << "5. Cura da Fonte Divina\n";
        cout << "6. Rajada Estelar\n";
        cout << "7. Aparição Etérea\n";
        cout << "8. Tempestade de Areia Viva\n";
        cout << "9. Dança das Sombras\n";

        int opcaoPoder;
        do {
            cin >> opcaoPoder;
            switch (opcaoPoder) {
                case 0:
                    break;
                case 1:
                    poderes.push_back("Sopro da Fênix");
                    break;
                case 2:
                    poderes.push_back("Lâmina da Lua Crescente");
                    break;
                case 3:
                    poderes.push_back("Escudo de Éter");
                    break;
                case 4:
                    poderes.push_back("Chamado das Quimeras");
                    break;
                case 5:
                    poderes.push_back("Cura da Fonte Divina");
                    break;
                case 6:
                    poderes.push_back("Rajada Estelar");
                    break;
                case 7:
                    poderes.push_back("Aparição Etérea");
                    break;
                case 8:
                    poderes.push_back("Tempestade de Areia Viva");
                    break;
                case 9:
                    poderes.push_back("Dança das Sombras");
                    break;
                default:
                    cout << "Opção inválida. Tente novamente.\n";
                    break;
            }
        } while (opcaoPoder != 0);
    }


    /*A função mostrarFicha() é responsável por exibir na tela todas as informações 
    do personagem cadastrado na ficha. Ela imprime o nome do personagem, sua raça, 
    classe, nível, pontos de vida e pontos de ataque. Além disso, 
    mostra as habilidades, equipamentos e poderes do personagem, 
    listando cada um deles em linhas separadas com seus respectivos nomes.
    */
    void mostrarFicha() {
        cout << "\nFicha do Personagem:\n";
        cout << "Nome: " << nome << endl;
        cout << "\nRaça: " << raca << endl;
        cout << "\nClasse: " << classe << endl;
        cout << "\nNível: " << nivel << endl;
        cout << "\nPontos de Vida: " << pontosVida << endl;
        cout << "\nPontos de Ataque: " << pontosAtaque << endl;

        cout << "\nHabilidades:\n";
        for (const string& habilidade : habilidades) {
            cout << "- " << habilidade << endl;
        }

        cout << "\nipamentos:\n";
        for (const string& equipamento : equipamentos) {
            cout << "- " << equipamento << endl;
        }

        cout << "\nPoderes:\n";
        for (const string& poder : poderes) {
            cout << "- " << poder << endl;
        }
    }

    /*A função removerEquipamento remove um item da lista de equipamentos do personagem, 
    permitindo que o usuário escolha o item a ser excluído através de um número. 
    Se a lista estiver vazia ou se o número for inválido, exibirá uma mensagem apropriada.*/
    void removerEquipamento() {
        if (equipamentos.empty()) {
            cout << "A lista de equipamentos está vazia.\n";
            return;
        }

        cout << "Lista de equipamentos:\n";
        for (size_t i = 0; i < equipamentos.size(); i++) {
            cout << i + 1 << ". " << equipamentos[i] << endl;
        }

        cout << "Digite o número do item que deseja remover: ";
        int numeroItem;
        cin >> numeroItem;

        if (numeroItem >= 1 && numeroItem <= static_cast<int>(equipamentos.size())) {
            equipamentos.erase(equipamentos.begin() + numeroItem - 1);
            cout << "Item removido da lista de equipamentos.\n";
        } else {
            cout << "Número de item inválido. Nenhum item foi removido.\n";
        }
    }

    /*A função exibirEquipamentos() mostra a lista de equipamentos do personagem no console. 
    Ela percorre o vetor de equipamentos e imprime cada item na tela, precedido por um hífen.*/
    void exibirEquipamentos() {
        cout << "Lista de equipamentos:\n";
        for (const string& equipamento : equipamentos) {
            cout << "- " << equipamento << endl;
        }
    }

    /*A função buscarEquipamento procura um item específico na lista de 
    equipamentos do personagem e informa se o item foi encontrado ou não.*/
    void buscarEquipamento() {
        cin.ignore();
        cout << "Digite o nome do item que deseja buscar: ";
        string nomeItem;
        getline(cin, nomeItem);

        auto it = find(equipamentos.begin(), equipamentos.end(), nomeItem);
        if (it != equipamentos.end()) {
            cout << "Item encontrado na lista de equipamentos.\n";
        } else {
            cout << "Item não encontrado na lista de equipamentos.\n";
        }
    }

    /*A função compararEquipamentos compara duas strings e retorna true se a primeira 
    for alfabeticamente menor que a segunda, caso contrário, retorna false. 
    Essa função é usada para ordenar o vetor de equipamentos em ordem alfabética 
    na função ordenarEquipamentos.*/
    static bool compararEquipamentos(const string& a, const string& b) {
        return a < b;
    }

    void ordenarEquipamentos() {
        sort(equipamentos.begin(), equipamentos.end(), compararEquipamentos);
        cout << "Lista de equipamentos ordenada em ordem alfabética.\n";
    }

    /*A função salvarEquipamentosEmArquivo salva os equipamentos de um personagem em um 
    arquivo de texto. Se o arquivo for aberto com sucesso, os equipamentos são escritos no arquivo, 
    e uma mensagem de sucesso é exibida. Caso contrário, uma mensagem de erro é mostrada.*/
    void salvarEquipamentosEmArquivo(const string& nomeArquivo) {
        ofstream arquivo(nomeArquivo);
        if (arquivo.is_open()) {
            for (const string& equipamento : equipamentos) {
                arquivo << equipamento << endl;
            }
            arquivo.close();
            cout << "Equipamentos salvos no arquivo com sucesso.\n";
        } else {
            cout << "Não foi possível abrir o arquivo para salvar os equipamentos.\n";
        }
    }

    /*A função carregarEquipamentosDeArquivo lê os dados de equipamentos salvos em um 
    arquivo de texto e os adiciona na lista de equipamentos da classe FichaPersonagem. 
    Ela limpa a lista atual, lê o arquivo linha por linha e adiciona os equipamentos à 
    lista usando push_back. Depois, exibe uma mensagem de sucesso ou erro.*/
    void carregarEquipamentosDeArquivo(const string& nomeArquivo) {
        ifstream arquivo(nomeArquivo);
        if (arquivo.is_open()) {
            equipamentos.clear();
            string equipamento;
            while (getline(arquivo, equipamento)) {
                equipamentos.push_back(equipamento);
            }
            arquivo.close();
            cout << "Equipamentos carregados do arquivo com sucesso.\n";
        } else {
            cout << "Não foi possível abrir o arquivo para carregar os equipamentos.\n";
        }
    }
};

int main() {
    // Configurando a codificação UTF-8 para o console no Windows
    SetConsoleOutputCP(CP_UTF8);

    // permite que você armazene e acesse as informações do personagem 
    FichaPersonagem personagem;

    /*Neste trecho, o código solicita ao usuário o nome e outras características do personagem. 
    Essas informações são armazenadas na ficha do personagem usando a classe FichaPersonagem.*/
    cout << "Preenchimento da Ficha do Personagem\n";

    cout << "Nome: ";
    cin.ignore();
    getline(cin, personagem.nome);

    personagem.escolherRaca();
    personagem.escolherClasse();
    personagem.escolherNivel();
    personagem.escolherPontosVida();
    personagem.escolherPontosAtaque();
    personagem.escolherHabilidades();
    personagem.escolherEquipamentos();
    personagem.escolherPoderes();

    // Exibindo a ficha completa após o preenchimento
    personagem.mostrarFicha();

    // Menu de opções após o preenchimento
    int opcaoMenu;
    do {
        cout << "\nMenu de Opções:\n";
        cout << "1. Adicionar itens à lista de equipamentos\n";
        cout << "2. Remover item da lista de equipamentos\n";
        cout << "3. Exibir todos os itens da lista de equipamentos\n";
        cout << "4. Buscar item na lista de equipamentos\n";
        cout << "5. Mostrar ficha do personagem\n";
        cout << "6. Ordenar lista de equipamentos em ordem alfabética\n";
        cout << "7. Salvar equipamentos\n";
        cout << "8. Carregar equipamentos\n";
        cout << "0. Sair\n";
        cout << "Escolha uma opção: ";
        cin >> opcaoMenu;

        switch (opcaoMenu) {
            case 1:
                personagem.escolherEquipamentos();
                break;
            case 2:
                personagem.removerEquipamento();
                break;
            case 3:
                personagem.exibirEquipamentos();
                break;
            case 4:
                personagem.buscarEquipamento();
                break;
            case 5:
                personagem.mostrarFicha();
                break;
            case 6:
                personagem.ordenarEquipamentos();
                break;
            case 7:
                personagem.salvarEquipamentosEmArquivo("equipamentos.txt");
                break;
            case 8:
                personagem.carregarEquipamentosDeArquivo("equipamentos.txt");
                break;
            case 0:
                cout << "Saindo do programa.\n";
                break;
            default:
                cout << "Opção inválida. Tente novamente.\n";
                break;        
        }
    } while (opcaoMenu != 0);

    return 0;
}
