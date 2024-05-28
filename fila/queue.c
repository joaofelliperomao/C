#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include "queue.h"

void enqueue(QueueNode** root, char data){
    QueueNode* qNode = malloc(sizeof(QueueNode));
    qNode->data = data;
    qNode->next = NULL;
    if(isEmpty(*root)){
        *root = qNode;

    }
    else{
        QueueNode* tmp = (*root)->next;
        if(tmp == NULL){
            (*root)->next = qNode;
        }
    }
    else{
        do{
        
            if(tmp->next == NULL){
                tmp->next = qNode;
            }
            else{
                tmp = tmp->next;
            }
        }while(tmp->next !== NULL);
    }
}

char dequeue(QueueNode** root){
    if(isEmpty(*root)){
        return CHAR_MIN;
    }
    else{
        QueueNode* tmp = *root;
        *root = tmp->next;
        char tmpData = tmp->data;
        free(tmp);
    }
    
}