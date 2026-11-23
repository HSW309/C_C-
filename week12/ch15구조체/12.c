#include <stdio.h>

struct Score {
    char name[101];
    int kor;
    int eng;
};

struct Score plus(struct Score a, struct Score b) {
    struct Score total = {"Total", a.kor + b.kor, a.eng + b.eng};
    return total;
}

int main() {
    struct Score a, b;

    if (scanf("%100s %d %d", a.name, &a.kor, &a.eng) != 3) return 0;
    if (scanf("%100s %d %d", b.name, &b.kor, &b.eng) != 3) return 0;
    struct Score total = plus(a, b);

    printf("%s %d %d\n", a.name, a.kor, a.eng);
    printf("%s %d %d\n", b.name, b.kor, b.eng);
    printf("%s %d %d\n", total.name, total.kor, total.eng);
    return 0;
}
