#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "tabela_hash.h"

int hash(char* chave){
    return chave[0]-65;
}

char** tabela_hash(){
    char**tabela = malloc(sizeof(char*)*TAM_TABELA);

    for(int i = 0; i < TAM_TABELA; i++){
        tabela[i] = malloc(sizeof(char)*TAM_VALOR);
        strcpy(tabela[i], "");
    }
    return tabela;
}
void put(char* chave, char* valor, char** tabela){
    strcpy(tabela[hash(chave)], valor);
}
char* get(char* chave, char** tabela){
    return tabela[hash(chave)];
}
int contains(char* chave, char** tabela){
    int tam = strlew
}
void remove(char* chave, char** tabela){
     printf("");
}
