#include <stdio.h>
#include <string.h>

int main() {
    char nome [20]; //declaracao de uma string

    strcopy(nome, "john"); //atribuiçao de valor a uma string

    char sobrenome[20] = "doe"; //delcaraçao e inicializaçao de uma string

   strcat(nome, " "); //concatenaçao de strings
   strcat(nome, sobrenome);

   prinft("Nome completo: %s\n", nome); //exibicao e umna string
   return 0; 
}