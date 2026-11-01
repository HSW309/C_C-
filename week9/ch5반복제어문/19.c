#include <stdio.h>

int main() {
    double base = 0, height = 0;
    char ch = 'Y';
    while(ch == 'Y' || ch == 'y'){
        if(scanf("%lf %lf", &base, &height) != 2) break;
        printf("Triangle area = %.1f\nContinue? ", base * height / 2);
        if(scanf(" %c", &ch) != 1) break;
    }
    return 0;
}
