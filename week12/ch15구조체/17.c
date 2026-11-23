#include <stdio.h>

struct Student {
    char name[21];
    int score[3];
    int total;
};

void input(struct Student students[], int n) {
    for (int i = 0; i < n; i++) {
        scanf("%20s %d %d %d", students[i].name, &students[i].score[0],
              &students[i].score[1], &students[i].score[2]);
        students[i].total = students[i].score[0] + students[i].score[1] + students[i].score[2];
    }
}

void sort(struct Student students[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = n - 1; j > i; j--) {
            if (students[j].total > students[j - 1].total) {
                struct Student temp = students[j];
                students[j] = students[j - 1];
                students[j - 1] = temp;
            }
        }
    }
}

void output(struct Student students[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%s %d %d %d %d\n", students[i].name, students[i].score[0],
               students[i].score[1], students[i].score[2], students[i].total);
    }
}

int main() {
    struct Student students[10];
    int n;

    if (scanf("%d", &n) != 1 || n < 1 || n > 10) return 0;
    input(students, n);
    sort(students, n);
    output(students, n);
    return 0;
}
