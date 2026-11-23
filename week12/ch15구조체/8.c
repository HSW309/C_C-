#include <stdio.h>

struct Person {
    char name[21];
    int height;
};

int main() {
    struct Person people[5];
    int shortest = 0;

    for (int i = 0; i < 5; i++) {
        if (scanf("%20s %d", people[i].name, &people[i].height) != 2) return 0;
        if (people[i].height < people[shortest].height) shortest = i;
    }
    printf("%s %d\n", people[shortest].name, people[shortest].height);
    return 0;
}
