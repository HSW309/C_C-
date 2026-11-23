#include <stdio.h>

struct Person {
    char name[101];
    int height;
    double weight;
};

int main() {
    struct Person people[5];

    for (int i = 0; i < 5; i++) {
        if (scanf("%100s %d %lf", people[i].name, &people[i].height, &people[i].weight) != 3) return 0;
    }
    for (int i = 0; i < 4; i++) {
        for (int j = 4; j > i; j--) {
            if (people[j].height < people[j - 1].height) {
                struct Person temp = people[j];
                people[j] = people[j - 1];
                people[j - 1] = temp;
            }
        }
    }
    for (int i = 0; i < 5; i++) {
        printf("%s %d %.1f\n", people[i].name, people[i].height, people[i].weight);
    }
    return 0;
}
