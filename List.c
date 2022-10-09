//
// Created by alber on 09/10/2022.
//

#include "List.h"

#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int value;
    struct node *next;
} Node;

struct list {
    Node *head;
};

Node *node_new(int value) {
    Node *new_node = malloc(sizeof(Node));
    new_node -> value = value;
    new_node -> next = NULL;
    return new_node;
}

List* list_new(){
    List *l = malloc(sizeof(List));
    l -> head = NULL;
    return l;
}

void list_append(List *l, int value) {

    if (!(l -> head)) {
        l -> head = node_new(value);
        return;
    }
    Node *curr = l -> head;

    while(curr -> next)
        curr = curr -> next;

    curr -> next = node_new(value);
}

