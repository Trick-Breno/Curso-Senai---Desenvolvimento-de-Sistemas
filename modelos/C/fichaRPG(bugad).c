#include <stdio.h>
#include <string.h>
#include <stdbool.h>

// Defining a structure to represent the character sheet
struct FichaPersonagem {
    char nome[100];
    char raca[100];
    char classe[100];
    int nivel;
    int pontosVida;
    int pontosAtaque;
    char habilidades[10][100];
    char equipamentos[10][100];
    char poderes[10][100];
};

// Function to choose the character's race
void escolherRaca(struct FichaPersonagem* personagem) {
    printf("\nEscolha a raça do personagem:\n");
    printf("1. Elfos Lunares\n");
    printf("2. Anões das Profundezas\n");
    printf("3. Nymphas Aquáticas\n");
    printf("4. Centauros da Floresta\n");
    printf("5. Draconianos Alados\n");

    int opcaoRaca;
    scanf("%d", &opcaoRaca);

    switch (opcaoRaca) {
    case 1:
        strcpy(personagem->raca, "Elfos Lunares");
        break;
    case 2:
        strcpy(personagem->raca, "Anões das Profundezas");
        break;
    case 3:
        strcpy(personagem->raca, "Nymphas Aquáticas");
        break;
    case 4:
        strcpy(personagem->raca, "Centauros da Floresta");
        break;
    case 5:
        strcpy(personagem->raca, "Draconianos Alados");
        break;
    default:
        printf("Opção inválida. Escolha novamente.\n");
        escolherRaca(personagem);
        break;
    }
}

// Function to choose the character's class
void escolherClasse(struct FichaPersonagem* personagem) {
    printf("\nEscolha a classe do personagem:\n");
    printf("1. Guardião das Runas\n");
    printf("2. Caçador de Sombras\n");
    printf("3. Xamã Elemental\n");
    printf("4. Engenheiro Mecânico\n");
    printf("5. Sacerdote da Lua Profunda\n");

    int opcaoClasse;
    scanf("%d", &opcaoClasse);

    switch (opcaoClasse) {
    case 1:
        strcpy(personagem->classe, "Guardião das Runas");
        break;
    case 2:
        strcpy(personagem->classe, "Caçador de Sombras");
        break;
    case 3:
        strcpy(personagem->classe, "Xamã Elemental");
        break;
    case 4:
        strcpy(personagem->classe, "Engenheiro Mecânico");
        break;
    case 5:
        strcpy(personagem->classe, "Sacerdote da Lua Profunda");
        break;
    default:
        printf("Opção inválida. Escolha novamente.\n");
        escolherClasse(personagem);
        break;
    }
}

// Function to choose the character's level
void escolherNivel(struct FichaPersonagem* personagem) {
    printf("\nNível do Personagem (1 a 5): ");
    scanf("%d", &personagem->nivel);

    if (personagem->nivel < 1 || personagem->nivel > 5) {
        printf("Nível inválido. Escolha novamente.\n");
        escolherNivel(personagem);
    }
}

// Function to choose the character's hit points
void escolherPontosVida(struct FichaPersonagem* personagem) {
    printf("\nPontos de Vida do Personagem (1 a 5): ");
    scanf("%d", &personagem->pontosVida);

    if (personagem->pontosVida < 1 || personagem->pontosVida > 5) {
        printf("Pontos de Vida inválidos. Escolha novamente.\n");
        escolherPontosVida(personagem);
    }
}

// Function to choose the character's attack points
void escolherPontosAtaque(struct FichaPersonagem* personagem) {
    printf("\nPontos de Ataque do Personagem (1 a 5): ");
    scanf("%d", &personagem->pontosAtaque);

    if (personagem->pontosAtaque < 1 || personagem->pontosAtaque > 5) {
        printf("Pontos de Ataque inválidos. Escolha novamente.\n");
        escolherPontosAtaque(personagem);
    }
}

// Function to choose character's abilities
void escolherHabilidades(struct FichaPersonagem* personagem) {
    printf("\nEscolha as habilidades do personagem (digite '0' para parar):\n");
    printf("1. Sombra Ardente\n");
    printf("2. Vórtice da Eternidade\n");
    printf("3. Manto da Invisibilidade\n");
    printf("4. Punho Celestial\n");
    printf("5. Canção da Cura\n");
    printf("6. Olhar da Verdade\n");
    printf("7. Rajada Glacial\n");
    printf("8. Tempestade de Raios\n");
    printf("9. Escudo Impenetrável\n");
    printf("10. Invocação dos Antigos\n");

    int opcaoHabilidade;
    int habilidadeIndex = 0;
    do {
        scanf("%d", &opcaoHabilidade);
        switch (opcaoHabilidade) {
        case 0:
            break;
        case 1:
            strcpy(personagem->habilidades[habilidadeIndex++], "Sombra Ardente");
            break;
        case 2:
            strcpy(personagem->habilidades[habilidadeIndex++], "Vórtice da Eternidade");
            break;
        case 3:
            strcpy(personagem->habilidades[habilidadeIndex++], "Manto da Invisibilidade");
            break;
        case 4:
            strcpy(personagem->habilidades[habilidadeIndex++], "Punho Celestial");
            break;
        case 5:
            strcpy(personagem->habilidades[habilidadeIndex++], "Canção da Cura");
            break;
        case 6:
            strcpy(personagem->habilidades[habilidadeIndex++], "Olhar da Verdade");
            break;
        case 7:
            strcpy(personagem->habilidades[habilidadeIndex++], "Rajada Glacial");
            break;
        case 8:
            strcpy(personagem->habilidades[habilidadeIndex++], "Tempestade de Raios");
            break;
        case 9:
            strcpy(personagem->habilidades[habilidadeIndex++], "Escudo Impenetrável");
            break;
        case 10:
            strcpy(personagem->habilidades[habilidadeIndex++], "Invocação dos Antigos");
            break;
        default:
            printf("Opção inválida. Tente novamente.\n");
            break;
        }
    } while (opcaoHabilidade != 0);
}

// Function to choose character's equipment
void escolherEquipamentos(struct FichaPersonagem* personagem) {
    printf("\nEscolha os equipamentos do personagem (digite '0' para parar):\n");
    printf("1. Espada da Aurora\n");
    printf("2. Arco Élfico\n");
    printf("3. Escudo do Guardião\n");
    printf("4. Luvas do Trovão\n");
    printf("5. Elmo da Sabedoria\n");
    printf("6. Armadura do Dragão\n");
    printf("7. Anel da Cura\n");
    printf("8. Botas Velozes\n");
    printf("9. Amuleto da Invisibilidade\n");
    printf("10. Cajado da Tempestade\n");

    int opcaoEquipamento;
    int equipamentoIndex = 0;
    do {
        scanf("%d", &opcaoEquipamento);
        switch (opcaoEquipamento) {
        case 0:
            break;
        case 1:
            strcpy(personagem->equipamentos[equipamentoIndex++], "Espada da Aurora");
            break;
        case 2:
            strcpy(personagem->equipamentos[equipamentoIndex++], "Arco Élfico");
            break;
        case 3:
            strcpy(personagem->equipamentos[equipamentoIndex++], "Escudo do Guardião");
            break;
        case 4:
            strcpy(personagem->equipamentos[equipamentoIndex++], "Luvas do Trovão");
            break;
        case 5:
            strcpy(personagem->equipamentos[equipamentoIndex++], "Elmo da Sabedoria");
            break;
        case 6:
            strcpy(personagem->equipamentos[equipamentoIndex++], "Armadura do Dragão");
            break;
        case 7:
            strcpy(personagem->equipamentos[equipamentoIndex++], "Anel da Cura");
            break;
        case 8:
            strcpy(personagem->equipamentos[equipamentoIndex++], "Botas Velozes");
            break;
        case 9:
            strcpy(personagem->equipamentos[equipamentoIndex++], "Amuleto da Invisibilidade");
            break;
        case 10:
            strcpy(personagem->equipamentos[equipamentoIndex++], "Cajado da Tempestade");
            break;
        default:
            printf("Opção inválida. Tente novamente.\n");
            break;
        }
    } while (opcaoEquipamento != 0);
}

// Function to choose character's powers
void escolherPoderes(struct FichaPersonagem* personagem) {
    printf("\nEscolha os poderes do personagem (digite '0' para parar):\n");
    printf("1. Sopro da Fênix\n");
    printf("2. Lâmina da Lua Crescente\n");
    printf("3. Escudo de Éter\n");
    printf("4. Chamado das Quimeras\n");
    printf("5. Cura da Fonte Divina\n");
    printf("6. Rajada Estelar\n");
    printf("7. Aparição Etérea\n");
    printf("8. Tempestade de Areia Viva\n");
    printf("9. Dança das Sombras\n");

    int opcaoPoder;
    int poderIndex = 0;
    do {
        scanf("%d", &opcaoPoder);
        switch (opcaoPoder) {
        case 0:
            break;
        case 1:
            strcpy(personagem->poderes[poderIndex++], "Sopro da Fênix");
            break;
        case 2:
            strcpy(personagem->poderes[poderIndex++], "Lâmina da Lua Crescente");
            break;
        case 3:
            strcpy(personagem->poderes[poderIndex++], "Escudo de Éter");
            break;
        case 4:
            strcpy(personagem->poderes[poderIndex++], "Chamado das Quimeras");
            break;
        case 5:
            strcpy(personagem->poderes[poderIndex++], "Cura da Fonte Divina");
            break;
        case 6:
            strcpy(personagem->poderes[poderIndex++], "Rajada Estelar");
            break;
        case 7:
            strcpy(personagem->poderes[poderIndex++], "Aparição Etérea");
            break;
        case 8:
            strcpy(personagem->poderes[poderIndex++], "Tempestade de Areia Viva");
            break;
        case 9:
            strcpy(personagem->poderes[poderIndex++], "Dança das Sombras");
            break;
        default:
            printf("Opção inválida. Tente novamente.\n");
            break;
        }
    } while (opcaoPoder != 0);
}

// Function to display the character's information
void mostrarFicha(const struct FichaPersonagem* personagem) {
    printf("\nFicha do Personagem:\n");
    printf("Nome: %s\n", personagem->nome);
    printf("Raça: %s\n", personagem->raca);
    printf("Classe: %s\n", personagem->classe);
    printf("Nível: %d\n", personagem->nivel);
    printf("Pontos de Vida: %d\n", personagem->pontosVida);
    printf("Pontos de Ataque: %d\n", personagem->pontosAtaque);

    printf("\nHabilidades:\n");
    for (int i = 0; i < 10; i++) {
        if (strlen(personagem->habilidades[i]) > 0) {
            printf("- %s\n", personagem->habilidades[i]);
        }
    }

    printf("\nEquipamentos:\n");
    for (int i = 0; i < 10; i++) {
        if (strlen(personagem->equipamentos[i]) > 0) {
            printf("- %s\n", personagem->equipamentos[i]);
        }
    }

    printf("\nPoderes:\n");
    for (int i = 0; i < 10; i++) {
        if (strlen(personagem->poderes[i]) > 0) {
            printf("- %s\n", personagem->poderes[i]);
        }
    }
}

int main() {
    struct FichaPersonagem personagem;
    printf("Preenchimento da Ficha do Personagem\n");

    printf("Nome: ");
    scanf(" %[^\n]s", personagem.nome);

    escolherRaca(&personagem);
    escolherClasse(&personagem);
    escolherNivel(&personagem);
    escolherPontosVida(&personagem);
    escolherPontosAtaque(&personagem);
    escolherHabilidades(&personagem);
    escolherEquipamentos(&personagem);
    escolherPoderes(&personagem);

    mostrarFicha(&personagem);

    // Resto do código aqui...

    return 0;
}
