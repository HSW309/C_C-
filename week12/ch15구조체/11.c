#include <stdio.h>

struct Point {
    double x;
    double y;
};

int main() {
    struct Point a, b, center;

    if (scanf("%lf %lf %lf %lf", &a.x, &a.y, &b.x, &b.y) != 4) return 0;
    center.x = (a.x + b.x) / 2;
    center.y = (a.y + b.y) / 2;
    printf("Center point = (%.1f, %.1f)\n", center.x, center.y);
    return 0;
}
