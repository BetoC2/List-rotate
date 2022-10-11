//
// Created by alber on 09/10/2022.
//

#include "List.h"


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

void list_print(List *l) {
    Node *curr = l -> head;

    while(curr) {
        printf("[%d]->", curr -> value);
        curr = curr -> next;
    }

    printf("NULL\n");
}

void list_rotate(List *l, int rotation_factor) {
    if (!(l->head) || !(l-> head -> next) )
        return;

    Node *first = l -> head;
    Node *curr = first;

    if (rotation_factor) {
        while (curr -> next -> next) {
            curr = curr -> next;
        }

        l -> head = curr -> next;
        l -> head -> next = first;
        curr -> next = NULL;
        list_rotate(l, rotation_factor - 1);
    }
}

void list_write(List* list) {
    FILE* file = fopen("result.txt", "w");
    Node* curr = list -> head;

    while(curr) {
        fprintf(file,"%d\n",curr->value);
        curr = curr -> next;
    }
    fclose(file);
}
