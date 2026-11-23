#include <stdio.h>

struct Person {
    char name[101];
    int age;
};

int main() {
    struct Person me = {"Yejun", 12}, friend;

    if (scanf("%100s %d", friend.name, &friend.age) != 2) return 0;
    printf("Your name: %s, age: %d\n", me.name, me.age);
    printf("Friend's name: %s, age: %d\n", friend.name, friend.age);
    return 0;
}
