#include <stdio.h>

struct Student {
    char name[101];
    int score;
};

int main() {
    struct Student students[5];
    int best = 0;

    for (int i = 0; i < 5; i++) {
        if (scanf("%100s %d", students[i].name, &students[i].score) != 2) return 0;
        if (students[i].score > students[best].score) best = i;
    }
    printf("%s %d\n", students[best].name, students[best].score);
    return 0;
}
