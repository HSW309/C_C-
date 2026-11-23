#include <stdio.h>

struct Person {
    char name[101];
    int age;
};

int main() {
    struct Person person;

    if (scanf("%100s %d", person.name, &person.age) != 2) return 0;
    printf("Your name is %s and you are %d years old.\n", person.name, person.age);
    return 0;
}
