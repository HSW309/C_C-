#include <stdio.h>

int main() {
    int a[10], sum = 0;

    for(int i = 0; i < 10; i++){
        scanf("%d", &a[i]);
    }
    for(int i = 0; i < 10; i++){
        sum += a[i];
    }
    printf("sum = %d\navg = %.1f\n", sum, sum / 10.0);
    return 0;
}
