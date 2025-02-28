#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include "stack.h"

void push(StackNode** root, char data){
    StackNode* stacknode = malloc(sizeof(SatckNode));
    stackNode->data = data;
    stackNode->next = *root;
    *root = stackNode;
}


char pop(SatckNode** root){
    if(isEnppty(*root)){
        return CHAR_MIN;
    }
    SatckNode* tmp = *root;
    *root = tmp->next;
    char tmpData = tmp->data;
    free(tmp);
    return tmpData;
}

char peek(SatckNode* root){
    if(isEmpaty(root)){
        return CHAR_MIN;
    }
    return root->data;
}

int isEmptychar(SatckNode** root){
    return root == NULL;
}

void displaychar(SatckNode** root){
    StackNode* tmp = root;
    while(tmp != NULL){
        printf("%c ->", tmp->data);
        tmp = tmp->next;
    }
    printf("NULL\n");
}