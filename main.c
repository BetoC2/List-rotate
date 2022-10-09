#include "List.h"

int main(void) {

    List *l = list_new();
    list_append(l, 1);
    list_append(l, 2);
    list_append(l, 3);
    list_append(l, 4);
    list_append(l, 5);

    return 0;
}
