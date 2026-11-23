#include <stdio.h>

struct Student {
    char name[21];
    char school[21];
    int grade;
};

int main() {
    struct Student student;

    if (scanf("%20s %20s %d", student.name, student.school, &student.grade) != 3) return 0;
    printf("Name : %s\nSchool : %s\nGrade : %d\n", student.name, student.school, student.grade);
    return 0;
}
