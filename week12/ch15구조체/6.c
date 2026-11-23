#include <stdio.h>

struct Person {
    char name[101];
    int height;
};

int main() {
    struct Person people[3];

    for (int i = 0; i < 3; i++) {
        if (scanf("%100s %d", people[i].name, &people[i].height) != 2) return 0;
    }
    for (int i = 0; i < 3; i++) {
        printf("%s : %dcm\n", people[i].name, people[i].height);
    }
    return 0;
}
