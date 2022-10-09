//
// Created by alber on 09/10/2022.
//

#ifndef LIST_ROTATION_LIST_H
#define LIST_ROTATION_LIST_H

typedef struct list List;

List* list_new();
void list_print(List *l);
void list_append(List *l, int value);

int list_contains(List *l, int value);
int list_del(List *l, int value);

#endif //LIST_ROTATION_LIST_H
