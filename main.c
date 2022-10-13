#include "List.h"

List *list_read(FILE*);
void list_write(List*);

int main(int argv, char *argc[]) {

    FILE *file = fopen("input.txt", "r");
    if (!file) {
        printf("The file 'input.txt' doesn't exist\n");
        return 0xA;
    }

    if ( (!argc[1]) || (argc[1] && strcmp(argc[1],"rotate_list"))) {
        printf("No se introdujo rotate_list");
        return 0;
    }

    List *list = list_read(file);
    fclose(file);

    int num;
    char *xd;

    num = strtol(argc[2],&xd,10);

    list_rotate(list, num);
    list_write(list);
    list_kill(list);

    return 0;
}

List* list_read(FILE* file) {
    List *list = list_new();
    int num;

    while (fscanf(file, "%d", &num) > 0)
        list_append(list, num);
    return list;
}
