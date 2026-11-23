#include <stdio.h>
#include <string.h>

struct Contact {
    char name[101];
    char tel[101];
    char addr[101];
};

int main() {
    struct Contact people[3];
    int first = 0;

    for (int i = 0; i < 3; i++) {
        if (scanf("%100s %100s %100s", people[i].name, people[i].tel, people[i].addr) != 3) return 0;
        if (strcmp(people[i].name, people[first].name) < 0) first = i;
    }
    printf("name : %s\ntel : %s\naddr : %s\n", people[first].name, people[first].tel, people[first].addr);
    return 0;
}
