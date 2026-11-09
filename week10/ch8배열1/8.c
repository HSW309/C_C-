#include <stdio.h>

int main() {
    double avg[6] = {85.6, 79.5, 83.1, 80.0, 78.2, 75.0};
    int a, b;

    scanf("%d %d", &a, &b);
    printf("%.1f\n", avg[a - 1] + avg[b - 1]);
    return 0;
}
