//
// Created by alber on 09/10/2022.
//

#ifndef LIST_ROTATION_LIST_H
#define LIST_ROTATION_LIST_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct list List;

List *list_new();
void list_print(List *l);
void list_append(List *l, int value);
int list_contains(List *l, int value);
void list_rotate(List *l, int rotation_factor);
void list_write(List* l);
void list_kill(List *l);

#endif //LIST_ROTATION_LIST_H
