#include <stdio.h>
#include <math.h>

struct Body {
    int height;
    double weight;
};

struct Body makeStudent(struct Body father, struct Body mother) {
    struct Body student;
    student.height = ((long long)father.height + mother.height) / 2 + 5;
    student.weight = round(((father.weight + mother.weight) / 2 - 4.5) * 10) / 10;
    return student;
}

int main() {
    struct Body father, mother;

    if (scanf("%d %lf", &father.height, &father.weight) != 2) return 0;
    if (scanf("%d %lf", &mother.height, &mother.weight) != 2) return 0;
    struct Body student = makeStudent(father, mother);

    printf("height : %dcm\nweight : %.1fkg\n", student.height, student.weight);
    return 0;
}
