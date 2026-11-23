#include <stdio.h>

struct Contact {
    char name[101];
    char tel[101];
    char addr[101];
};

int main() {
    struct Contact person;

    if (scanf("%100s %100s %100s", person.name, person.tel, person.addr) != 3) return 0;
    printf("name : %s\ntel : %s\naddr : %s\n", person.name, person.tel, person.addr);
    return 0;
}
