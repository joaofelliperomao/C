#include <stdio.h>
#include <stdlib.h>
#include "tabela_hash.h"

int main(int argc, char* argv[]){
    put("DF", "Brasilia", tabela);
    put("SE", "Aracaju", tabela);
    put("PB","Joao Pessoa", tabela);
    put("PA","Belem", tabela);

    printf("%s\n", get("PB", tabela));
    printf("%s\n", get("PA", tabela));
    printf("%s\n", get("SE", tabela));

    printf("Contans DF? %d\n", contains("DF", tabela));
    printf("Contans DF? %d\n", contains("SP", tabela));
    remover("DF", tabela);
    printf("Contans DF? %d\n", contains("DF", tabela));

exit(0);
}