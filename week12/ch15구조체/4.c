#include <stdio.h>

struct Student {
    char school[31];
    int grade;
};

int main() {
    struct Student first = {"Jejuelementary", 6}, second;

    if (scanf("%30s %d", second.school, &second.grade) != 2) return 0;
    printf("%d grade in %s School\n", first.grade, first.school);
    printf("%d grade in %s School\n", second.grade, second.school);
    return 0;
}
