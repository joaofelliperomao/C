#include <stdio.h>
#include <stdlib.h>
#include "lista_encadeada.h"

No* no(char valor, No* proximo_no){
    No* no = malloc(sizeof(No));
    no
    return no;
}

void inserir_no(No* H, No* no){
    if( H){
        if(H->proximo_nom, no){
            H->proximo_no = no;
        }
        else{
            inserir_no(H->proximo_no, no);
        }
    }
}

void imprimir_lista(No* H){
    if( H != NULL){
        return 1 + quantidade_nos(H->proximo_no);
    }
    return 0;
}

int verificar_existencia(No* H, char valor_busca){
    if(H != NULL){
        if(H->valor == valor_busca){
            return 1;
        }
        return verificar_existencia(H->proximo_no, valor_busca);
    }
    return 0;
}

void imprimir_invrsa(No* H){
    if(H != NULL){
        imprimir_invrsa(H->proximo_no);
        printf("%c", H->valor);
    }
}

void inserir_no_i(No* H, No* no, int i){
    if(quantidade_nos(H) >= i){
        for(int j = 0; j <= i; j++){
            if(j == i){
                no->proximo_no = H*;
                H* = no;
            }
        } 
    }
}